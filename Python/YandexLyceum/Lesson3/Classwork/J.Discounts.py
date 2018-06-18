total = 0
price = float(input())
while(price > 0):
    if(price > 1000):
        price = price / 100 * 95
    total += price
    price = float(input())
print(total)
