n = int(input('Input the number of elements\n'))
a = []
b = 0
c = 0
sum1 = 0
sum2 = 0
diagonal_1 = []
diagonal_2 = []
for i in range(n):
    a.append([])
    for j in range(n):
        j = int(input())
        a[i].append(j)
print('The matrix is')
for i in a:
    print(i)

for i in a:
    diagonal_1.append(a[b][c])
    b+=1
    c+=1
print('-----------------------------')
q=-1
for i in a:
        diagonal_2.append(i[q])
        q-=1
        
print('The first array is -', diagonal_1)
print('The second array is -', diagonal_2)


for i in diagonal_1:
    sum1+=i
for i in diagonal_2:
    sum2+=i
if sum1 > sum2:
    print(diagonal_1)
elif sum1 < sum2:
    print(diagonal_2)
elif sum1 == sum2:
    print(diagonal_1)
    print(diagonal_2)
else:
    print('Something went wrong')