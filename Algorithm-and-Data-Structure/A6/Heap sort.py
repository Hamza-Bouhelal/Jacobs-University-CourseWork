import math
from random import randrange
import time

def max_Heapify(A, n, i):
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2
    if l < n and A[l] > A[i]:
        largest = l
    if r < n and A[r] > A[largest]:
        largest = r
    if not largest == i:
        A[i], A[largest] = A[largest], A[i]
        max_Heapify(A,n, largest)


def build_max_heap(A):
    n = len(A)
    for i in range(math.floor(n / 2)-1, -1, -1):
        max_Heapify(A, n, i)


def heap_sort(A):
    build_max_heap(A)
    n = len(A)
    for i in range(n-1, 0, -1):
        A[0], A[i] = A[i], A[0]
        max_Heapify(A, i, 0)


def up(A, i):
    Up = (i-1)//2
    if A[Up]< A[i]:
        A[i], A[Up] = A[Up], A[i]
        up(A, Up)


def down(A, i, n):
    l = 2 * i + 1
    r = 2 * i + 2
    if l >= n:
        return i
    elif r >= n:
        A[i], A[l] = A[l], A[i]
        return l
    else:
        if A[l]>A[r]:
            A[i], A[l] = A[l], A[i]
            largest = l
        else:
            A[i], A[r] = A[r], A[i]
            largest = r
        return down(A, largest, n)


def heap_sort_bottom_up(A, n):
    build_max_heap(A)
    m = len(A)
    for i in range(m - 1, 0, -1):
        A[0], A[i] = A[i], A[0]
        n -= 1
        place = down(A, 0, n)
        up(A, place)

def Average_case(n):
    lst = []
    for _ in range(n):
        lst.append(randrange(50))
    return lst, lst



ns = [0, 1, 2, 3, 4, 5, 6, 8, 10, 13, 16, 20, 25, 30, 38, 48, 60, 75, 80, 100, 200, 500, 1000]
lst, lst1 = [], []
print("\nHeap sort:\t\t\t\t\t\t\t\tBottom up Heap sort:")
for i in ns:
    lst, lst1 = Average_case(i)
    beg = time.perf_counter()
    heap_sort(lst)
    final_time = time.perf_counter() - beg
    if i <10:
        print("n = "+str(i)+" in "+"{:2f}".format(final_time*1000)+" *10^-3 second\t\t\t", end="")
    else:
        print("n = "+str(i)+" in "+"{:2f}".format(final_time*1000)+" *10^-3 second\t\t", end="")
    beg = time.perf_counter()
    heap_sort_bottom_up(lst1, len(lst1) - 1)
    final_time = time.perf_counter() - beg
    print("n = " + str(i) + " in " + "{:2f}".format(final_time * 1000) + " *10^-3 second")