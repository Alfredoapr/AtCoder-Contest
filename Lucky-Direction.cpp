#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    
    string s;
    cin >> s;

    vector<pair<string,string>> directions{
        {"N","S"},
        {"E","W"},
        {"W","E"},
        {"S","N"},
        {"NE","SW"},
        {"NW","SE"},
        {"SE","NW"},
        {"SW","NE"}
    };
    
    for(int i = 0;directions.size(); i++){
        if(directions[i].first == s){
            cout << directions[i].second << endl;
            break;
        }
    }


    return 0;
}