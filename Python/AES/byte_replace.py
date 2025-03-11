import S_box as s, r_S_box as r_s
#字节替代
def byte_replace(array):
    #生成S盒和逆S盒
    s_box = s.generate_s_box()
    rs_box = r_s.generate_r_s_box()
    #将数组中的每个字符转化为整型，并用S盒进行字节替代
    for i in range(16):
        array[i] = int(array[i], 16)#将数组中的每个字符转化为整型
        array[i] = s_box[array[i]]#用S盒将数组中的每个字符进行字节替代