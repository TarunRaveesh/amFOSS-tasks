t = int(input())
while (t>0):
    k = int(input())
    s = input()
    a = s.split()
    sum = 0
    
    if (len(a) > k):
        for j in a[k]:
            sum += ord(j)
    else:
        sum = -1

    print(sum)
    t -= 1