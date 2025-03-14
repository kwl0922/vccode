# string = "\xc3\x8a\xc2\xbd\x06K\x18\x02Y\xc3\x9aD\xc2\xa6\xc2\x8b\xc3\x87Pm\xc3\x916"
# converted_bytes = bytes(string, 'utf-8')
# print(converted_bytes.decode('utf-8'))

string = "Ê½KYÚD¦ÇPmÑ6"
string = string.encode('utf-8')
print(string)
string = '\xc3\x8a\xc2\xbd\x06K\x18\x02Y\xc3\x9aD\xc2\xa6\xc2\x8b\xc3\x87Pm\xc3\x916'
string = string.encode('utf-8')
print(string)
