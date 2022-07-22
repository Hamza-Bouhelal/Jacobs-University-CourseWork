s = int(input("enter start value: "))
e = int(input("enter end value: "))
step = int(input("enter step: "))
print("\tinch\tcm")
for i in range(s, e + step, step):
    print("\t{:.1f}".format(i), "\t{:.1f}".format(i*2.54))
