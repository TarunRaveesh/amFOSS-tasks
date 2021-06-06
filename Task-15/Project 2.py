def evenFib(n):
    if (n < 2):
        return 0
    else:
        n1, n2 = 0, 2
        Sum = n1 + n2
        while (n >= n2):
            n3 = 4 * n2 + n1
            if (n < n3):
                break
            n1, n2 = n2, n3
            Sum += n2
        return Sum


for i in range(int(input())):
    N = int(input())
    print(evenFib(N))
