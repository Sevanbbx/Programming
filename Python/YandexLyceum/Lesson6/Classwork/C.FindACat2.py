number = -1
counter = 1
line = ""
while(line != "STOP"):
    line = input()
    if((("Cat" in line) or ("cat" in line)) and (number == -1)):
        number = counter
    counter += 1
print(number)
