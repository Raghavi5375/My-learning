s = input()
last = len(s) -1
while last >= 0:
    if len(s[0:last]) == int(s[last:]):
        print(s[0:last])
        break
    last -= 1
