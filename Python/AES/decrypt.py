import byte_replace as b_r, round_key_add as r_k_a
import r_row_shift as rrs, r_column_mix as r_c_m, format_print as f

#AES解密
def decrypt(array, keys, rounds):
    for round in range(rounds, 0, -1):
        #密钥与密文进行异或
        r_k_a.round_key_add(array, keys[round*16:(round+1)*16])
        
        #逆向列混淆变换
        r_c_m.r_column_mix(array)

        #逆向行移位变换
        rrs.r_row_shift(array)

        #字节替代
        b_r.r_byte_replace(array)

    r_k_a.round_key_add(array, keys[(round-1)*16:round*16])
    f.row_to_column(array)

    plaintext = str()
    for i in range(16):
        array[i] = chr(int(array[i], 16))  # 转为ascii码
        plaintext = plaintext + array[i]
    return plaintext

def rounds_decrypt(code, keys, rounds):#按明文长度加密
    plain_text = str()
    length = len(code)
    fill = int(code[-2:], 16)#填充位数，加在密文末尾，用于计算填充位数
    code = code[:-2]#去掉填充位
    block = length // 32#密文块数

    for i in range(block):
        array = []
        for j in range(0, 32, 2):
            array.append(code[i*32+j:i*32+j+2])
        f.row_to_column(array)
        plain_text = plain_text + decrypt(array, keys, rounds)
    plain_text = plain_text[:-fill]#去掉填充位
    print("解密的明文：" + plain_text)