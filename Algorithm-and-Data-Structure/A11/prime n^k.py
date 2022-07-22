import time
from matplotlib import pyplot as plt
from functools import *

@lru_cache(maxsize=None)
def isPrime(n, i=2):
    if n <= 2:
        return True if (n == 2) else False
    if n % i == 0:
        return False
    if i * i > n:
        return True
    return isPrime(n, i + 1)

def prime2(n):
    if n > 1:
        for i in range(2, int(n / 2) + 1):
            if (n % i) == 0:
                return False
        else:
            return True
    else:
        return False

lst = [i for i in range(100)]
plt.style.use('seaborn')
plt.figure()
y, y1 = [], []
for ele in lst:
    beg = time.perf_counter()
    prime = isPrime(ele)
    time1 = (time.perf_counter() - beg)
    y.append(time1*1000)
    beg = time.perf_counter()
    prime1 = prime2(ele)
    time1 = (time.perf_counter() - beg)
    y1.append(time1 * 1000)
    if prime == prime1:
        print(ele)
plt.plot(lst, y, linestyle='solid', label="recursive isPrime(n) running time")
plt.plot(lst, y1, linestyle='solid', label="non recursive prime2(n) running time")
plt.legend()
plt.xlabel('n')
plt.ylabel('Second *10^-3')
plt.show()