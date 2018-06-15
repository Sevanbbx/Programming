word1 = str(input('Ներմուծեք 1-ին բառը\n'))
word2 = str(input('Ներմուծեք 2-րդ բառը\n'))
big_word = word1+word2
print(big_word)
sumA = 0
sumB = 0
for i in range(len(big_word)):
    if big_word[i]=="a":
        sumA+=1
print('Ա-երի քանակը հավասար է', sumA)
for i in range(len(big_word)):
    if big_word[i]=="b":
        sumB+=1
print('Բ-երի քանակը հավասար է', sumB)
if sumA > sumB:
    print(True)
else:
    print(False)