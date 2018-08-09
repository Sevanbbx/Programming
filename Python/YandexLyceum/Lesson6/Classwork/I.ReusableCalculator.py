num1 = 0
num2 = 0
sign = ''
while(sign != 'x'):
    num1 = int(input())
    sign = input()
    if(sign == '+'):
        num2 = int(input())
        print(num1 + num2)
    if(sign == '-'):
        num2 = int(input())
        print(num1 - num2)
    if(sign == '*'):
        num2 = int(input())
        print(num1 * num2)
    if(sign == '/'):
        num2 = int(input())
        if(num2 == 0):
            continue
        print(num1 // num2)
    if(sign == '%'):
        num2 = int(input())
        if(num2 == 0):
            continue
        print(num1 % num2)
    if(sign == '!'):
        if(num1 < 0):
            continue
        fact = 1
        for i in range(1, num1 + 1):
            fact *= i
        print(fact)
    if(sign == 'x'):
        print(num1)
        break
