import math

b, c = 0, 0
def f(x):
    return (x*x + b*x + c) / math.sin(x)
def m(x): # m = slope of f(x)
    return (2*x + b) * math.sin(x) - (x*x + b*x + c) * math.cos(x)

for t in range (int(input())):
    b, c = map(float, input().split())
    LL, HL = 0.0, math.pi/2
    x = (LL + HL)/2
    while (abs(m(x)) > math.pow(10, -6)):
        if (m(x) > 0):
            HL = x
            x = (LL + HL)/2
        else:
            LL = x
            x = (LL + HL)/2
    print(f(x))