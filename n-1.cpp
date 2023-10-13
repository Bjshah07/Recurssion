#include <iostream>
using namespace std;
void series2(int k, int l)
{
    // USING PARAMETER
    if (k > l)
    {
        return;
    }

    cout << k << " ";
    series2(k + 1, l);
    cout << k << " ";
    return;
}
void series1(int j)
{
    // USING VALUE
    if (j == 0)
    {
        return;
    }

    cout << j << " ";
    series1(j - 1);

    cout << j << " ";
    return;
}
int main()
{
    int n;
    cout << "enter the no.:";
    cin >> n;
    cout << "series 1:" << endl;
    series1(n);
    cout << endl
         << "series 2:" << endl;
    series2(1, n);

    return 0;
}
