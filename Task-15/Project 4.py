def LPP(n):
    Palindromes = []
    for i in range(100, 1000):
        for j in range(100, 1000, (1 if i % 11 == 0 else 11)):
            prod = i * j
            if (str(prod) == str(prod)[::-1]):
                if (prod < n):
                    Palindromes.append(i * j)
    print(max(Palindromes))


for i in range(int(input())):
    N = int(input())
    LPP(N)
