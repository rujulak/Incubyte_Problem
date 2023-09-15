#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int startX, startY, startZ;
    char startDir;

    cout << "Enter initial coordinates (x, y, z): ";
    cin >> startX >> startY >> startZ;

    cout << "Enter initial direction (N, S, E, W, U, D): ";
    cin >> startDir;

    Spacecraft spacecraft(startX, startY, startZ, startDir);
    return 0;
}
