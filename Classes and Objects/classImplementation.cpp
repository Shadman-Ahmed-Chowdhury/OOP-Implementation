#include <bits/stdc++.h>

using namespace std;

class item   // Class Declaration
{
    int number;    // Data members declaration
    float cost;    // private by default

public:
    void getData(int a, float b);  //Prototype Declaration, to be defined

    //Member function definition inside the class
    void putData() {
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }
};

//Class Functions Definition

void item :: getData(int a, float b) // The membership label " :: " is called scope resolution operator.
{
    number = a; // private variables directly accessed.
    cost = b;
}

int main()
{
    item x;  // Creating object

    x.getData(100, 23.53);  // Accessing class member functions as well as data.
    x.putData();

    return 0;
}
