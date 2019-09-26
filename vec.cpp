#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout << "\nEnter size : ";
    cin >> n;
    cout << "\nEnter elements : \n";
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "\nThe unsorted vector is ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    sort(v.begin(), v.end());
    cout << "\nThe sorted vector is ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    return 0;
}