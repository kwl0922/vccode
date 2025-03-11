import byte_replace as b_r, generate_round_key as g_r_k
import row_shift as rs, column_mix as c_m, round_key_add as r_k_a

#AES加密
def encrypt(array, key):
    for round in range(10):
        #密钥与明文进行异或
        r_k_a.round_key_add(array, key)

        #字节替代
        b_r.byte_replace(array)

        #正向行移位变换
        rs.row_shift(array)

        #正向列混淆变换
        c_m.column_mix(array)    

        #生成轮密钥
        g_r_k.generate_round_key(key, round)

    r_k_a.round_key_add(array, key)

    code = str()
    for i in range(16):
        code = code + array[i].lower()
    print("加密的密文：", code)