/* write a prog to print a value between 1 to 100. if the number is not in the range ask to reenter and continue the process*/
#include <iostream>
using namespace std;
int main()
{
	int number;
	do {
        cout << "Enter a number between 1 and 100: ";
        cin >> number;

        if (number < 1 || number > 100) 
		{
            cout << " Invalid input Try again\n";
        }

    } while (number < 1 || number > 100);

    cout << " You entered a valid number: " << number << endl;
	return 0;
	
	
}
