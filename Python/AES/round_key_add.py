#轮密钥加变换
def round_key_add(array, round_key):
    return array ^ round_key