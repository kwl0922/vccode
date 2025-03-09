import S_box as s, r_S_box as r_s
import row_shift as rs, column_mix as c_m, round_key_add as r_k_a
import r_row_shift as rrs, r_column_mix as r_c_m
import format_print as f

#明文plaintext = "ea04658583455d965c3398b0f02dadc5"
#读取32个16进制明文字符串，即128位明文，存入长度为16的列表中
def main():
    #生成S盒和逆S盒
    s_box = s.generate_s_box()
    rs_box = r_s.generate_r_s_box()

    #读取明文
    plaintext = input("请输入明文：")
    array= []
    for i in range(0, 32, 2):#将明文每两个字符存入数组中
        array.append(plaintext[i:i+2])
    for i in range(16):
        array[i] = array[i].upper()#将明文中的每个字符转化为大写
    f.format_print(array)#未进行字节替代的明文

    #将明文中的每个字符转化为整型，并用S盒进行字节替代
    for i in range(16):
        array[i] = int(array[i], 16)#将数组中的每个字符转化为整型
        array[i] = s_box[array[i]]#用S盒将明文中的每个字符进行字节替代
    f.format_print(array)#进行字节替代后的明文

    #正向行移位变换
    rs.row_shift(array)

    #正向列混淆变换
    c_m.column_mix(array)

    #正向轮密钥加变换
    #r_k_a.round_key_add(array)
main()