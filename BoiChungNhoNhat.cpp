#include<iostream>
using namespace std;
int UCLN(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int BCNN(int a, int b)
{
    return (a*b)/UCLN(a,b);
}
int main()
{
    int a, b;
    do
    {
        cout << "Nhap vao hai so can kiem tra\n";
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
    } while (a < 0 || b < 0);
    cout << "\nBCNN(" << a << "," << b << ") = " << BCNN(a,b);
    return 0;
}