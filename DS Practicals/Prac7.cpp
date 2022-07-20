#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int s, int e)
{
    int mid;

    if (s > e)
    {

        cout << "Number is not found";
        return 0;
    }
    else
    {

        mid = (s + e) / 2;

        if (arr[mid] == n)
        {

            cout << "Number is found at " << mid << " index \n";
            return 0;
        }
        else if (n > arr[mid])
        {

            BinarySearch(arr, n, mid + 1, e);
        }
        else if (n < arr[mid])
        {

            BinarySearch(arr, n, s, mid - 1);
        }
    }
}

int main()
{

    int arr[100], num, i, n, s, e;

    cout << "Enter the size of an array : ";
    cin >> n;

    cout << "Enter the sorted values :";

    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    cout << "Enter a value to be search :  \n";
    cin >> num;

    s = 0;
    e = n - 1;

    BinarySearch(arr, num, s, e);

    return 0;
}
