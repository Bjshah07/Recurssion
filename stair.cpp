#include <iostream>
using namespace std;
int stair(int i)
{
    if (i == 1 || i == 2 || i == 3)
    {
        return i;
    }
    int tw = stair(i - 2) + stair(i - 1) + stair(i - 3);
    return tw;
}
int main()
{
    // TOTAL NO. OF WAYS OF CLIMBING STAIRS IF WE JUMP 1,2 OR 3 STAIRS AT A TIME
    int n;
    cout << "enter the no.:";
    cin >> n;
    int s = stair(n);
    cout << s;
    return 0;
}