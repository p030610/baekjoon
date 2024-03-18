list_inp = input().split() 
index = 0

for i in list_inp:
    list_inp[index] = int(i)
    index += 1

max = max(list_inp)

list_inp.remove(max)

if max >= list_inp[0] + list_inp[1]:
    max = (list_inp[0] + list_inp[1] - 1)
    print(max + list_inp[0] + list_inp[1])
else:
    print(max + list_inp[0] + list_inp[1])
