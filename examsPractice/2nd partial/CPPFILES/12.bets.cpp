#include <iostream>
#include <array>
#include <string>

using namespace std;
const int N = 10;
struct person{
    string name;
    int bet = 0, result;
};

typedef array<person, N> Game;

struct data{
    Game game;
    int nPers = 0;
};

bool isIt(data& data, string& name);
int totalBet(data& d);
int totalWon(data& d, int result);
int totalRatio(data& data, int won, int bet);
int searchPerson(data& data, string& name);
void readData(data& data, int& result);
void results(data& data, int result);

int main(){
    data v;
    int result;
    readData(v, result);
    cout << endl;
    results(v, result);
}

bool isIt(data& data, string& name){
    int i = 0;
    while(i < data.nPers and data.game[i].name != name)
    i++;
    return i < data.nPers;
}

int totalBet(data& d){
    int sum = 0;
    for (int i = 0; i < d.nPers; i++)
    {
        sum += d.game[i].bet;
    }
    return sum;
}

int totalWon(data& d, int result){
    int sum = 0;
    for (int i = 0; i < d.nPers; i++)
    {
        if(d.game[i].result == result)
        sum += d.game[i].bet;
    }
    return sum;
}

int totalRatio(data& data, int won, int bet){
    return bet / won;
}

int searchPerson(data& data, string& name){
    int i = 0;
    while(i < data.nPers and data.game[i].name != name)
    i++;
    return i;
}

void readData(data& data, int& result){
    string name;
    int ind, bet;
    data.nPers = 0;

    cout << "give name, result, bet (END FOR FINISH)";
    cout << "Name: "; cin >> name;
    while(name != "END" and data.nPers < N){
    if(not isIt(data, name)){
        data.game[data.nPers].name = name;
        cout << "result: "; cin >> data.game[data.nPers].result;
        cout << "bet: "; cin >> data.game[data.nPers].bet;
        data.nPers++;
    } else{
        ind = searchPerson(data, name);
        cout << "result: "; cin >> data.game[ind].result;
        cout << "bet: "; cin >> bet;
        data.game[ind].bet +=  bet;
    }
    cout << "name: "; cin >> name;
    }
    cout << "result: ";
    cin >> result;
}

void results(data& data, int result){
    int bet, won, money, ratio;
    for (int i = 0; i < data.nPers; i++)
    {
        cout << data.game[i].name << " " << data.game[i].result 
        << " " << data.game[i].bet;
        cout << endl;
    }
    won = totalWon(data, result);
    bet = totalBet(data);
    ratio = totalRatio(data, won, bet);

    cout << "won: " << won;
    cout << "bet: " << bet;

    for (int j = 0; j < data.nPers; j++)
    {
        cout << data.game[j].name << " " << data.game[j].result 
        << " " << data.game[j].bet;
        if(data.game[j].result == result){
            bet = data.game[j].bet * ratio;
            cout << bet;
        }
        else cout << "0";
        cout << endl;
    }
}