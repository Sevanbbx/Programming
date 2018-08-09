num = int(input())
prime = True
for i in range(2, num):
    prime = True
    for j in range(2, i):
        if((i % j == 0) and (i != j)):
            prime = False
    if(prime):
        print(i)
