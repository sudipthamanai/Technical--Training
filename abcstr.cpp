#include <iostream>
using namespace std;


bool isValidChar(char ch) {
    return ( (ch >= 'A' && ch <= 'Z') ||
             (ch >= 'a' && ch <= 'z') ||
             (ch >= '0' && ch <= '9') );
}


string removeSplCh(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (isValidChar(str[i])) 
		{
            result += str[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); 

    string cleanString = removeSplCh(input);
    cout << "String without special characters: " << cleanString << endl;

    return 0;
}

