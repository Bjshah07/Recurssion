#include <iostream>
using namespace std;
// SR - STARTING ROW
// SC - STARTING CLOUMN
// ER - ENDING ROW
// EC - ENDING COLUMN
int maze1(int r, int c)
{
    // USING 2 PARAMETERS
    int rs = 0;
    int ds = 0;
    if (r == 1 && c == 1)
    {
        return 1;
    }
    if (r == 1)
    {
        rs += maze1(r, c - 1);
    }
    if (c == 1)
    {
        ds += maze1(r - 1, c);
    }
    if (r > 1 && c > 1)
    {
        rs += maze1(r, c - 1);
        ds += maze1(r - 1, c);
    }

    int tw1 = rs + ds;
    return tw1;
}
int maze(int sr, int sc, int er, int ec)
{
    // USING 4 PARAMETERS
    int right = 0;
    int down = 0;
    if (sr == er && sc == ec)
    {
        return 1;
    }

    if (sr < er && sc < ec)
    {
        right += maze(sr, sc + 1, er, ec);
        down += maze(sr + 1, sc, er, ec);
    }
    if (sr == er)
    {
        right += maze(sr, sc + 1, er, ec);
    }
    if (sc == ec)
    {
        down += maze(sr + 1, sc, er, ec);
    }

    int total = right + down;
    return total;
}
int main()
{
    int r, c;
    cout << "enter the no. of rows: ";
    cin >> r;
    cout << "enter the no. of columns: ";
    cin >> c;
    int tw = maze(1, 1, r, c);
    int tw1 = maze1(r, c);
    cout << tw << endl;
    cout << tw1;
    return 0;
}