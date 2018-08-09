lineNum = 0
line = ""
catFlag = False
lineNum = int(input())
for i in range(lineNum):
    line = input()
    if(("Cat" in line) or ("cat" in line)):
        catFlag = True
    if(("Dog" in line) or ("dog" in line)):
        catFlag = False
if(catFlag == True):
    print("MEOW")
else:
    print("NO")
