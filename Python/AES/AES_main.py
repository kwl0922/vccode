import encrypt as ec, decrypt as dc, format_print as f

'''
明文plaintext = "0123456789abcdeffedcba9876543210"
密钥round_key = "0f1571c947d9e8590cb7add6af7f6798"
密文ciphertext = "d91d4957557ac7cdfb7f6cb74d80576b"
'''

def main():
    print("AES-128加密算法")
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
        roundkey = input("请输入密钥：")
        array= []
        key = []
        for i in range(0, 32, 2):#将明文与密钥分别每两个字符存入数组中
            array.append(plaintext[i:i+2])
            key.append(roundkey[i:i+2])

        #由行排序转换为列排序
        f.row_to_column(array)
        f.row_to_column(key)
        
        for i in range(16):
            array[i] = array[i].upper()#将明文中的每个字符转化为大写
            key[i] = key[i].upper()#将密钥中的每个字符转化为大写
        if choice == "1":#加密
            ec.encrypt(array, key)
        else:#解密
            dc.decrypt(array, key)

if __name__ == "__main__":
    main()