def quick_sort_x(dict):

    if len(dict) <= 1:
        return dict
    pivot_x = dict[len(dict) // 2]["x"]
    pivot_y = dict[len(dict) // 2]["y"]
    lesser_dict, equal_dict, greater_dict = [], [], []
    for num in dict:
        if int(num["y"]) < int(pivot_y):
            lesser_dict.append(num)
        elif num["y"] > pivot_y:
            greater_dict.append(num)
        elif num["y"] == pivot_y and num["x"] < pivot_x :
            lesser_dict.append(num)
        elif num["y"] == pivot_y and num["x"] > pivot_x :
            greater_dict.append(num)
        else:
            equal_dict.append(num)
    return quick_sort_x(lesser_dict) + equal_dict + quick_sort_x(greater_dict)

def quick_sort_y(dict):

    y_list = [dict[0]["y"]]

    for i in range(1, len(dict)):
        y_list.append(dict[i]["y"])
        if dict[i-1]["x"] == dict[i]["x"]:
            y_list.append(dict[i]["y"])
        else:
            y_list.sort()
            print(y_list)
            

    return

n = input()

coor_dict = []

count = 0

for i in range(1,int(n)+1):
    a,b = map(int, input().split())

    coor_dict.append({"x" : a, "y": b})

    count += 1

# for i in range(len(coor_dict)-1):
#     for j in range(len(coor_dict)-1-i):
#         if coor_dict[j+1]["x"] < coor_dict[j]["x"]:
#             tmp = coor_dict[j+1]["x"]
#             coor_dict[j+1]["x"] = coor_dict[j]["x"]
#             coor_dict[j]["x"] = tmp

#             tmp = coor_dict[j+1]["y"]
#             coor_dict[j+1]["y"] = coor_dict[j]["y"]
#             coor_dict[j]["y"] = tmp

#         if coor_dict[j+1]["x"] == coor_dict[j]["x"] and coor_dict[j+1]["y"] < coor_dict[j]["y"]:
#             coor_dict[j+1]["y"], coor_dict[j]["y"] = coor_dict[j]["y"], coor_dict[j+1]["y"]

result_dict = quick_sort_x(coor_dict)
# print(result_dict)

# quick_sort_y(coor_dict)


for i in range(len(result_dict)):
    print(str(result_dict[i]["x"]) + " " + str(result_dict[i]["y"]))
            



