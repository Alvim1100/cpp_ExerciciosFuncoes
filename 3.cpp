#include <iostream>
using namespace std;

int bissexto(int _ano){
    if(_ano%4 == 0 && _ano%100 != 0 || _ano%400 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int ano;
    bool ehbissexto;

    cout << "Digite um ano: ";
    cin >> ano;
    cout << endl;

    ehbissexto = bissexto(ano);

    if(ehbissexto == true){
        cout << "O ano " << ano << " eh bissexto";
    }else{
        cout << "O ano " << ano << " nao eh bissexto";
    }
}