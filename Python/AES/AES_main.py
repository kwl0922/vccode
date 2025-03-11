import encrypt as ec, decrypt as dc, format_print as f
import generate_round_key as g_r_k

'''
case1:
明文 = "0123456789abcdeffedcba9876543210"
密钥 = "0f1571c947d9e8590cb7add6af7f6798"
密文 = "d955fb4d1d7a7f8049c76c5757cdb76b"
case2:
明文 = "ea04658583455d965c3398b0f02dadc5"
密钥 = "d955fb4d1d7a7f8049c76c5757cdb76b"
密文 = "9499c533548fc445a05902faff1e7390"
'''
def limit_input(string):#输入限制
    valid_str = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f']
    if len(string) != 32:#判断明文是否为32个16进制字符
            print("长度错误，请重新输入！")
            main()
    for i in range(32):
        if string[i] not in valid_str:#判断明文是否为16进制字符
            print("格式错误，请重新输入！")
            print("格式为0-9, a-f")
            main()

def main():
    print("=============AES-128加密算法=============")
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
         #读取32个16进制明文字符串，即128位明文，存入长度为16的列表中
        if choice == "1":
            plaintext = input("请输入明文：")
        else:
            plaintext = input("请输入密文：")
        limit_input(plaintext)

        roundkey = input("请输入密钥：")
        limit_input(roundkey)

        array= []
        key = []
        for i in range(0, 32, 2):#将明文与密钥分别每两个字符存入数组中
            array.append(plaintext[i:i+2])
            key.append(roundkey[i:i+2])

        #由行排序转换为列排序
        f.row_to_column(array)
        f.row_to_column(key)
        
        rounds = 10#加解密轮数
        for i in range(16):
            array[i] = array[i].upper()#将明文中的每个字符转化为大写
            key[i] = key[i].upper()#将密钥中的每个字符转化为大写
        keys = g_r_k.generate_round_key(key, rounds)#生成10轮的轮密钥
        if choice == "1":#加密
            ec.encrypt(array, keys, rounds)
        else:#解密
            dc.decrypt(array, keys, rounds)

if __name__ == "__main__":
    main()