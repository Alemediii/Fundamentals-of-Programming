#include <iostream>
#include <string>

using namespace std;

int search(char c, string chain){
    int i = 0;
    while(i < int(chain.size()) and chain[i] != c){
        i++;
    }
    return i; 
}

void meeting(string chain1, string chain2, int& pos1, int& pos2);

int main(){
    int meetingPos, noMeetingPos;
    string chain1, chain2;

    cout << "define chain1 and chain2: ";
    cin >> chain1 >> chain2;

    meeting(chain1, chain2, meetingPos, noMeetingPos);
    cout << "the chars in the same pos: " << meetingPos << endl;
    cout << "the chars in different pos: " << noMeetingPos << endl;
}

void meeting(string chain1, string chain2, int& pos1, int& pos2){
    int top, pos;
    string auxCad1 = chain1, auxCad2 = chain2;

    pos1 = 0;
    top = max(int(chain1.size()), int(chain2.size()));
    for (int i = 0; i < top; i++)
    {
        if(auxCad1[i] == auxCad2[i]){
            pos1++;
            auxCad1[i] = ' ';
            auxCad2[i] = ' ';
        }
    }

    pos2 = 0;
    for (int i = 0; i < int(chain2.size()); i++)
    {
        if(auxCad2[i] != ' '){
            pos = search(auxCad2[i], auxCad1);
            if(pos < int(auxCad1.size())){
                pos2++;
                auxCad1[pos] = ' ';
            }
        }
    }   
}