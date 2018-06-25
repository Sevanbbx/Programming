word1 = input()
word2 = input()
bulls = 0
cows = 0
for i in range(len(word1)):
    if(word1[i] == word2[i]):
        bulls += 1
    for j in range(len(word1)):
        if((word1[i] == word2[j]) and (i != j)):
            cows += 1
print(bulls, cows)
