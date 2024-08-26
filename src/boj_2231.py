n = input()

small = 0

for i in range(1,int(n)+1):
    # sum = i % 1000000 + ((i - (i % 1000000)) % 100000) + (i - (i % 1000000 + i % 100000) % 10000) + (i - (i % 1000000 + i % 100000 + i % 10000) % 1000) + (i - (i % 1000000 + i % 100000 + i % 10000 + i % 1000) % 100) + (i - (i % 1000000 + i % 100000 + i % 10000 + i % 1000 + i % 100) % 10) + (i - (i % 1000000 + i % 100000 + i % 10000 + i % 1000 + i % 100 + i % 10))
    # print(sum)
    sum = i

    a = []
    for j in str(i):
        a.append(j)

    for k in a:
        sum = sum + int(k)

    # print(i, sum)

    if sum == int(n):
        # print(216 % 100)        
        small = i
        break


print(small)
