for i in range(int(input())):
    N = int(input())
    x, y, z = (N-1)//3, (N-1)//5, (N-1)//15
    sum = 3*x*(x+1) + 5*y*(y+1) - 15*z*(z+1)
    print(sum//2)
