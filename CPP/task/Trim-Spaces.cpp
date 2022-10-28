#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    int i=0, j=0;
    while(input[i] != '\0'){
        if(input[i] != ' '){
            input[j++] = input[i];
        }
        i++;
    }
    input[j] = '\0';
	
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

