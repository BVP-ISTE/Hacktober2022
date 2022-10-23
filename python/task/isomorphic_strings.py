#Input two strings s and t from the user, determine if they are isomorphic.

#Two strings s and t are isomorphic if the characters in s can be replaced to get t.

#All occurrences of a character must be replaced with another character while preserving the order of characters. 
#No two characters may map to the same character, but a character may map to itself.

def isIsomorphic(self, s, t):
        return len(set(zip(s, t))) == len(set(s)) and len(set(zip(t, s))) == len(set(t))
