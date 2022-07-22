def reversee(tup, n):
    tup2 = ()
    for i in range(n):
        tup2 = tup2 + (tup[len(tup)-i-1], )
    return tup2


tup = ()
while 1:
    n = int(input())
    if n<0:
        break
    tup = tup +(n, )
print("the tuple:", tup)
print("the reverse of the tuple:", reversee(tup, len(tup)))

