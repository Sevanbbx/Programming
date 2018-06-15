num = int(input("Input the number of elements: "))
matrix = []
amount = 0
indexSum = 0
for i in range(num):
    matrix.append([])
    for j in range(num):
        j = int(input())
        matrix[i].append(j)
for i in range(num):
    for j in range(num):
        if(i + j == num - 1):
            for k in range(j, num):
                if((i + k) % 2 == 1):
                    amount += 1

print("Matrix is")
for i in matrix:
    print(i)
print("amount  = ", amount)
