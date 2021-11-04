#include <iostream>
#include <string>
#define size 2000
using namespace std;
 
class Manik{
    string manik;
    string manik2;
    int jumlah;
     
    public:
        void setManik(string manik){
            this->manik = manik;
        }
        void setManik2(string manik2){
            this->manik2 = manik2;
        }
        void setJumlah(int jumlah){
            this->jumlah = jumlah;
        }
         
        string getManik(){
            return manik;
        }
        string getManik2(){
            return manik2;
        }
        int getJumlah(){
            return jumlah;
        }
};
 
int main(){
    int n, jum;
    int N=0;
    string manik;
    Manik mn[size];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> manik >> jum;
        mn[i].setManik(manik);
        mn[i].setJumlah(jum);
    }
     
    while(cin >> manik && manik != "STOP")
        mn[N++].setManik2(manik);
     
    bool lengkap = true;
    for(int i=0; i<n; i++){
        string awal = mn[i].getManik();
        int punya = mn[i].getJumlah();
        for(int j=0; j<N; j++){
            string cek = mn[j].getManik2();
            if(awal == cek)
                punya--;
        }
        if(punya != 0){
            cout << awal << " " << punya << endl;
            lengkap = false;
        }
    }
    if(lengkap)
        cout << "LENGKAP" << endl;
    return 0;
}