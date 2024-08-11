/*
ID: 25packa1
LANG: C++14
TASK: beads
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin ("beads.in");
    ofstream fout ("beads.out");

    int beadlength;
    string beadstring;
    fin >> beadlength;
    fin >> beadstring;
    int longestSequence = 0;

    for(int i = 0; i < beadlength; i++){
        char headchar = 'w';
        int headcount = 0;

        for(int charfinder = i; headchar == 'w'; charfinder){
            headchar = beadstring[charfinder];
            if(charfinder == beadlength - 1){
                charfinder = 0;
            } else {
                charfinder++;
            }
            if(charfinder == i){
                break;
            }
        }

        for(int head = i; (headcount < beadlength) && (beadstring[head] == 'w' || beadstring[head] == headchar); head){
            headcount++;
            if(head == beadlength - 1){
                head = 0;
            } else {
                head++;
            }
        }
        cout << "first " << headcount << endl;
        for (int head2 = (i + headcount) % beadlength; (headcount < beadlength) && beadstring[head2] != headchar; head2){
            headcount++;
            if(head2 == beadlength - 1){
                head2 = 0;
            } else {
                head2++;
            }
            cout << "second " << headcount << endl;
        }

        if (headcount > longestSequence){
            longestSequence = headcount;
        }
        cout << i << " position in ended with " << headcount <<endl;

    }
    fout << longestSequence << endl;
}