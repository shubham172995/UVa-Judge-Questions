#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */
using namespace std;
char Board[14][14];
 
struct location
{
    int x;
    int y;
};
 
bool check(location King, bool UpperCase)
{
    int UB = (!UpperCase) ? ('Z') : ('z');
    int LB = (!UpperCase) ? ('A') : ('a');
    int Modifier = (!UpperCase) ? ('A' - 'a') : (0);
    int PawnModifier = (UpperCase) ? (1) : (-1);
    bool threat = false;
    for (int i=2; i<10; i++)
    {
        for (int j=2; j<10; j++)
        {
            if (Board[i][j] >= LB && Board[i][j] <= UB)
            {
                char modified = Board[i][j] - Modifier;
                switch(modified)
                {
                    case 'p':
 
                            if ((i + PawnModifier) == King.y && j + 1 == King.x) return true;
                            if ((i + PawnModifier) == King.y && j - 1 == King.x) return true;
             
 
                    break;
 
                    case 'n':
                        if ( abs(j - King.x) == 1 && abs(i - King.y) == 2) return true;
 
                        if ( abs(j - King.x) == 2 && abs(i - King.y) == 1) return true;
                    break;
 
                    case 'b':
 
                        for (int k=-1; k<2; k+=2)
                            for (int l=-1; l<2; l+=2)
                                for (int x = j+l, y = i+k; (x < 10 && x >= 2) && (y < 10 && y >= 2); x += l, y +=k)
                                    if ( x == King.x && y == King.y) return true;
                                    else if ( Board[y][x] != '.') break;
                             
                    break;
 
 
                    case 'r':
                        for (int k=-1; k<2; k+=2)
                            for (int x = j, y = i+k; (y < 10 && y >= 2); y +=k)
                                if ( x == King.x && y == King.y) return true;
                                    else if ( Board[y][x] != '.') break;
 
                        for (int k=-1; k<2; k+=2)
                            for (int x = j+k, y = i; (x < 10 && x >= 2); x +=k)
                                if ( x == King.x && y == King.y) return true;
                                    else if ( Board[y][x] != '.') break;
                    break;
 
                    case 'q':
 
                        for (int k=-1; k<2; k+=1)
                            for (int l=-1; l<2; l+=1)
                                for (int x = j+l, y = i+k; (x < 10 && x >= 2) && (y < 10 && y >= 2); x += l, y +=k)
                                    if ( x == King.x && y == King.y) return true;
                                    else if ( Board[y][x] != '.') break;
                    break;
 
 
                    case 'k':
 
                        if (abs(j - King.x) <= 1 && abs(i - King.y) <= 1) return true;
 
                    break;
 
                }
            }
        }
    }
 
    return false;
}
int main()
{
    location K, k;
    int nGame=0;
    bool terminate;
    while(1)
    {
        terminate = true;
        nGame++;
 
        for (int i=2; i<10; i++)
            for (int j=2; j<10; j++) 
                {
                    cin >> Board[i][j];
                    if (Board[i][j] != '.') terminate = false;
                    if (Board[i][j] == 'k') k.x = j, k.y = i;
                    if (Board[i][j] == 'K') K.x = j, K.y = i;
                }
 
            if (terminate) return 0;
            if (check(k, false)) cout << "Game #" << nGame << ": black king is in check.";
            else if (check(K, true)) cout << "Game #" << nGame << ": white king is in check.";
            else cout << "Game #" << nGame << ": no king is in check.";
            cout << endl;
    }
    return 0;
}