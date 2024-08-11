#include <iostream>
/*
ID: 25packa1
LANG: C++14
TASK: test
*/
using namespace std;
int main(){
    int numOfCows;
    cin >> numOfCows;
    int cowList[100000];
    for (int i = 0; i < numOfCows; i++){
        cin >> cowList[i];
    }
    int long long maxMoney = 0;
    int maxTuition = 0;
    int maxPosMoney = 0;
    int minPosMoney = 1000000;
    for (int i = 0; i < numOfCows; i++){
        if(cowList[i] >= maxPosMoney){
            maxPosMoney = cowList[i];
        }
        if(cowList[i] <= minPosMoney){
            minPosMoney = cowList[i];
        }
    }
    for (int i = minPosMoney; i <= maxPosMoney; i++){
        int long long caseMoney = 0;
        for (int j = 0; j < numOfCows; j++){
            if(cowList[j] >= i){
                caseMoney += i;
            }
        }
        if(caseMoney > maxMoney){
            maxMoney = caseMoney;
            maxTuition = i;
        }
    }
    cout << maxMoney << " ";
    cout << maxTuition;
}