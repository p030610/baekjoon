
while(True):
    n, compare = map(int, input().split())
    if n == 0 and compare == 0:
        break
    if compare % n == 0:
        print("factor")
        continue
    elif  n % compare == 0:
        print("multiple")
        continue

    else:
        print("neither")
        continue
        
    