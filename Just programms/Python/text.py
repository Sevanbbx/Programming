text = str(input("Input text: "))
symb1 = input("Input symbol 1: ")
symb2 = input("Input symbol 2: ")
newText = ""
for i in text:
    if(symb1 == i):
        newText += i
        index = text.find(i) + 1
        while(symb2 != text[index]):
            newText += text[index]
            index += 1
        newText += text[index]
        break
print("text = ", newText)
