
n = input()
n_str = str(n)
list = []

for i in n:
    list.append(int(i))

list.sort(reverse=True)

# print(list)

for i in list:
    print(i, end='')
