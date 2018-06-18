word = input()
index = int(input())
favLetter = input()
if(index > len(word) or index <= 0 or len(favLetter) != 1):
    print("ERROR")
elif(favLetter == word[index - 1]):
    print("YES")
else:
    print("NO")
