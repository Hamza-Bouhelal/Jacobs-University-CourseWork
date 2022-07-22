from random import randrange
import time
from matplotlib import pyplot as plt
import itertools

def what_digit(A):
    return len(str(max(A)))

def counting_sort(A, exp):
    lst = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    for i in range(0, len(A)):
        lst[int((A[i]/exp)%10)] += 1
    for i in range(1, 10):
        lst[i] += lst[i-1]
    lst2 = []
    for _ in range(len(A)):
        lst2.append(0)
    i = len(A) - 1
    while i >= 0:
        lst2[lst[int((A[i]/exp)%10)]-1] = A[i]
        lst[int((A[i]/exp)%10)] -= 1
        i -= 1
    return lst2


def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

def bucket_sort(A):
    lst = []
    for _ in range(len(A)):
        lst.append([])
    for i in A:
        lst[int((len(A))*i)].append(i)
    for i in range(len(A)):
        insertionSort(lst[i])
    k = 0
    for i in range(len(A)):
        for j in range(len(lst[i])):
            A[k] = lst[i][j]
            k += 1
    return A



def bucket_sort_worst_case(n):
    lst = []
    for _ in range(n):
        lst.append(float('0.1'+str(randrange(100))))
    return sorted(lst, reverse=True)

def bucket_sort_Average_case(n):
    lst = []
    for _ in range(n):
        lst.append(float('0.'+str(randrange(100))))
    return lst

def plot_bucket_sort():
    plt.style.use('seaborn')
    ns = [0, 1, 2, 3, 4, 5, 6, 8, 10, 13, 16, 20, 25, 30, 38, 48, 60, 75, 80, 100]
    plt.figure()
    lst, x, y = [], [], []
    for i in ns:
        lst = bucket_sort_worst_case(i)
        beg = time.perf_counter()
        bucket_sort(lst)
        time1 = (time.perf_counter() - beg)
        x.append(i)
        y.append(time1)
    plt.plot(x, y, linestyle='solid', label="Bucket sort worst case")
    lst, x, y = [], [], []
    for i in ns:
        lst = bucket_sort_Average_case(i)
        beg = time.perf_counter()
        bucket_sort(lst)
        time1 = (time.perf_counter() - beg)
        x.append(i)
        y.append(time1)
    plt.plot(x, y, linestyle='solid', label="Bucket sort Average Case")
    plt.title("Bucket sort")
    plt.legend()
    plt.xlabel('Length of the List')
    plt.ylabel('Second')
    plt.show()

def what_long_word(A):
    s = 0
    for ele in A:
        if len(ele)>s:
            s = len(ele)
    return s

def sort_alphabetically(A):
    lst = []
    for ele in A:
        j = what_long_word(A)-len(ele)
        lst.append(ele + j*"`")

    lst = rec(lst)
    lst2 = []
    for ele in lst:
        lst2.append(ele.replace('`', ''))
    return lst2

def rec(A):
    lst = [[] for _ in range(27)]
    a = 97
    for ele in A:
        i = ord(ele[0])-a
        lst[i].append(ele)
    for x in lst:
        if len(x) > 1:
            i = 1
            for a in range(len(x)):
                for b in range(len(x)):
                    if x[a] != x[b]:
                        while ord(x[a][i]) == ord(x[b][i]):
                            i += 1
                        if a < b:
                            if ord(x[a][i])>ord(x[b][i]):
                                x[a],x[b] = x[b], x[a]
                        if b < a:
                            if ord(x[b][i])>ord(x[a][i]):
                                x[a], x[b] = x[b], x[a]
    return list(itertools.chain.from_iterable(lst))


def radix_sort(A):
    exp = 1
    while max(A)/exp > 0:
        A = counting_sort(A, exp)
        exp *= 10
    return A


def case(n, j):
    lst = []
    for _ in range(n):
        lst.append(randrange(1*(10**(j-1)), 9*(10**(j-1))))
    return lst

def plot_Radix_sort_time_complexity():
    plt.style.use('seaborn')
    plt.figure()
    ns = [5, 10, 30, 50] #list length
    n = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40,  50, 100, 250] #max number of digits
    for i in ns:
        x, y = [], []
        for j in n:
            lst = case(i, j)
            beg = time.perf_counter()
            lst = radix_sort(lst)
            time1 = (time.perf_counter() - beg)
            x.append(j)
            y.append(time1)
        plt.plot(x, y, linestyle='solid', label=f"Radix Sort (list length {i})")
    plt.title("Radix sort")
    plt.legend()
    plt.xlabel('max element\'s number of digits')
    plt.ylabel('Seconds')
    plt.show()

def problem_8_1():
    print("a) Counting Sort")
    lst = [9, 1, 6, 7, 6, 2, 1]
    print(lst)
    lst = counting_sort(lst, what_digit(lst))
    print(lst)
    print("-------------------------------------------------------------------------------")
    print("b) Bucket Sort ")
    lst = [ 0.9, 0.1, 0.6, 0.7, 0.6, 0.3, 0.1 ]
    print(lst)
    lst = bucket_sort(lst)
    print(lst)
    print("-------------------------------------------------------------------------------")
    print("c) ads_8.pdf")
    print("-------------------------------------------------------------------------------")
    print("d)sort alphabetically")
    lst = ["word", "category", "cat", "new", "news", "world", "bear", "at", "work", "time"]
    print(lst)
    lst = sort_alphabetically(lst)
    print(lst)
    print("-------------------------------------------------------------------------------")
    print("e)")
    print("bucket sort worst case is when all elements are placed in the same bucket,")
    print("bucket sort's time complexity becomes our sorting algorithm time complexity,")
    print("in our case: O(n^2) for Insertion sort (sorted decreasingly).")
    print("see plot")
    plot_bucket_sort()
    print(end="\n\n\n")

def problem_8_2():
    print("a) Radix Sort")
    lst = case(10, 3)
    print(lst)
    lst = radix_sort(lst)
    print(lst)
    print("-------------------------------------------------------------------------------")
    print("b)")
    print("see plot")
    plot_Radix_sort_time_complexity()

def f():
    print("Problem 8.1:")
    problem_8_1()
    print("-------------------------------------------------------------------------------", end="\n\n\n")
    print("Problem 8.2:")
    problem_8_2()
