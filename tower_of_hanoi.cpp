#include <iostream>
#include<cmath>
using namespace std;
// S - SOURCE OF DISKS
// H - HELPER
// D - DESTINATION
void tower(int i, char s, char h, char d)
{
    if (i == 0)
    {
        return;
    }
    tower(i - 1, s, d, h);
    cout << s << "-->" << d << endl;
    tower(i - 1, h, s, d);
    return;
}
int main()
{
    int n;
    cout << "enter the no. of disks: ";
    cin >> n;
    tower(n, 'A', 'B', 'C');
    int num=pow(2,n);
    cout<<"the total no of steps to solve tower of hanoi are:"<<num-1;
    return 0;
}