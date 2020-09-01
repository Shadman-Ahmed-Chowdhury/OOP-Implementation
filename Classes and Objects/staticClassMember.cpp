#include <bits/stdc++.h>

using namespace std;

class item
{
    static int cnt;
    int number;
public:
    void getData(int a);
    void getCount();
};

void item :: getData(int a) {
    number = a;
    cnt++;
}
int item :: cnt;
void item :: getCount() {
    cout << "Count: ";
    cout <<  cnt << endl;
}

int main()
{
    item a, b, c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    a.getCount();
    b.getCount();
    c.getCount();

    return 0;
}

