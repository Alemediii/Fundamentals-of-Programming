#include <iostream>
#include <array>
using namespace std;

const int COLS = 7;
const int ROWS = 6;

typedef array<int,COLS> TRow;
typedef array<TRow,ROWS> TBoard;

void init(TBoard& tab);
void print(TBoard tab, int lastRow, int lastCol);
void insertToken(TBoard& tab,int token,int col,
                 bool& ok, int& row);
bool justFourInArow(TBoard tab, int row, int col);
bool full(TBoard tab);
int randBet(int min, int max);
int winToken(TBoard tab);
 
int main()
{
    srand(time(NULL));
    TBoard tab;
    init(tab);
    print(tab, -1, -1); cout << endl;
    bool ok = true;
    int row;
    int winner = 0;
    while (winner == 0 and not full(tab)) {
        int token = randBet(1, 3);
        int col = randBet(0, COLS);
        insertToken(tab, token, col, ok, row);
        if (ok) {
            if (justFourInArow(tab, row, col))
                winner = token;
            print(tab, row, col); cout << endl;
        }
    }
    if (winner == 0) cout << "FULL" << endl;

    return 0;
}

void insertToken(TBoard& tab,int token,int col,
                 bool& ok, int& row)
{
    row = 0;
    while (row < ROWS and tab[row][col] != 0)
        ++row;
    ok = row < ROWS;
    if (ok) tab[row][col] = token;
}

bool full(TBoard tab)
{
    int col = 0;
    while (col < COLS and tab[ROWS-1][col] != 0)
        ++col;
    return col == COLS;
}


int below(TBoard tab, int row, int col);
int left(TBoard tab, int row, int col);
int right(TBoard tab, int row, int col);
int lfup(TBoard tab, int row, int col);
int rtdw(TBoard tab, int row, int col);
int lfdw(TBoard tab, int row, int col);
int rtup(TBoard tab, int row, int col);


bool justFourInArow(TBoard tab, int row, int col)
{
    return
        below(tab, row, col) >= 3
    or
        left(tab, row, col)+right(tab, row, col) >= 3
    or
        lfup(tab, row, col)+rtdw(tab, row, col) >= 3
    or
        lfdw(tab, row, col)+rtup(tab, row, col) >= 3;
    return false;
}


void init(TBoard& tab)
{
    for (int i = 0; i < ROWS; ++i)
        for (int j = 0; j < COLS; ++j)
            tab[i][j] = 0;
}
void print(TBoard tab, int lastRow, int lastCol)
{
    for (int i = ROWS-1; i >= 0; --i) {
        for (int j = 0; j < COLS; ++j)
            if (lastRow == i and lastCol == j)
                cout << ((tab[i][j]==2)?":":".") << " ";
            else
                cout << tab[i][j] << " ";
        cout << endl;
    }
}
int randBet(int min, int max)
{
    return rand() % (max-min) + min;
}


int below(TBoard tab, int row, int col)
{
    int token = tab[row][col];
    int cnt = 0;
    int r = row;
    int c = col;
    while (--r >= 0             and tab[r][c] == token)
        ++cnt;
    return cnt;
}
int left(TBoard tab, int row, int col)
{
    int token = tab[row][col];
    int cnt = 0;
    int r = row;
    int c = col;
    while (             --c >= 0 and tab[r][c] == token)
        ++cnt;
    return cnt;
}
int right(TBoard tab, int row, int col)
{
    int token = tab[row][col];
    int cnt = 0;
    int r = row;
    int c = col;
    while (             ++c < COLS and tab[r][c] == token)
        ++cnt;
    return cnt;
}
int lfup(TBoard tab, int row, int col)
{
    int token = tab[row][col];
    int cnt = 0;
    int r = row;
    int c = col;
    while (++r < ROWS and --c >= 0 and tab[r][c] == token)
        ++cnt;
    return cnt;
}
int rtdw(TBoard tab, int row, int col)
{
    int token = tab[row][col];
    int cnt = 0;
    int r = row;
    int c = col;
    while (--r >= 0 and ++c < COLS and tab[r][c] == token)
        ++cnt;
    return cnt;
}
int lfdw(TBoard tab, int row, int col)
{
    int token = tab[row][col];
    int cnt = 0;
    int r = row;
    int c = col;
    while (--r >= 0 and --c >= 0 and tab[r][c] == token)
        ++cnt;
    return cnt;
}
int rtup(TBoard tab, int row, int col)
{
    int token = tab[row][col];
    int cnt = 0;
    int r = row;
    int c = col;
    while (++r < ROWS and ++c < COLS and tab[r][c] == token)
        ++cnt;
    return cnt;
}
