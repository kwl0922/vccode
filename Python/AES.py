import reverse_S_box as r_s, S_box as s

#生成S盒与逆S盒
rs = r_s.main()
s = s.main()
print("S盒为:")
for i in range(256):
    if i % 16 == 0 and i != 0 and i != 256:
        print()
    s[i] = s[i].replace('0x','').upper()
    rs[i] = rs[i].replace('0x','').upper()
    if len(s[i]) == 1:
        s[i] = '0' + s[i]
    if len(rs[i]) == 1:
        rs[i] = '0' + rs[i]
    print(s[i], end = ' ')

print("\n\n逆S盒为:")
for i in range(256):
    if i % 16 == 0 and i != 0 and i != 256:
        print()
    print(rs[i], end = ' ')
print()

#行移位变换

#列混淆变换

#轮密钥加变换

