x = int(input("x = "))
n = int(input("n = "))
sum = 0
for i in range(0, n+1):
    sum = sum + x**i
print("sum =",sum)
