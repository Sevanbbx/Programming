num = float(input())
if(num != 1):
    amount = 0
    rifle = num
    while(rifle > 2):
        rifle /= 2
        amount += 1
    amount += 1
    if(2**amount == num):
        print(amount)
    else:
        print("НЕТ")
else:
    print(0)
