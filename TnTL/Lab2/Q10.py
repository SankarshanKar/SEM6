num = 1
for i in range(4):
    s = ""
    for j in range(i + 1):
        s = s + str(num) + " "
        num = num + 1

    print(s)