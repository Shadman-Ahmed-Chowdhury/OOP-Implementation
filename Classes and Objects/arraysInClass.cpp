#include <bits/stdc++.h>

using namespace std;

const int sz = 100;

class arrayTraversal
{
    int n;
    int arr[sz];
public:
    void setValue();
    void displayArray();
};

void arrayTraversal :: setValue() {
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void arrayTraversal :: displayArray() {
    cout << "Array Elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    arrayTraversal arr;
    arr.setValue();
    arr.displayArray();
    return 0;
}
