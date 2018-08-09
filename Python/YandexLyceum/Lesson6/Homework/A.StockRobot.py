prevNum = 0
presNum = 0
buy = 0
sell = 0
prevNum = int(input())
presNum = int(input())
while(presNum != 0):
    if((presNum > prevNum) and (buy == 0)):
        buy = presNum
    elif((prevNum > presNum) and (buy != 0) and (sell == 0)):
        sell = presNum
    prevNum = presNum
    presNum = int(input())
print(buy, sell, sell - buy)
