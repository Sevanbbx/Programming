num1 = int(input())
num2 = int(input())
line = ""
for i in range(num1, num2 + 1):
    line = ""
    if(i % 3 == 0):
        line = "Fizz"
    if(i % 5 == 0):
        if(line == "Fizz"):
            line = "FizzBuzz"
        else:
            line = "Buzz"
    if(line != ""):
        print(line)
    else:
        print(i)
