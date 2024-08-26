a,b,c,d,e,f = map(int, input().split())

problem = False

for x in range(-999, 1000):
    for y in range(-999, 1000):
        if x * a + y * b == c and x * d + y * e == f:
            print(x, y)
            problem = True
            break
    if problem == True:
        break
