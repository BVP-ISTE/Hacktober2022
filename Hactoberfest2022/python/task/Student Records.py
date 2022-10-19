name=[]
percentage=[]
class_=[]
count=1
while count==1:
    x=input("Enter your name.")
    y=int(input("Enter your class."))
    z=float(input("Enter your percentage."))
    name.append(x)
    percentage.append(z)
    class_.append(y)
    a=int(input("Do you want to enter more records? Enter 1 for yes and anything else for otherwise."))
    if a==1:
        continue
    else:
        count=0
for i in range(len(name)):
    print("Name:",name[i],"\nClass:",class_[i], "\nPercentage:",percentage[i])








