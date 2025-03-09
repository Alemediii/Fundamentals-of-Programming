#include <iostream>
#include <array>

using namespace std;
const int SIZE = 10;

typedef array<int, SIZE> Numbers;

struct TNumbers{
    Numbers n;
    int nEl = 0;
};

void read(TNumbers& n);
void show(TNumbers n);

bool isRepeated(TNumbers n, int num){
    int i = 0;
    while(i < n.nEl and n.n[i] != num){
        i++;
    }
    return i < n.nEl;
}

bool isInBoth(TNumbers n, int number){
    int i = 0;
    while(i < n.nEl and n.n[i] != number){
        i++;
    }
    return i < n.nEl;
}


TNumbers calcunion(TNumbers n, TNumbers m){
    TNumbers unionNM = {};
    int j = 0; int toCompare = max(n.nEl, m.nEl);
    while(j < toCompare){
        for (int i = 0; i < toCompare; i++)
        {
            if(not isRepeated(unionNM, n.n[i]) and i < n.nEl){
                unionNM.n[unionNM.nEl] = n.n[i];
                unionNM.nEl++;
            } 
            
            if(not isRepeated(unionNM, m.n[i]) and i < m.nEl){
                unionNM.n[unionNM.nEl] = m.n[i];
                unionNM.nEl++;
            } 
        }
        j++;
    }
    return unionNM;
}

TNumbers calcIntersection(TNumbers n, TNumbers m){
    TNumbers interNM = {};
    int j = 0; int toCompare = max(n.nEl, m.nEl);
    while(j < toCompare){
        for (int i = 0; i < toCompare; i++)
        {
            if(not isRepeated(interNM, n.n[i]) and isInBoth(m, n.n[i])){
                interNM.n[interNM.nEl] = n.n[i];
                interNM.nEl++;
            }
        }
        j++;
    }
    return interNM;
}

int main(){
    TNumbers n, m;
    read(n); read(m);
    TNumbers z = calcunion(n, m);
    TNumbers s = calcIntersection(n, m);

    if(z.nEl > SIZE) cout << "cannot print the array of the union" << endl;
    else{
        cout << endl;
        cout << "union";
        show(z);
    }

    cout << endl;
    cout << "intersection";
    show(s);
}


void read(TNumbers& n){
    cout << "define nEl: ";
    cin >> n.nEl;
    cout << "define elements: ";
    for (int i = 0; i < n.nEl; i++)
    {
        cin >> n.n[i];
    }
}

void show(TNumbers n){
    cout << " elements are: ";
    for (int i = 0; i < n.nEl; i++)
    {
        cout << n.n[i] << " ";
    }
    cout << endl;
    cout << endl;
}