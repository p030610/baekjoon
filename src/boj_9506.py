


def factors(n):

    factors_list = []
    for i in range(1,n):
        if n % i == 0:
            factors_list.append(i)

    sum = 0

    for j in factors_list:
        sum += int(j)

    if sum == n:
        default_str = str(n) + " = "
        for k in factors_list : 
            default_str = default_str +  str(k) + " + "

        print(default_str[0:-2])

    else:
        print(str(n) + " is NOT perfect.")


n = 0
            
while True:
    n = input()

    n = int(n)

    if n == -1:
        break

    factors(n)

        

