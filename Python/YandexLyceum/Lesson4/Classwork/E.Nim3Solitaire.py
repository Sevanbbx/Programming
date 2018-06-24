total1 = int(input())
total2 = int(input())
total3 = int (input())
while((total1 > 0) or (total2 > 0) or (total3 > 0)):
    choice = int(input())
    num = int(input())
    if(1 == choice):
        total1 -= num
    if(2 == choice):
        total2 -= num
    if(3 == choice):
        total3 -= num
    print(total1, total2, total3)
