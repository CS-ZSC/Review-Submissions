#include <iostream>

using namespace std;

int fibo(int);

int main()
{
    int t;
    cout << "enter number : ";
    cin >> t;
    for (int c = 0; c <= t; c++) {
        cout << fibo(c) << "\t";
    }
    return 0;
}


int fibo(int r)
{
    if (r == 1 || r == 0) {
        return r;
    } else {
        return (fibo(r - 1) + fibo(r - 2));
    }
}
