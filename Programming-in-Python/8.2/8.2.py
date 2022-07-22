s = int(input("enter start value: "))
e = int(input("enter end value: "))
step = int(input("enter step: "))
f = open("output.txt", "w")
f.write("\tinch\tcm\t\tmeter\tkilometer\n")
for i in range(s, e + step, step):
    f.write('\t' + '%.1f' % i + "\t" + '%.1f' % (i * 2.54) +
            '\t' + '%.4f' % (i * 2.54 / 10) + "\t" + '%.7f' % (i * 2.54 / 1000) + "\n")
f.close()
