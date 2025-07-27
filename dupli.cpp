/* you will be givenan array with 'n' number of elements then delete all the duplicate elements and return an array that contains unique
 elements*/
 #include <iostream>
using namespace std;
int Dupli(int arr[], int n, int result[]) {
    int index = 0;
    for (int i = 0; i < n; i++) 
	{
        bool found = false;
		for (int j = 0; j < index; j++)
		 {
            if (arr[i] == result[j]) 
			{
                found = true;
                break;
            }
        }

        
        if (!found)
	    {
            result[index] = arr[i];
            index++;
        }
    }

    return index; 
}


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100], unique[100];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    int newSize = Dupli(arr, n, unique);

    cout << "Array with unique elements:\n";
    for (int i = 0; i < newSize; i++) 
	{
        cout << unique[i] << " ";
    }

    return 0;
}

