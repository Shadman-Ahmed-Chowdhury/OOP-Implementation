#include <bits/stdc++.h>

using namespace std;

class Set {
    int m, n;
public:
    void input();
    void display();
    int largest();
};

int Set :: largest() {
    if(m >= n)
        return m;
    else
        return n;
}

void Set :: input() {
    cout << "Enter the value of m and n: " << endl;
    cin >> m >> n;
}

void Set :: display() {
    cout << "Largest Value: " << largest() << endl; // Calling another member function which is called nesting of member functions.
}


int main()
{
    Set A;
    A.input();
    A.display();
    return 0;
}
