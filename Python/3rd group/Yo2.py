n = int(input('Input the number of elements\n'))
a = []
for i in range(n):
    a.append([])
    for j in range(n):
        j = int(input())
        a[i].append(j)
print('The matrix is')
for i in a:
    print(i)