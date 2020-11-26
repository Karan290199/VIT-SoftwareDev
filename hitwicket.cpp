#include <bits/stdc++.h>
using namespace std;

#define N 5

bool canplace(int x, int y)
{
    if (x >= N || y >= N || x < 0 || y < 0)
        return false;
    return true;
}

string board[N][N];

void printarray()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
int cntA = 0,cntB=0;
void initialize()
{
    cntA = 0;cntB = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = "-";
        }
    }
    string a[N], b[N];
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for (int i = 0; i < N; i++)
        board[N - 1][i] = "A" + a[i];
    for (int i = 0; i < N; i++)
        cin >> b[i];
    for (int i = 0; i < N; i++)
        board[0][i] = "B" + b[i];
    printarray();
}

int main()
{
    initialize();
    while (1)
    {
        string index;
        cin >> index;
        char choice;
        cin >> choice;
        if (index[0] == 'A' )
        {
            switch (choice)
            {
            case 'L':
                for (int i = N - 1; i >= 0; i--)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (board[i][j] == index)
                        {
                            if (canplace(i, j - 1) && board[i][j - 1] == "-")
                            {
                                board[i][j - 1] = index;
                                board[i][j] = "-";
                            }
                            else if (!canplace(i, j - 1))
                            {
                                cout << "Out of the board. Please Try again" << endl;
                            }
                            else if (board[i][j - 1] != "-")
                            {
                                string d = board[i][j - 1];
                                if (d[0] == index[0])
                                {
                                    cout << "Pawn exists" << endl;
                                }
                                else
                                {
                                    board[i][j - 1] = index;
                                    board[i][j] = "-";
                                    cntA++;
                                }
                            }
                        }
                    }
                }
                printarray();
                break;
            case 'R':
                for (int i = N - 1; i >= 0; i--)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (board[i][j] == index)
                        {
                            if (canplace(i, j + 1) && board[i][j + 1] == "-")
                            {
                                board[i][j + 1] = index;
                                board[i][j] = "-";
                            }
                            else if (!canplace(i, j + 1))
                            {
                                cout << "Out of the board. Please Try again" << endl;
                            }
                            else if (board[i][j + 1] != "-")
                            {
                                string d = board[i][j + 1];
                                if (d[0] == index[0])
                                {
                                    cout << "Pawn exists" << endl;
                                }
                                else
                                {
                                    board[i][j + 1] = index;
                                    board[i][j] = "-";
                                    cntA++;
                                }
                            }
                        }
                    }
                }
                printarray();
                break;
            case 'F':
                for (int i = 0; i < N; i++)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (board[i][j] == index)
                        {
                            if (canplace(i - 1, j) && board[i - 1][j] == "-")
                            {
                                board[i - 1][j] = index;
                                board[i][j] = "-";
                            }
                            else if (!canplace(i - 1, j))
                            {
                                cout << "Out of the board. Please Try again" << endl;
                            }
                            else if (board[i - 1][j] != "-")
                            {
                                string d = board[i - 1][j];
                                if (d[0] == index[0])
                                {
                                    cout << "Pawn exists" << endl;
                                }
                                else
                                {
                                    board[i - 1][j] = index;
                                    board[i][j] = "-";
                                    cntA++;
                                }
                            }
                        }
                    }
                }
                printarray();
                break;
            case 'B':
                for (int i = N - 1; i >= 0; i--)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (board[i][j] == index)
                        {
                            if (canplace(i + 1, j) && board[i + 1][j] == "-")
                            {
                                board[i + 1][j] = index;
                                board[i][j] = "-";
                            }
                            else if (!canplace(i + 1, j))
                            {
                                cout << "Out of the board. Please Try again" << endl;
                            }
                            else if (board[i + 1][j] != "-")
                            {
                                string d = board[i + 1][j];
                                if (d[0] == index[0])
                                {
                                    cout << "Pawn exists" << endl;
                                }
                                else
                                {
                                    board[i + 1][j] = index;
                                    board[i][j] = "-";
                                    cntA++;
                                }
                            }
                        }
                    }
                }
                printarray();
                break;
            }
        }
        else if (index[0] == 'B')
        {
            switch (choice)
            {
            case 'L':
                for (int i = 0; i < N; i++)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (board[i][j] == index)
                        {
                            if (canplace(i, j - 1) && board[i][j - 1] == "-")
                            {
                                board[i][j - 1] = index;
                                board[i][j] = "-";
                            }
                            else if (!canplace(i, j - 1))
                            {
                                cout << "Out of the board. Please Try again" << endl;
                            }
                            else if (board[i][j - 1] != "-")
                            {
                                string d = board[i][j - 1];
                                if (d[0] == index[0])
                                {
                                    cout << "Pawn exists" << endl;
                                }
                                else
                                {
                                    board[i][j - 1] = index;
                                    board[i][j] = "-";
                                    cntB++;
                                }
                            }
                        }
                    }
                }
                printarray();
                break;
            case 'R':
                for (int i = 0; i < N; i++)
                {
                    for (int j = N-1; j >= 0; j--)
                    {
                        if (board[i][j] == index)
                        {
                            if (canplace(i, j + 1) && board[i][j + 1] == "-")
                            {
                                board[i][j + 1] = index;
                                board[i][j] = "-";
                            }
                            else if (!canplace(i, j + 1))
                            {
                                cout << "Out of the board. Please Try again" << endl;
                            }
                            else if (board[i][j + 1] != "-")
                            {
                                string d = board[i][j + 1];
                                if (d[0] == index[0])
                                {
                                    cout << "Pawn exists" << endl;
                                }
                                else
                                {
                                    board[i][j + 1] = index;
                                    board[i][j] = "-";
                                    cntB++;
                                }
                            }
                        }
                    }
                }
                printarray();
                break;
            case 'B':
                for (int i = 0; i < N; i++)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (board[i][j] == index)
                        {
                            if (canplace(i - 1, j) && board[i - 1][j] == "-")
                            {
                                board[i][j] = "-";
                                board[i - 1][j] = index;
                            }
                            else if (!canplace(i - 1, j))
                            {
                                cout << "Out of the board. Please Try again" << endl;
                            }
                            else if (board[i - 1][j] != "-")
                            {
                                string d = board[i - 1][j];
                                if (d[0] == index[0])
                                {
                                    cout << "Pawn exists" << endl;
                                }
                                else
                                {
                                    board[i - 1][j] = index;
                                    board[i][j] = "-";
                                    cntB++;
                                }
                            }
                        }
                    }
                }
                printarray();
                break;
            case 'F':
                for (int i = N-1; i >= 0; i--)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (board[i][j] == index)
                        {
                            if (canplace(i + 1, j) && board[i + 1][j] == "-")
                            {
                                board[i][j] = "-";
                                board[i + 1][j] = index;
                            }
                            else if (!canplace(i + 1, j))
                            {
                                cout << "Out of the board. Please Try again" << endl;
                            }
                            else if (board[i + 1][j] != "-")
                            {
                                string d = board[i + 1][j];
                                if (d[0] == index[0])
                                {
                                    cout << "Pawn exists" << endl;
                                }
                                else
                                {
                                    board[i + 1][j] = index;
                                    board[i][j] = "-";
                                    cntB++;
                                }
                            }
                        }
                    }
                }
                printarray();
                break;
            }
        }
        if(cntA==5){
            cout<<"Player 1 winner"<<endl;
            break;
        }
        else if(cntB==5){
            cout<<"Player 2 winner"<<endl;
            break;
        }
    }
    return 0;
}
