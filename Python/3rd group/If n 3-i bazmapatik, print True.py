n = int(input('n = '))
while n!=1:
    if n % 3 == 0:
        n = n // 3
    else:
        break
if n == 1:
    print(True)
else:
    print(False)