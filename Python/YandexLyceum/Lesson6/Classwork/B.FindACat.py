numLine = int(input())
catFlag = False
line = ""
for i in range(numLine):
    line = input()
    if(("Cat" in line) or ("cat" in line)):
        catFlag = True
if(catFlag == True):
    print("MEOW")
else:
    print("NO")
