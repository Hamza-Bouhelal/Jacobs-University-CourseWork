def scalar_product(v,w):
    sp = 0
    for i in range(len(v)):
        sp = sp + v[i] * w[i]
    return sp
def mini(v):
    mi = v[0]
    p = 0
    for i in range(len(v)):
        if mi > v[i]:
            mi = v[i]
            p = i
    s = str(mi) + " " + str(p)
    return s
def maxi(v):
    mi = v[0]
    p = 0
    for i in range(len(v)):
        if mi < v[i]:
            mi = v[i]
            p = i
    s = str(mi) + " " + str(p)
    return s


n = int(input("enter n: "))
v = ()
w = ()
print("enter first vector: ")
for i in range(0, n):
    ele = int(input())
    v = v + (ele, )
print("enter second vector: ")
for i in range(0, n):
    ele = int(input())
    w = w + (ele, )
print("scalar product: ", scalar_product(v,w))
miniv = mini(v).split()
miniw = mini(w).split()
maxiv = maxi(v).split()
maxiw = maxi(w).split()
print("for v, smallest element is:", miniv[0],"at position:", miniv[1])
print("for v, greatest element is:", maxiv[0],"at position:", maxiv[1])
print("for w, smallest element is:", miniw[0],"at position:", miniw[1])
print("for w, greatest element is:", maxiw[0],"at position:", maxiw[1])

