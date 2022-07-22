def begin_tag(name):
    return "<" + name + ">" + "\n"


def end_tag(name):
    return "</" + name + ">" + "\n"

s = int(input("enter start value: "))
e = int(input("enter end value: "))
step = int(input("enter step: "))
char = input("enter a char: ")
if char == 's':
    print("\tinch\tcm\n")
    for i in range(s, step + e, step):
        print("\t{:.1f}".format(i), "\t{:.1f}".format(i * 2.54))
else:
    f = open("in2cm.html", "w")
    f.write(begin_tag("html"))
    f.write(begin_tag("title"))
    f.write("IN2CM\n")
    f.write(end_tag("title"))
    f.write("   inch   cm" + "<br />")
    for i in range(s, e + step, step):
        f.write("   " + '%.1f' % i + "   " + '%.1f' % (i * 2.54) + "<br />" + "\n")
    f.write(end_tag("html"))
    f.close()
