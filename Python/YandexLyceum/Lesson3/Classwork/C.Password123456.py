pass1 = input()
pass2 = input()
if(len(pass1) < 8):
    print("Too short!")
elif("123" in pass1):
    print("Too simple!")    
elif(pass1 != pass2):
    print("Different.")
else:
    print("OK")
