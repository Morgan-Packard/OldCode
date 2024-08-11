/*
ID: 25packa1
LANG: C++14
TASK: friday
*/
#include <bits/stdc++.h>
using namespace std;

int output[7] = {0,0,0,0,0,0,0};



int main(){
    ifstream fin("friday.in");
    ofstream fout("friday.out");

    int n;
    fin >> n;
    int day = 1;

    for(int month = 0; month < (n * 12); month++){
        if(month % 12 == 1){
            if (((month / 12) % 4 == 0 && ((month/12)+1900) % 100 != 0) || ((month/12)+1900) % 400 == 0){
                day += 13;
                output[(day % 7)] += 1;
                day += 16;
            } else {
                day += 13;
                output[(day % 7)] += 1;
                day += 15;
            }
        } else if(month % 12 == 3 || month % 12 == 5 || month % 12 == 8 || month % 12 == 10){
            day += 13;
            output[(day % 7)] += 1;
            //30 days
            day += 17;
        } else {
            day += 13;
            output[(day % 7)] += 1;
            //31 days
            day += 18;
        }
    }

    for(int i = 0; i < 6; i++){
        fout << output[i] << " ";
    } 
    fout << output[6] << endl;
}