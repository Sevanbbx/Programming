num1 = float(input())
num2 = float(input())
sign = input()
if(sign == "/" and num2 == 0):
    print(888888)
elif(sign == "+"):
    print(num1 + num2)
elif(sign == "-"):
    print(num1 - num2)
elif(sign == "*"):
    print(num1 * num2)
elif(sign == "/"):
    print(num1 / num2)
else:
    print(888888)
