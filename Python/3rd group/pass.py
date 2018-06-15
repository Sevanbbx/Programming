VOWELS = ['a', 'e', 'o', 'u', 'i', 'y']
login = "adshjsdbgjsdbgjkr"
password = "abdjksbhfjkedbhgtjk"
pass_vowels = []
pass_consonants = []
login_consonants = []
for char in password:
    if char in VOWELS:
        pass_vowels.append(char)
    else:
        pass_consonants.append(char)
for char in login:
    if char not in VOWELS:
        login_consonants.append(char)
is_vowels_correct = False
if len(pass_vowels) == 3:
    is_vowels_correct = True
    
is_consonants_correct = False
if pass_consonants == login_consonants:
    is_consonants_correct = True

error_message = ""
if is_vowels_correct and is_consonants_correct:
    success(login)
elif not is_vowels_correct and not is_consonants_correct:
    error_message = "Everything is wrong"
elif not is_vowels_correct:
    error_message = "Wrong number of vowels"
else:
    error_message = "Wrong consonants"
if error_message != "":
    failure(login, error_message)

print(pass_vowels) 
print(pass_consonants)
    
