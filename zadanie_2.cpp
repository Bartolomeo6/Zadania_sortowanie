// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
// #include <algorithm>

using namespace std;

class Wartownik{
    int *tab;
    int ile;
    int obronca;
    
    public:
    
    Wartownik(){
        
    }
    
    ~Wartownik(){
        
    }
    
    void FillTable(){
        srand(time(NULL));
        cout<<"Ile elementów tablicy? ";
        cin>>ile;
        if(ile < 50){
            cout<<"Za mala wartosc!"<<endl;
            FillTable();
        }
        else if(ile >= 50){
            
            int *tab = new int[ile];
        
            for(int i = 0; i<ile+1; i++){
                tab[i] = rand() % 100 + 1;
                
            }
            
            for(int i = 0; i<ile+1; i++){
                cout<<i<<' ';
                cout<<tab[i]<<' '<<endl;
            }
            
        }
        
    }
    
    void LookForYourGuard(){
        cout<<"Jaka wartosc szukamy? ";
        cin>>obronca;
        
        // POPRAW TO:
        
        // for(int i = 0; i<ile;i++){
        //     // bool znajdujeSie = std::find(std::begin(tab), std::end(tab), obronca)
        //     //                     != std::end(tab);
        //     if(obronca == tab[i]){
                
        //         // if(obronca == sizeof(tab)/sizeof(tab[0]) + 1){
        //         //     cout<<"Obronca chroni nas przed wyjsciem"<<endl;
        //         // }
        //         cout<<"Obronca w tablicy na indeksie: "<<i<<endl;
        //     }
        //     else{
        //         cout<<"Brak obroncy w tablicy"<<endl;
        //     }
        // }
        
    }
    
};


int main() {
    Wartownik wart;
    wart.FillTable();
    wart.LookForYourGuard();

    return 0;
}