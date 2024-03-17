#include <iostream>
#include <string>

using namespace std;

int main(){

    string s = "Alfredo";
    cin >> s;
    int aux = 0;
    if(62<=s[0] && s[0]<=90 ){
        for(int i = 1; i<s.length(); i++){
                if(97<=s[i] && s[i]<=122){
                    aux ++;
                }
                else{
                aux--;
                }    
        }
        if((aux+1) == s.length())
        cout<< "Yes";
        else{{
            cout<<"No";
        }}
    }
    else{
        cout<<"No";
    }
    return 0;
}
