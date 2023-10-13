#include <iostream>
using namespace std;
int fibo(int j)
{
    if (j == 0 || j == 1)
    {
        return (j);
    }
    else
    {
        int fib = fibo(j - 2) + fibo(j- 1);
        return fib;
    }
}
int main()
{
    int n,i=0;
    cout << "enter the no. of series:";
    cin >> n;
   
    while (i<n)
    {
        cout<<" "<<fibo(i);
        i++;
    }
    
    return 0;
}
