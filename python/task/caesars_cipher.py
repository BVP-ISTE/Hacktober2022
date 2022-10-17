#Implement Caesar's cipher 
#Caesar's cipher is essentially an encryption technique
#It uses a 'step' value and increments every letter of a word in the text by that value
#For example if the step value is 2, then "APPLE" becomes "CRRG"
#Write a code which takes input of the step value from the user and the text to be encrypted, and displays the encrypted text

def encrypt(string, shift):
 
  cipher = ''
  for char in string:
    if char == ' ':
      cipher = cipher + char
    elif  char.isupper():
      cipher = cipher + chr((ord(char) + shift - 65) % 26 + 65)
    else:
      cipher = cipher + chr((ord(char) + shift - 97) % 26 + 97)
  
  return cipher
 
text = input("enter string: ")
s = int(input("enter shift number: "))
print("original string: ", text)
print("after encryption: ", encrypt(text, s))
