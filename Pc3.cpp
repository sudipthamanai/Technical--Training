/* You are playing an online game, a numbers is diaplayed on the screen. in order to win the game, you have to count the trailing zeros in the 
factorial value of the given number. write an algorithm to count the trailing zeros in the factorial value of the given number */

#include<iostream>
using namespace std;

int factorial(int n) 
{
    int fact = 1,i;
    for(i=2;i<=n;i++)
    {
    	fact *= 1;
	}
}
int countTrailingZeros(int x) 
{
    int count = 0;
    while (x >= 5) {
        count += x / 5;
        x = x / 5;
    }
    return count;
}
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int zeros = countTrailingZeros(num);
    cout << "Trailing zeros in " << num << "! value s: " << zeros << endl;

    return 0;
}

