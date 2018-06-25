num = int(input())
isPrime = True
for i in range(1, num + 1):
    if(i == num):
        print(i)
    elif(num % i == 0):
        print(i, end = " ")
        if(i > 1):
            isPrime = False
if((isPrime == True) and (num > 1)):
    print("PRIME")
else:
    print("NO")
