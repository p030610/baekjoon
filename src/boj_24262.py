def sum_of_factorials(n):
    sum = 0
    for i in range(1,n-1):
        sum += ((n-(i+1))*(n-(i+1)+1)//2)
        # for j in range(i+1,n):
        #     sum = sum + (n+1)-(j+1)

        #     print(i,j,n,int((n+1)-(j+1)))
            # for k in range(j+1,n+1):
                # sum+=1

    return int(sum)

n = int(input())

print(sum_of_factorials(n))
print(3)