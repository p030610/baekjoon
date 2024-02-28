x,y,w,h = map(int, input().split())

if w-x > x:
    min = x
else:
    min = w-x

if h-y > y:
    miny = y
else:
    miny = h-y

if miny < min:
    print(miny)

else:
    print(min)
    