import math


def LPF(n):
    p = -1
    while (n % 2 == 0):
        p = 2
        n /= 2
    for i in range(3, int(math.sqrt(n))+1, 2):
        while (n % i == 0):
            p = i
            n /= i
    if (n > 2):
        p = n
    return int(p)


for i in range(int(input())):
    N = int(input())
    print(LPF(N))
