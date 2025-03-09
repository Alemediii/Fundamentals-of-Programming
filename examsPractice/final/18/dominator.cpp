// Surname :
// Name :
// Degree :
// Machine Number :
// Date : 2018 -02 -02

#include <iostream>
#include <array>

using namespace std;
const int N = 9;

typedef array <int ,N> TVec ;

int dominator(TVec a);

int main () {
    TVec a1 = {{3, 4, 3, 2, 3, 1, 3, 3, 1}},
    a2 = {{4, 4, 3, 2, 3, 1, 3, 3, 1}},
    a3 = {{1, 3, 2, 1, 4, 4, 4, 4, 4}};
    cout << " The dominator of a1 is : " << dominator (a1) << endl ;
    cout << " The dominator of a2 is : " << dominator (a2) << endl ;
    cout << " The dominator of a3 is : " << dominator (a3) << endl ;
    return 0;
}

int dominator(TVec a){
    int counter = 0, dominator = -1;
    bool keepGoing = true;
    int limit = int(a.size())/2; //we set the variable limit since no dominator will be found 
                                // in a higher index than int(a.size())/2
    for (int i = 0; i <= limit and keepGoing; i++)
    {
        for (int j = 0; j < int(a.size()); j++)
        {
            if(a[j] == a[i]) counter++;
        }
        if(counter > limit){
            dominator = a[i];
            keepGoing = false;
        } else counter = 0;
    }
    return dominator;
}