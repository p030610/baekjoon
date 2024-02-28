import sys
coordinates_list = {}

coordinate_buffer_x = {}
coordinate_buffer_y = {}

for i in range(0,3):

    x,y = map(int, input().split())

    coordinates_list[2 * i] = x
    coordinates_list[2 * i+1] = y

    coordinate_buffer_x[x] = 0
    coordinate_buffer_y[y] = 0

for j in range(0,3):

    coordinate_buffer_x[coordinates_list[2 * j]] += 1
    coordinate_buffer_y[coordinates_list[2 * j+1]] += 1

final_x = 0
final_y = 0

for k in range(0,3):
    if int(coordinate_buffer_x[coordinates_list[2 * k]]) == 1:
        final_x = str(coordinates_list[2 * k])

    if int(coordinate_buffer_y[coordinates_list[2 * k+1]]) == 1:
        final_y = str(coordinates_list[2 * k+1])

# print(coordinates_list)

# print(coordinate_buffer_x)

print(final_x + " " + final_y)
        
    

