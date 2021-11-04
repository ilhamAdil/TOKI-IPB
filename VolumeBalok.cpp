#include <iostream>
#define SIZE 10000
using namespace std;

typedef struct{
    double panjang;
    double lebar;
    double tinggi;
} balok;


int main(){
    int n, i;
    balok balokCollection[SIZE];

    cin >> n;
    for(i=0; i<n; i++){
        double p, l, t;
        cin >> p >> l >> t;
        balokCollection[i].panjang = p;
        balokCollection[i].lebar = l;
        balokCollection[i].tinggi = t;
    }

    double volumes;
    int counter = 0;
    while(cin >> n && n!=-9){
        volumes += balokCollection[n-1].panjang * balokCollection[n-1].lebar * balokCollection[n-1].tinggi;
        counter++;
    }
    double average = volumes/counter;
    cout.precision(4);
    cout << fixed << average << endl;
}

