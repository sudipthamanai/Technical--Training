/* count the misses 
A company has launched a new text editor that allows users to enter english letter, numbers and whitespaces only. if a user attempts to enter 
any other of character , it is counted as a miss.
given a string of text, wrtite an algorithm to help the developer detect the number of misses by a given user in the given input. */

#include <iostream>
#include <string>
using namespace std;
#include <iostream>
#include <string>
using namespace std;
#include <iostream>
#include <string>
using namespace std;
int test(char ch) {
    return (isalpha(ch) || isdigit(ch) || isspace(ch));
}
int countMisses(string input) 
{
    int Count = 0;
    for (int i = 0; i < input.length(); i++) 
	{
        if (!test(input[i])) 
		{
            Count++;
        }
    }
    return Count;
}

int main() {
    string userInput;

    cout << "Enter your input text (no spaces): ";
    cin >> userInput;

    int misses = countMisses(userInput);

    cout << "Number of misses (invalid characters): " << misses << endl;

    return 0;
}

