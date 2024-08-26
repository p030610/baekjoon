a1,a2 = map(int, input().split())
c = int(input())
n0 = int(input())

# O(g(n)) = {f(n) | 모든 n ≥ n0에 대하여 f(n) ≤ c × g(n)인 양의 상수 c와 n0가 존재한다}

# a1 * n + a0 <= c * g(n)

bigo = True

for i in range(n0, 100):
    # print(str(a1) + " * " + str(i) + " + " + str(a2) + " <= " + str(i) + " * " + str(c))
    if a1 * i + a2 > i * c:
        # print(str(a1) + " * " + str(i) + " + " + str(a2) + " <= " + str(i) + " * " + str(c))
        bigo = False
        break


# print(bigo)
if bigo == True:
    print(1)
else:
    print(0)