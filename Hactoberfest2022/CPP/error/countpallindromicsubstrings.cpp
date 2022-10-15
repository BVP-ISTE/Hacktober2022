#include<iostream>
using namespace std;
// Take as input S, a string. Write a program that gives the count of substrings of this string which are palindromes and Print the ans.
// abc
// 3

bool isPalindrome(string str){
    for (int i = 0; i<=str.length(); i++) {
        if(str[i]!=str[str.length()-i-1]){
            return false;
        }

    }

    return true;
}


int main() {
    string str;
    cin >> str;

    int count=0;
    for ( int i = 0; i<str.length(); i++) {
        for ( int j = i; j<str.length(); j++) {

            string s = "";
            for (int k = i; k <=j; k++) { // make all substring
                s+=str[k];
            }
            if(isPalindrome(s)){ // check if palindrome 
                count++;
            }
        }
    }

    cout << count <<endl;
    return 0;
} 
