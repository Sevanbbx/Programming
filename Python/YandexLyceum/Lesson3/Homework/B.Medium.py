amount = 0
total = 0
temp = float(input())
while(temp >= -300):
    total += temp
    amount += 1
    temp = float(input())
print(total/amount)
