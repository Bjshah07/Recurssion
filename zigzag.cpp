#include <iostream>
using namespace std;
void zz(int i)
{
    if (i == 0)
    {
        return;
    }

    cout << i << " ";
    zz(i - 1);
    cout << i << " ";
    zz(i - 1);
    cout << i << " ";
    return;
}
int main()
{
    int n;
    cout << "enter the no.: ";
    cin >> n;
    zz(n);
    return 0;
}