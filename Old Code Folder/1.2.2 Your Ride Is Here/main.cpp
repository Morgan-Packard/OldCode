/*
ID: 25packa1
PROG: ride
LANG: C++14
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int valueCalc(string word)
{
    int i, output = 1;
    for(i = 0; i < word.length(); i++){
        output = output * (int(word[i]) - 64);
    }
    return output % 47;
}

int main(){
    string comet, group;
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    getline(fin, comet);
    getline(fin, group);
    if (valueCalc(comet)==valueCalc(group)){
        fout << "GO" << endl;
    } 
    else{
        fout << "STAY" << endl;
    }
}