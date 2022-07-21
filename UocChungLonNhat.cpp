#include<iostream>
using namespace std;
int UCLN_1(int a, int b)
{
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b){
            a -= b; // a = a - b
        }
        else
        {
            b -= a;
        }
    }
    return a; // return a or b, bởi vì lúc này a và b bằng nhau
}
 
int UCLN_2(int a, int b){
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    // Lặp tới khi 1 trong 2 số bằng 0
    while (a*b != 0)
    {
        if (a > b)
        {
            a %= b; // a = a % b
        }
        else
        {
            b %= a;
        }
    }
    return a + b; // return a + b, bởi vì lúc này hoặc a hoặc b đã bằng 0.
}
 
//UCLN(a,b) = b neu a%b = 0 hoac = UCLN(b, a%b)
int UCLN_3(int a, int b) {
    if (b == 0) return a;
    return UCLN_3(b, a % b);
}
 
int UCLN_4(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
 
int main(){
    int a, b;
    do
    {
        cout << "Nhap vao hai so can kiem tra\n";
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
    } while (a < 0 || b < 0);
    cout << "\nUCLN_1(" << a << "," << b << ") = " << UCLN_1(a,b);
    cout << "\nUCLN_2(" << a << "," << b << ") = " << UCLN_2(a,b);
    cout << "\nUCLN_3(" << a << "," << b << ") = " << UCLN_3(a,b);
    cout << "\nUCLN_4(" << a << "," << b << ") = " << UCLN_4(a,b);
}