#带注释的main函数，用于调试过程
import byte_replace as b_r
import row_shift as rs, column_mix as c_m, round_key_add as r_k_a
import r_row_shift as rrs, r_column_mix as r_c_m
import format_print as f, generate_round_key as g_r_k

#明文plaintext = "ea04658583455d965c3398b0f02dadc5"
#0123456789abcdeffedcba9876543210
#轮密钥round_key = "ac19285777fad15c66dc2900f321416a"
#0f1571c947d9e8590cb7add6af7f6798
#读取32个16进制明文字符串，即128位明文，存入长度为16的列表中
def encrypt():
    #读取明文
    plaintext = '0123456789abcdeffedcba9876543210'#input("请输入明文：")
    roundkey = '0f1571c947d9e8590cb7add6af7f6798'#input("请输入轮密钥：")
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
    print("明文：")
    f.format_print(array)#未进行字节替代的明文
    print("密钥：")
    f.format_print(key)#未进行字节替代的密钥

    for round in range(10):
    #密钥与明文进行异或
        r_k_a.round_key_add(array, key)
        print("第{:d}轮异或：".format(round+1))
        f.format_print(array)#异或后的明文


        #字节替代
        b_r.byte_replace(array)
        print("第{:d}轮字节替代：".format(round+1))
        f.format_print(array)#字节替代后的明文

        #正向行移位变换
        rs.row_shift(array)
        print("第{:d}轮行移位：".format(round+1))
        f.format_print(array)#行移位变换后的明文

        #正向列混淆变换
        c_m.column_mix(array)
        print("第{:d}轮列混淆：".format(round+1))
        f.format_print(array)#列混淆变换后的明文    

        #生成轮密钥
        g_r_k.generate_round_key(key, round)
        print("第{:d}轮轮密钥：".format(round+1))
        f.format_print(key)#生成轮密钥后的密钥

    r_k_a.round_key_add(array, key)
    print("{:d}轮后的密文：".format(round+1))
    f.format_print(array)#异或后的密文

    code = str()
    for i in range(16):
        code = code + array[i].lower()
    print("密文：", code)
encrypt()