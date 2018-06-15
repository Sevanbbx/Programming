array_max = []
n1 = int(input('Input number of elements(1st array)\n'))
array1 = []
for i in range(n1):
    i = int(input())
    array1.append(i)
for i in range(len(array1)-1):
    for j in range(len(array1)-1):
        if array1[j] > array1[j+1]:
            array1[j],array1[j+1] = array1[j+1],array1[j]
array_max.append(array1[-1])
array_max.append(array1[-2])

n2 = int(input('Input number of elements(2nd array)\n'))
array2 = []
for i in range(n2):
    i = int(input())
    array2.append(i)
for i in range(len(array2)-1):
    for j in range(len(array2)-1):
        if array2[j] > array2[j+1]:
            array2[j],array2[j+1] = array2[j+1],array2[j]
array_max.append(array2[-1],)
array_max.append(array2[-2],)
for i in range(len(array_max)-1):
    for j in range(len(array_max)-1):
        if array_max[j] > array_max[j+1]:
            array_max[j],array_max[j+1] = array_max[j+1],array_max[j]
print(array1)
print(array2)
print(array_max)
array1.sort()
print(array1)