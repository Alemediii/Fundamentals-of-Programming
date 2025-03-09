#include <iostream>
#include <array>
using namespace std;

const int MAXNMON = 10;
struct TMono
{
    float coef;
    int deg;
};
typedef array<TMono, MAXNMON> TPoly;

void print(TPoly p);

TPoly derivative(TPoly p);

// Build a function TPoly add(TPoly p, float coef, int deg); that returns a
// polynomial with the monomial coef.. x^deg added.  Be careful here shifting
// down the upper elements over any monomial ending with a zero coefficient.
// Any new inexistent monomial to add should be inserted among the rest
// keeping the degrees sorted.
TPoly add(TPoly p, float coef, int deg);
TPoly add(TPoly a, TPoly b);
void init(TPoly &p);

int main()
{
    TPoly p;
    init(p);
    print(p);
    p = add(p, 1, 2);
    print(p);
    p = add(p, -2, 1);
    print(p);
    p = add(p, 2, 0);
    print(p);
    p = add(p, 3, 3);
    print(p);
    p = add(p, 10, 20);
    print(p);
    p = derivative(p);
    print(p);
    return 0;
}

TPoly add(TPoly p, float coef, int deg)
{
    if (coef == 0)
        return p;
    int ifree = -1;
    int i = 0;
    // traverse the array searching for
    // the degree, saving whatever empty slot
    // just in case
    while (i < MAXNMON and
           not(p[i].coef != 0 and p[i].deg == deg))
    {
        if (p[i].coef == 0)
            ifree = i;
        ++i;
    }
    if (i < MAXNMON)
        p[i].coef += coef;
    else
    {
        p[ifree].coef = coef;
        p[ifree].deg = deg;
    }

    return p;
}

void init(TPoly &p)
{
    for (int i = 0; i < MAXNMON; ++i)
        p[i].coef = 0;
}

void print(TPoly p)
{
    cout << "p(x) = ";
    for (int i = 0; i < MAXNMON; ++i)
        if (p[i].coef != 0)
        {
            if (p[i].coef != 1)
                cout << p[i].coef;
            if (p[i].deg != 0)
                cout << " x";
            if (p[i].deg > 1)
                cout << "^" << p[i].deg;
            if (i < MAXNMON - 1 and p[i + 1].coef != 0)
                cout << " + ";
        }
    cout << endl;
}

TPoly derivative(TPoly p)
{
    TPoly r = p;
    for (int i = 0; i < MAXNMON; ++i)
        if (r[i].coef != 0)
        {
            if (p[i].deg > 0)
            {
                r[i].coef = r[i].coef * r[i].deg;
                r[i].deg = r[i].deg - 1;
            }
            else
                r[i].coef = 0;
        }
    return r;
}