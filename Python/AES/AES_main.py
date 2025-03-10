import S_box as s, r_S_box as r_s
import row_shift as rs, column_mix as c_m, round_key_add as r_k_a
import r_row_shift as rrs, r_column_mix as r_c_m
import format_print as f

#明文plaintext = "ea04658583455d965c3398b0f02dadc5"
#0123456789abcdeffedcba9876543210
#轮密钥round_key = "ac19285777fad15c66dc2900f321416a"
#0f1571c947d9e8590cb7add6af7f6798
#读取32个16进制明文字符串，即128位明文，存入长度为16的列表中
def main():
    #生成S盒和逆S盒
    s_box = s.generate_s_box()
    rs_box = r_s.generate_r_s_box()

    #读取明文
    plaintext = input("请输入明文：")
    roundkey = input("请输入轮密钥：")
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

    #密钥与明文进行异或
    r_k_a.round_key_add(array, key)

    #将明文中的每个字符转化为整型，并用S盒进行字节替代
    for i in range(16):
        array[i] = int(array[i], 16)#将数组中的每个字符转化为整型
        array[i] = s_box[array[i]]#用S盒将明文中的每个字符进行字节替代
    print("字节替代后的明文：")
    f.format_print(array)#进行字节替代后的明文

    #正向行移位变换
    print("行移位后的结果：")
    rs.row_shift(array)

    #正向列混淆变换
    print("列混淆后的结果：")
    c_m.column_mix(array)

main()