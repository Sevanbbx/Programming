total1 = int(input())
total2 = int(input())
while((total1 > 0) or (total2 > 0)):
    choice = int(input())
    num = int(input())
    if(1 == choice):
        total1 -= num
    elif(2 == choice):
        total2 -= num
    print(total1, total2)
