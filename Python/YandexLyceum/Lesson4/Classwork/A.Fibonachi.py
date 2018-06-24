num = int(input())
fib1 = 1
fib2 = 1
print(fib1)
while(fib2 <= num):
    print(fib2)
    tempFib = fib2
    fib2 += fib1
    fib1 = tempFib    
