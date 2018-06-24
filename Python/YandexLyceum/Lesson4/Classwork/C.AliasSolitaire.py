total = int(input())
while(total > 0):
    num = int(input())
    if((num < 1) or (num > 3) or (num > total)):
        print(total)
    else:
        total -= num
        print(total)
