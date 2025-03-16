import byte_replace as b_r, round_key_add as r_k_a
import row_shift as rs, column_mix as c_m, format_print as f

#AES加密
def encrypt(array, keys, rounds):#单轮加密
    for round in range(rounds):
        #密钥与明文进行异或
        r_k_a.round_key_add(array, keys[round*16:(round+1)*16])
        #print("第", round+1, "轮异或：\n", array)

        #字节替代
        b_r.byte_replace(array)
        #print("第", round+1, "轮字替：\n", array)

        #正向行移位变换
        rs.row_shift(array)
        #print("第", round+1, "轮行移：\n", array)

        #正向列混淆变换
        c_m.column_mix(array)
        #print("第", round+1, "轮列混：\n", array)  

    r_k_a.round_key_add(array, keys[(round+1)*16:(round+2)*16])
    f.row_to_column(array)

    code = str()
    for i in range(16):
        if len(array[i]) == 1:
            array[i] = '0' + array[i]
        code = code + array[i]
    return code

def rounds_encrypt(plaintext, keys, rounds):#按明文长度加密
    code = str()
    length = len(plaintext)
    if length % 16 == 0:
        fill = 0#填充位数，加在密文末尾，用于计算填充位数
        block = length // 16#明文块数
    else:
        block = length // 16 + 1
        fill = 16 - length % 16
        for i in range(fill):
            plaintext += "0"#将明文末尾补0
    fill = hex(fill)[2:].upper()
    if len(fill) == 1:
        fill = '0' + fill

    for i in range(block):
        array = []
        for j in range(16):
            array.append(hex(ord(plaintext[i*16+j])))
            array[j].replace("0x", "")#去掉0x
            array[j] = array[j].upper()
        f.row_to_column(array)
        code = code + encrypt(array, keys, rounds)
    print("加密的密文：" + code + fill)