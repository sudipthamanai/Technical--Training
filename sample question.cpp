#include <iostream>
using namespace std;
int main()
{
	int number;
	do{
		cout<<"Enter the number between 1 and 100 :";
		cin>>number;
		if(number<1 || number > 100)
		{
			cout<< " Invalid input! Try again.\n ";
		}
	} while(number<1 || number > 100);
	cout<<"You entered the valid number:" <<number<<endl;
	return 0;
}
