def isomorphic(x,y):
        if(len(x) != len(y)):
                return false
        a=[x.count(char1) for char1 in x]
        b=[y.count(char1) for char1 in y]
        return a==b                   
string1 = input("Input first string.")
string2 = input("Input second string.")
print(isomorphic(string1,string2))
