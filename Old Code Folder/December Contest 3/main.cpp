#include <iostream>

using namespace std;

int main(){
    int t = 0;
    cin >> t;

    //Each of T test cases
    for(int i = 0; i < t; i++){
        bool okOrLie = true, allOne = false, allZero = false, anyOne = false, anyZero = 0;
        int n = 0, m = 0;
        cin >> n;
        cin >> m;
        int inputnumbs[100];
        int outputnumbs[100];

        //take in each, if any 2 are the same but dont mean the same, its a lie

        //Each of m lines
        for(int j = 0; j < m; j++){
            cin >> inputnumbs[j];
            cin >> outputnumbs[j];

            for(int k = 0; k < j; k++){
                if(inputnumbs[j] == inputnumbs[k] && outputnumbs[j] != outputnumbs[k]){
                    okOrLie = false;
                    break;
                }
            }
            if(okOrLie == false){
                break;
            }
        }
        if(okOrLie == false){
            cout << "LIE" << endl;
        }else{
            cout << "OK" << endl;
        }

    }
}