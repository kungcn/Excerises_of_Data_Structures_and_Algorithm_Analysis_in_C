#include <iostream>
using namespace std;

int mathFun(int a) {
    if (a == 0)
        return 0;
    else
        return (2 * mathFun(a - 1) + a * a);
}

int main (void)  {
    int n = 0;
    int a = 0;
    cin >> n;
    while (n--) {
        cin >> a;
        int b = 0;
        b = mathFun(a);
        cout << b << endl;
    }
    return 0;
}
