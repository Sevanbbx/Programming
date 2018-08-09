treasureX = 0
treasureY = 0
x = 0
y = 0
point = ""
steps = 0
treasureSteps = 0
mapSteps = 0
found = False
treasureX = int(input())
treasureY = int(input())
while(point != "stop"):
    point = input()
    if(point == "stop"):
        break
    steps = int(input())
    if(point == "north"):
        y += steps
    elif(point == "south"):
        y -= steps
    elif(point == "east"):
        x += steps
    elif(point == "west"):
        x -= steps
    mapSteps += 1
    if((x == treasureX) and (y == treasureY) and (found == False)):
        treasureSteps = mapSteps
        found = True
print(treasureSteps)
