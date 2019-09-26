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
    int arr[10] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    cout << "\nThe STL sort() function is a quicksort algorithm. The 'algorithm' header file is included to use this function.";
    cout << "\n\nUnsorted array :";
    show(arr, 10);
    sort(arr, arr + 10);
    cout << "\n\nSorted array :";
    show(arr, 10);
    return 0;
}