#include <iostream>
#include<cstring>
using namespace std;

void replacePiHelper(char input[], int start) 
{
    if (input[start] == '\0' ) { 
        return; 
    } 
    
    replacePiHelper(input, start + 1); 
  
    // Small calculation part
    if (input[start] == 'p' && input[start + 1] == 'i') { 
        for (int i = strlen(input); i >= start + 2; i--) { 
            input[i + 2] = input[i]; 
        }
        input[start] = '3'; 
        input[start + 1] = '.'; 
        input[start + 2] = '1'; 
        input[start + 3] = '4'; 
    } 
}

void replacePi(char input[]) {
	// Write your code here
	replacePiHelper(input, 0);
}




int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
