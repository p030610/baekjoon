n, k = map(int, input().split())

def factors(n,k):

    factors_list = []
    for i in range(1,n+1):
        if n % i == 0:
            factors_list.append(i)

    if len(factors_list) < k:
        print(0)
        return

    # print(factors_list)

    print(factors_list[k-1])

factors(n,k)