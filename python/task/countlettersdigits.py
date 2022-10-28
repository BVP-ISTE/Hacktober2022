phrase = input("Type in: ")
phrase = list(phrase)

l, d = 0, 0
for i in phrase:
    if i.isalpha():
        l = l + 1
    if i.isdigit():
        d = d + 1
    else:
        pass

print("Letters:", l)
print("Digits:", d)
