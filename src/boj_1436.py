n = int(input())

count = 0

for i in range(666, 10000000):

    str_i = str(i)
    # print(str_i)

    for idx in range(0,len(str_i)-2):
        
        # print(idx)
        if str_i[idx] == "6" and str_i[idx+1] == "6" and str_i[idx+2] == "6": #발견
            # print(i)
            # print(count)
            count+=1
            break

    if n == count:
        print(i)
        break

    