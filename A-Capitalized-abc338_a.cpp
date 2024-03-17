#include <iostream>
#include <string>

using namespace std;

int main(){

    string s = "Alfredo";
    cin >> s;
    int aux = 0;
    //cout << s.length()<<endl;
    if(62<=s[0] && s[0]<=90 ){
        for(int i = 1; i<s.length(); i++){
                if(97<=s[i] && s[i]<=122){
                    aux ++;
                    //cout<< s[i]<<endl;
                }
                else{
                aux--;
                //cout <<"Hola"<<endl;
                }    
        }
             //cout<< aux <<endl;
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