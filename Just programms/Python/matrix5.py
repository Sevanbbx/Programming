matrix = []
count = 0
summary = 0
average = 0
for i in range(4):
    matrix.append([])
    for j in range(4):
        j = int(input())
        matrix[i].append(j)
for i in range(4):
    for j in range(4-i):
        if(0 == matrix[i][j] % 5):
            count += 1
            summary += matrix[i][j]
average = summary / count

print("average  = ", average)

