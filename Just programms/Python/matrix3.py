matrix = []
count = 0
for i in range(4):
    matrix.append([])
    for j in range(4):
        j = int(input())
        matrix[i].append(j)
for i in range(4):
    for j in range(i):
        if(0 == matrix[i][j] % 3):
            count += 1


print("count  = ", count)
            
"""for i in range(4):
    for j in range(4):
        print("matrix[" + str(i) + "][" + str(j) + "] = ", matrix[i][j])"""


