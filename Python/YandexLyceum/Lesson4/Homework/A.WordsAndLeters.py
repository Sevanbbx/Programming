word = input()
minWord = word 
maxWord = word
minLength = len(word)
maxLength = len(word)
while("stop" != word):
    if(minLength > len(word)):
        minLength = len(word)
        minWord = word
    elif(maxLength < len(word)):
        maxLength = len(word)
        maxWord = word
    word = input()
letterNum = 0
point = False
while(letterNum < minLength):
    if(minWord[letterNum] not in maxWord):
        point = True
        print("NO")
        break
    letterNum += 1
if(point == False):
    print("YES")
