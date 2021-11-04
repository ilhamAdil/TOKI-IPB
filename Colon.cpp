#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int index;
    string str = "";
    cin >> n;
    //tarik newline
    getline(cin, str);
    str.empty();

    while(n--){ 
        string satu = "";
        string dua = "";
        bool cek=false;        
        getline(cin, str);
        for(int i=0; i<str.length(); i++){
            if(str[i] == ':'){
                cek=true;
                index=i;
                break;
            }           
            satu += str[i];
        }
        if(cek == true){
            for(int i=index+1; i<str.length(); i++){
                dua += str[i];
            }   
        }
 
        if(cek == true){
            if(satu.compare(dua) == 0)
                cout << "S" << endl;
            else if(satu.length() == dua.length())
                cout << "D" << endl;
            else if(satu.length() > dua.length())
                cout << "L" << endl;
            else if(satu.length() < dua.length())
                cout << "R" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }   
}