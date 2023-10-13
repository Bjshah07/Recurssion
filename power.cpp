#include <iostream>
using namespace std;
int pow2(int l, int m)
{
    // LOGARITMIC PROCESS ITME REDUCING METHOD
    if (m == 0)
    {
        return 1;
    }
    if (m % 2 == 0)
    {
        int pow = pow2(l, m / 2) * pow2(l, m / 2);
        return pow;
    }
    else
    {
        int pow = pow2(l, (m + 1) / 2) * pow2(l, m / 2);
        return pow;
    }
}
int pow1(int j, int k)
{
    // NORMAL METHOD TIME CONSUMING
    if (k == 0)
    {
        return 1;
    }
    int power = j * pow1(j, k - 1);
    return power;
}
int main()
{
    int n, i;
    cout << "enter the base no.:";
    cin >> n;
    cout << "enter the power no.:";
    cin >> i;
    int p = pow1(n, i);
    int p1 = pow2(n, i);
    cout << p << endl;
    cout << p1;
    return 0;
}