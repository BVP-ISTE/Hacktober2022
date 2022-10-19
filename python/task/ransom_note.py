#Input two strings ransomNote and magazine from the user
#Print true if ransomNote can be constructed by using the letters from magazine and false otherwise.
#Each letter in magazine can only be used once in ransomNote.
 
ransomNote = input("Enter the ransom note: ")
magazine = input("Enter the magazine: ")

ransomNote = ransomNote.lower()
magazine = magazine.lower()

ransomNote = ransomNote.replace(" ", "")
magazine = magazine.replace(" ", "")

ransomNote = list(ransomNote)
magazine = list(magazine)

for i in ransomNote:
    if i in magazine:
        magazine.remove(i)
    else:
        print("False")
        break
else:
    print("True")