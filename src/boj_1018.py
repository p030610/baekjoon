m,n = map(int, input().split())

chessboard_row_1 = "WBWBWBWB"
chessboard_row_2 = "BWBWBWBW"

chessboard_1 = []
chessboard_2 = []

chessboard_1.append(chessboard_row_2)
chessboard_1.append(chessboard_row_1)
chessboard_1.append(chessboard_row_2)
chessboard_1.append(chessboard_row_1)
chessboard_1.append(chessboard_row_2)
chessboard_1.append(chessboard_row_1)
chessboard_1.append(chessboard_row_2)
chessboard_1.append(chessboard_row_1)

chessboard_2.append(chessboard_row_1)
chessboard_2.append(chessboard_row_2)
chessboard_2.append(chessboard_row_1)
chessboard_2.append(chessboard_row_2)
chessboard_2.append(chessboard_row_1)
chessboard_2.append(chessboard_row_2)
chessboard_2.append(chessboard_row_1)
chessboard_2.append(chessboard_row_2)

minimal = 64

matrix = []

for i in range(0,m):
    matrix.append(input())

for i in range(0,m-7):
    for j in range(0,n-7):

        # print(matrix, chessboard_1)
        

        count = 0

        #case for chessboard 1

        for k in range(i, i+8):
            for l in range(j,j+8):
                # print(chessboard_1[k-i][j-l], matrix[k][l])
                if chessboard_1[k-i][j-l] != matrix[k][l]:
                    count += 1
                    

        # print(count)

        if minimal > count:
            minimal = count

        # print(matrix, chessboard_2)

        count = 0
                    
        #case for chessboard 2

        for k in range(i, i+8):
            for l in range(j,j+8):
                # print(chessboard_2[k-i][j-l], matrix[k][l])
                if chessboard_2[k-i][j-l] != matrix[k][l]:
                    
                    count += 1

        # print(count)

        if minimal > count:
            minimal = count



print(minimal)