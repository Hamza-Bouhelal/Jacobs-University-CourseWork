    import math
    import time


    def naive_recursive(n):
        if n < 2:
            return n
        else:
            return naive_recursive(n - 1) + naive_recursive(n - 2)


    def buttom_up(n):
        fib_list = [0, 1]
        for fib in range(1, n):
            fib_list.append(fib_list[fib] + fib_list[fib - 1])
        return fib_list[n]


    def closed_form(n):
        return round(((1 + math.sqrt(5)) / 2) ** n / math.sqrt(5))


    def M_multiply(M1, M2):
        res = [[0, 0], [0, 0]]
        for i in range(2):
            for j in range(2):
                for k in range(2):
                    res[i][j] = res[i][j] + M1[i][k] * M2[k][j]
        return res


    def powM(m, p):
        if p == 0:
            return [[1, 0], [0, 1]]
        elif p == 1:
            return m
        else:
            if p % 2 == 0:
                return M_multiply(powM(m, p / 2), powM(m, p / 2))
            else:
                pow = powM(m, (p - 1) / 2)
                res = M_multiply(pow, pow)
                res = M_multiply(res, m)
                return res


    def fib_Matrix(n):
        fib = [[1, 1], [1, 0]]
        res = powM(fib, n)
        return res[0][1]


    ns = [0, 1, 2, 3, 4, 5, 6, 8, 10, 13, 16, 20, 25, 30, 38]
    with open('naive.txt', 'w') as f:
        for i in ns:
            beg = time.perf_counter()
            fib = naive_recursive(i)
            finish = time.perf_counter() - beg
            f.write(str(i) + " ==> " + str(fib) + " in " + str(finish) + " seconds" + "\n")
    with open('button.txt', 'w') as f:
        for i in ns:
            beg = time.perf_counter()
            fib = buttom_up(i)
            finish = time.perf_counter() - beg
            f.write(str(i) + " ==> " + str(fib) + " in " + str(finish) + " seconds" + "\n")
    with open('closed_form.txt', 'w') as f:
        for i in ns:
            beg = time.perf_counter()
            fib = closed_form(i)
            finish = time.perf_counter() - beg
            f.write(str(i) + " ==> " + str(fib) + " in " + str(finish) + " seconds" + "\n")
    with open('matrix.txt', 'w') as f:
        for i in ns:
            beg = time.perf_counter()
            fib = fib_Matrix(i)
            finish = time.perf_counter() - beg
            f.write(str(i) + " ==> " + str(fib) + " in " + str(finish) + " seconds" + "\n")
