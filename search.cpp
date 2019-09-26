#include <iostream>
#include <algorithm>
using namespace std;

void show(int arr[], int n)
{
    cout << "\n";
    for (int i = 0; i < n; i++)
        cout << "\t" << arr[i];
}

int main()
{
    cout << "\nThis is the STL binary_search() function. First we have to sort the array and then we do the searching.";
    int arr[10] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    cout << "\n\nUnsorted array : ";
    show(arr, 10);
    sort(arr, arr + 10);
    cout << "\n\nSorted array : ";
    show(arr, 10);
    int el;
    cout << "\n\nEnter element to be searched(0-9) : ";
    cin >> el;
    if (binary_search(arr, arr + 10, el))
        cout << "\nElement found in array.";
    else
        cout << "\nElement not found in array.";
    return 0;
}