#include <iostream>
using namespace std;

class Sortowanie{
    int tab[10];

    public:
    Sortowanie(){

    }

    ~Sortowanie(){

    }

    void wczytaj(){
        cout<<"Wprowadź dane do tablicy: ";
        for(int i = 0; i<10; i++){
            cin>>tab[i];
        }
    }
    
    void wypisz(){
    for(int i = 0; i<10; i++){
        cout<<i<<" | ";
    }
    
    cout<<endl;
    
    for(int i = 0; i<sizeof(tab)/sizeof(tab[0]); i++){
        cout<<tab[i]<<" | ";
    }
    cout<<endl;
}

    void sortuj(){
        int max_index;
        for(int i = 0; i<(sizeof(tab)/sizeof(tab[0]))-1; i++){
            max_index = i;
            for(int x = i+1; x<sizeof(tab)/sizeof(tab[0]); x++){
                if(tab[x] > tab[max_index]){
                    max_index = x;
                }
                
            }
            swap(tab[i], tab[max_index]);
        }
    }

    void najwyzsza(){
        int najw = tab[0];
        for(int i = 1; i<sizeof(tab)/sizeof(tab[0]); i++){
            if(tab[i] > najw){
                najw = tab[i];
            }
        }
        cout<<"Najwyzsza wartosc w tablicy: "<<najw;
    }
};

int main(){
    Sortowanie sort;
    sort.wczytaj();
    sort.sortuj();
    cout<<endl;
    sort.wypisz();
    cout<<endl;
    sort.najwyzsza();
    
    return 0;
}
