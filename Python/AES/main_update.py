import encrypt as ec, decrypt as dc, format_print as f
import generate_round_key as g_r_k

'''
case1:AES-128
明文 = "hello,world!1234"
密钥 = "0123456789999999"
密文 = "CABD064B180259DA44A68BC7506DD136"
case2:AES-128
明文 = "hello,world!"
密钥 = "0123456789999999"
密文 = "C5240C53843F33749B59E0EE98B589BA04"
case3:AES-192
明文 = "hello,world!hello,world!"
密钥 = "0123456789999999"
密文 = "6948C59B7BD085E152A5C0744962F1906404CE689AE8CBBB2C4B012674F29F7208"
case4:AES-256
明文 = "hello,world!hello,world!"
密钥 = "0123456789999999"
密文 = "59A5DC5ED09D8865B3224E0D09BA66E3A3740498A5E50B2CA331A118554DD54E08"
'''
#输入16位字符，每位字符转化为ascii码后转化为16进制，占8位，一共是128位
def main():
    res = init()
    #rounds是加密轮数
    if(res == 128):
        rounds = 10
    elif(res == 192):
        rounds = 12
    else:
        rounds = 14
    
    print("=============AES-{:d}加密算法=============".format(res))
    print("1.加密")
    print("2.解密")
    print("3.退出")
    choice = input("请选择：")
    if choice == "3":
        exit()
    elif choice != "2" and choice != "1":
        print("输入错误，请重新输入！")
        main()
    else:
        array= []
         #读取16位字符串，即128位
        if choice == "1":
            plaintext = input("请输入明文：")
        else:
            plaintext = input("请输入密文：")

        round_key = input("请输入密钥：")
        
        key = []
        for i in range(16):#将明文与密钥分别每两个字符存入数组中
            key.append(hex(ord(round_key[i])))
            key[i] = key[i][2:].upper()#去掉0x,将密钥中的每个字符转化为大写

        #由行排序转换为列排序
        f.row_to_column(key)

        keys = g_r_k.generate_round_key(key, rounds)#根据加密模式生成轮密钥
        
        if choice == "1":#加密
            ec.rounds_encrypt(plaintext, keys, rounds)
        else:#解密
            dc.rounds_decrypt(plaintext, keys, rounds)
        
def init():
    print("欢迎使用AES加密算法，请选择加/解密模式：")
    print("1.AES-128")
    print("2.AES-192")
    print("3.AES-256")
    print("4.退出")
    choice = input("请选择：")
    if choice == "4":
        exit()
    elif choice == "1":
        return 128 
    elif choice == "2":
        return 192
    elif choice == "3":
        return 256
    else:
        print("输入错误，请重新输入！")
        init()

if __name__ == "__main__":
    main()