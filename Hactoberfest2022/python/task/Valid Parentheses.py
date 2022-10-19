def checkparantheses(s):
    curly=0
    square=0
    circular=0
    curly1=0
    square1=0
    circular1=0
    for i in s:
        if i=='(':
            circular+=1
        elif i=='{':
            curly+=1
        elif i=='[':
            square+=1
        elif i==')':
            circular1+=1
        elif i=='}':
            curly1+=1
        elif i==']':
            square+=1
        else:
            continue
    if circular!=0 or circular1!=0:
        if circular!=circular1:
            print("Round brackets are not balanced and hence not valid.")
        else:
            print("Round brackets are balanced and hence valid.")
    if curly!=0 or curly1!=0:
        if curly!=curly1:
            print("Curly bracketsare not balanced and hence not valid.")
        else:
            print("Curly brackets are balanced and hence valid.")
    if square!=0 or square1!=0:
        if square!=square1:
            print("Square brackets are not balanced and hence not valid.")
        else:
            print("Square brackets are balanced and hence valid.")
    if square==square1==curlcly==curly1==circular==circular1==0:
        print("No parantheses present")
x=input("Enter the input for which you want to check validity of parentheses.")
checkparantheses(x)
