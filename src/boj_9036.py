n = int(input())
minx = 10000
miny = 10000
maxx = -10000
maxy = -10000

for i in range(0,n):
    x,y = map(int, input().split())
    if x > maxx:
        maxx=x
    if y > maxy:
        maxy=y
    if x < minx:
        minx = x
    if y < miny:
        miny = y

print((maxx-minx)*(maxy-miny))

