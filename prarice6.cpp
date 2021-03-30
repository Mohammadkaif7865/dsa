#include <iostream>
using namespace std;
typedef long long int lli;
lli fibonacci(lli a, lli b, lli n, lli count = 0)
{
    if (n != count)
    {

        cout << a << " " << b << " ";
        a = a + b;
        b = a + b;
        count++;
        fibonacci(a, b, n, count);
    }
    else
    {
        return 0;
    }
    return 0;
}
int main()
{
    int a;
    cout<<"Enter the term till you want fibonacii number "<<endl;
    cin>>a;
    fibonacci(1, 1, a);
    return 0;
}