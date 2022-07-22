from random import randrange
from itertools import product
from matplotlib import pyplot as plt
import time

def longest_ordered_subarray(A):
    lst = [1 for _ in range(len(A))]
    for i in range(1, len(A)):
        for j in range(i):
            if A[i] > A[j] and lst[i] < lst[j] + 1:
                lst[i] = lst[j] + 1
    return findsequence(A, lst)

def findsequence(A, lst):
    rng, res = [ele + 2 for ele in range(max(lst)-1)], []
    for ai in range(len(lst)):
        if lst[ai] == 1:
            temp = [A[ai]]
            res.append(temp)
    for ele in rng:
        for est in res:
            temp_int = 99999
            temp_int2 = 99999
            for ai in range(len(lst)):
                if lst[ai] == ele:
                    if temp_int > A[ai]:
                        temp_int = A[ai]
            if lst.count(ele) == 3:
                for ai in range(len(lst)):
                    if lst[ai] == ele:
                        if temp_int2 > A[ai] and A[ai]!= temp_int:
                            temp_int2 = A[ai]
                est.append(temp_int2)
            else:
                est.append(temp_int)
    s, idx = 0, 0
    for cnt in range(len(res)):
        if len(res[cnt]) > s and not Sorted(res[cnt]):
            s = len(res[cnt])
            idx = cnt
    return res[idx]

def Sorted(lst):
    state = 0
    for i in range(0, len(lst) - 1):
        if lst[i] > lst[i + 1]:
            state = 1
    return state

def Problem1():
    lst = [8, 3, 6, 50, 10, 8, 100, 30, 60, 40, 80]
    for ele in longest_ordered_subarray(lst):
        print(ele, end=" ")
    print()

def fill_triangle(n, state = False):
    lst = []
    for i in range(1, n+1):
        temp = []
        if not state:
            print(f"enter line {i}: ")
        for _ in range(i):
            if not state:
                temp.append(int(input()))
            else:
                temp.append(randrange(10))
        lst.append(temp)
    return lst

def dynamic_sum_triangle(lst, state=True):
    n = len(lst)
    sum = []
    for ele in lst:
        temp = []
        for i in ele:
            temp.append(i)
        sum.append(temp)
    for i in range(n-2, -1, -1):
        for j in range(i+1):
            if sum[i][j] + sum[i+1][j] > sum[i][j] + sum[i+1][j+1]:
                sum[i][j] += sum[i+1][j]
            else:
                sum[i][j] += sum[i + 1][j + 1]
    if state:
        print(sum[0][0])
        temp = 0
        print(lst[i][temp], end=" ")
        for i in range(1, n):
            if sum[i][temp] < sum[i][temp + 1]:
                temp += 1
            print(lst[i][temp], end=" ")
        print()
    return sum[0][0]

def problem2_a():
    lst = [[7], [3, 8], [8, 1, 0], [2, 7, 4, 4], [4, 5, 2, 6, 5]]
    l = dynamic_sum_triangle(lst)

def brute_force_sum_triangle(lst, state=True):
    paths = []
    for decisions in product((0, 1), repeat=len(lst) - 1):
        pos = 0
        path = [lst[0][0]]
        for lr, row in zip(decisions, lst[1:]):
            pos += lr  # cumulative sum of left-right decisions
            path.append(row[pos])
        paths.append(path)
    sums = 0
    for ele in paths:
        current_sum = 0
        for i in ele:
            current_sum += i
        if sums < current_sum:
            sums = current_sum
            result = ele
    if state:
        print(sum(result))
        print(result)
    return sum(result)

def problem2_b():
    lst = [i for i in range(2, 20)]
    plt.style.use('seaborn')
    plt.figure()
    y, y1 = [], []
    for ele in lst:
        temp = fill_triangle(ele, True)
        beg = time.perf_counter()
        l = dynamic_sum_triangle(temp, False)
        time1 = time.perf_counter() - beg
        y.append(time1)
        temp = fill_triangle(ele, True)
        beg = time.perf_counter()
        l = brute_force_sum_triangle(temp, False)
        time1 = time.perf_counter() - beg
        y1.append(time1)
    plt.plot(lst, y, linestyle='solid', label="Dynamic programming solution")
    plt.plot(lst, y1, linestyle='solid', label="Brute force solution")
    plt.legend()
    plt.xlabel('number of lines in the triangle')
    plt.ylabel('Second')
    plt.show()


def main():
    Problem1()
    print("---------------------------------------------------")
    problem2_a()
    print("---------------------------------------------------")
    problem2_b()

main()
