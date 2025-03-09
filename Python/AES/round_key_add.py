#轮密钥加变换
def round_key_add(state, round_key):
    return state ^ round_key