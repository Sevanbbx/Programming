while True:
    a = int(input("Input the first number of range: "))
    b = int(input("Input the second number of range: "))
    if(b > a):
        break
    else:
        print("ERROR: Second number should be bigger than first!")
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
            for k in range(j):
               if(matrix[i][k] >= a and matrix[i][k] <= b):
                  amount += 1

print("Matrix is")
for i in matrix:
    print(i)
print("amount  = ", amount)

