#include <iostream>
#include "../StaticLIb/foo.h"
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << foo(a, b);
}