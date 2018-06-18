pass1 = input()
pass2 = input()
if(len(pass1) < 8):
    print("Too short!")
elif(pass1 != pass2):
    print("Different.")
else:
    print("OK")
