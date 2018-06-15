n = int(input("n = "))
sum = 1 
fact = 1
for i in range(1, n+1):
    for j in range(1, i+1):
        fact *= j 
    sum += 1/fact
    fact = 1
print("sum =", sum)
