import format_print as f

#轮密钥加变换
def round_key_add(array, key):
    for i in range(16):
        array[i] = hex(int(array[i], 16) ^ int(key[i], 16))#将明文与密钥进行异或运算，结果转化为16进制，方便格式化输出
        array[i] = array[i].replace('0x', '').upper()
    f.format_print(array)