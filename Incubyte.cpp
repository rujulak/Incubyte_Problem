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
    
    int n;
    cout << "Enter Number of Commands: ";
    cin >> n;
    vector<char> commands(n);
    cout << "Enter Commands: ";
    for (int i = 0; i < n; i++)
    {
        cin >> commands[i];
    }

    for (char command : commands)
    {
        if (command == 'f')
            spacecraft.moveForward();
        else if (command == 'b')
            spacecraft.moveBackward();
        else if (command == 'l')
            spacecraft.turnLeft();
        else if (command == 'r')
            spacecraft.turnRight();
        else if (command == 'u')
            spacecraft.turnUp();
        else if (command == 'd')
            spacecraft.turnDown();
    }

    spacecraft.printCoordinates();
    return 0;
}
