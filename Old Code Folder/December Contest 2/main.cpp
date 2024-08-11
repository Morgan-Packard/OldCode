#include <iostream>

using namespace std;

int main(){
    int numOftestCases = 0;
    cin >> numOftestCases;

    //for each of the cases
    for(int i = 0; i < numOftestCases; i++){
        int nVal = 0, kVal = 0, numOfPatches = 0;
        cin >> nVal;
        cin >> kVal;

        char testCase[10000];
        for(int j = 0; j < nVal; j++){
            cin >> testCase[j];
        }
        
        //for each list
        char testCaseAnswer[10000];
        for(int j = 0; j < nVal; j++){

            bool addPatch = true;
            for(int k = 0; k < kVal; k++){
                if ((testCaseAnswer[j - k] == testCase[j] && (j-k) >= 0) || (testCaseAnswer[j - kVal] != testCase[j] && (j-kVal) >= 0 && testCase[j+1] == testCase[j])){
                    addPatch = false;
                }
            }
            switch (addPatch)
            {
            case true:
                testCaseAnswer[j] = testCase[j];
                numOfPatches++;
                break;

            default:
                testCaseAnswer[j] = '.';
                break;
            }
        }
        cout << numOfPatches << endl;
        for(int j = 0; j < nVal; j++){
            cout << testCaseAnswer[j];     
        }
        cout << endl;
        
    }
}