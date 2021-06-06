from fractions import gcd
from functools import reduce


def lcm(a, b):
    return a*b//gcd(a, b)


for i in range(int(input())):
    N = int(input())
    print(reduce(lcm, range(1, N+1)))
