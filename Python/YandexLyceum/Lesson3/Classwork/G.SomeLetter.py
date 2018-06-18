word = input()
index = int(input())
if(index > len(word) or index <= 0):
    print("ERROR")
else:
    print(word[index-1])
