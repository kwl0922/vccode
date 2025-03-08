import requests
from bs4 import BeautifulSoup
import os

def get_music_list(url):
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.3'}
    response = requests.get(url, headers=headers)
    response.encoding = 'utf-8'
    soup = BeautifulSoup(response.text, 'html.parser')
    
    music_list = []
    for item in soup.find_all('tr'):
        music_info = item.find('span', class_='txt')
        if music_info:
            music_name = music_info.find('b').get('title')
            music_list.append(music_name)
    
    return music_list

def download_music(music_url, file_path):
    response = requests.get(music_url, stream=True)
    with open(file_path, 'wb') as file:
        for chunk in response.iter_content(chunk_size=1024):
            if chunk:
                file.write(chunk)

if __name__ == "__main__":
    url = 'https://music.163.com/#/discover/toplist?id=3778678'
    music_list = get_music_list(url)
    
    # 假设我们已经获取了音频文件的URL列表
    # 这里仅作为示例，实际情况下需要解析网页获取音频文件的URL
    music_urls = [
        'https://music.163.com/#/discover/toplist?id=3778678/唯一.mp3',
        # 添加更多音频文件的URL
    ]
    
    # 创建保存音频文件的目录
    save_dir = 'D:/music'
    os.makedirs(save_dir, exist_ok=True)
    
    # 下载音频文件
    for idx, music_url in enumerate(music_urls, 1):
        file_path = os.path.join(save_dir, f'music_{idx}.mp3')
        download_music(music_url, file_path)
        print(f"Downloaded: {file_path}")
    
    print("所有音频文件已下载到D:/music")