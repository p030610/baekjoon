
n = input()

def square_process(n) :
    sum = 4
    n = int(n)
    for i in range(0,n+1):
        if i == 0:
            continue
        sum += (5 * (4**(i-1)) - ((2**(i-1)) * ((2**(i-1))-1)*2))

    return sum
            

print(square_process(n))