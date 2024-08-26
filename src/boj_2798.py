n,m = map(int, input().split())

closest = 10
list = []

list = input().split()

for i in range(0,n):
    list[i] = int(list[i])

for i in range(0,len(list)):
    for j in range(i+1,len(list)):
        for k in range(j+1, len(list)):
            if (m - (list[i] + list[j] + list[k])) < (m - closest) and (list[i] + list[j] + list[k]) <= m: 
                closest = (list[i] + list[j] + list[k])
                # print("closest update is" + str(closest))
                # print(list[i] , list[j] , list[k])

print(closest)


