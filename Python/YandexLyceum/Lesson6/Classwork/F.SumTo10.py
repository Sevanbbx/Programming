summary = 0
num = -1
counter = 1
amount = 0
repeat = False
while(num != 0):
    num = int(input())
    summary += num
    if((summary == 10) and (repeat == False)):
        amount = counter
        repeat = True
    counter += 1
print(amount)
