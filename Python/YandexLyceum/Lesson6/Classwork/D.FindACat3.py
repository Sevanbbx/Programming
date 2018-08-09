number = -1
catCount = 0
counter = 1
line = ""
while(line != "STOP"):
    line = input()
    if(("Cat" in line) or ("cat" in line)):
        catCount += 1
        if(number == -1):
            number = counter
    counter += 1
print(catCount, number)
