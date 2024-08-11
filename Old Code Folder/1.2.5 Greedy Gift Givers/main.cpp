/*
ID: 25packa1
TASK: gift1
LANG: C++14
*/
#include <bits/stdc++.h>
using namespace std;

int num1;
string nameArray [10];
int valueArray[10] {0,0,0,0,0,0,0,0,0,0};

int findInNameArray(string searchName){
    for (int k = 0; k < num1; k++){
        if (searchName == nameArray[k]){
            return k;
        }
    }
    cerr << "failed to return";
    return 0;
}


int main(){
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");

    string name;

    fin >> num1;

    //gift1.in name list is stored in name Array
    for (int i = 0; i < num1; i++){
        fin >> name;
        nameArray[i] = name;
    }
    
    /*
    // Tester
    for (int i = 0; i <= num1; i++){
        fout << valueArray[i] << endl;
    }
    */

    int moneyToGive;
    int numOfGiftees;
    string gifteeName;
    for(int i = 0; i < num1; i++){
        fin >> name;
        fin >> moneyToGive;
        fin >> numOfGiftees;
        if(moneyToGive != 0 && numOfGiftees != 0){
            for(int j = 0; j < numOfGiftees; j++){
                fin >> gifteeName;
                valueArray[findInNameArray(gifteeName)] += (moneyToGive/numOfGiftees);
            }
            valueArray[findInNameArray(name)] -= (moneyToGive - (moneyToGive % numOfGiftees));
        }

    }
    for(int i = 0; i < num1; i++){
        fout << nameArray[i] << " ";
        fout << valueArray[i] << endl;
    }

    return 0;
}