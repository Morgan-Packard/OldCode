/*
ID: 25packa1
LANG: C++14
TASK: milk2
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin ("milk2.in");
    ofstream fout ("milk2.out");
    int numOfFarmers = 0, helperStart, helperEnd;
    int startTimeArray [5000], endTimeArray [5000];
    fin >> numOfFarmers;
    for(int i = 0; i < numOfFarmers; i++){
        fin >> helperStart;
        fin >> helperEnd;
        startTimeArray[i] = helperStart;
        endTimeArray[i] = helperEnd;
    }
    for(int i = 0; i < numOfFarmers; i++){
        if(endTimeArray[i] < )
    }
}