def in2cm_table(s, e, step):
    print("\tinch\tcm")
    for i in range(s, e + step, step):
        print("\t{:.1f}".format(i), "\t{:.1f}".format(i * 2.54))
