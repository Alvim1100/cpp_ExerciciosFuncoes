#include <iostream>
using namespace std;

int bissexto(int __ano){
    if(__ano%4 == 0 && __ano%100 != 0 || __ano%400 == 0){
        return true;
    }else{
        return false;
    }
}

int numdias(int _mes, int _ano){
    bool ehbissexto;

    if(_mes == 1 || _mes == 3 || _mes == 5 || _mes == 7 || _mes == 8 || _mes == 10 || _mes == 12){
        return 31;
    }else if(_mes == 4 || _mes == 6 || _mes == 9 || _mes == 11){
        return 30;
    }else if(_mes == 2){
        ehbissexto = bissexto(_ano);

        if(ehbissexto == true){
            return 29;
        }else{
            return 28;
        }
    }else{
        return 1;
    }
}

int main(){
    int mes;
    int ano;
    int dias;
    
    cout << "Digite um mes em numero: ";
    cin >> mes;
    cout << "Digite um ano: ";
    cin >> ano;
    cout << endl;

    dias = numdias(mes, ano);

    if(dias == 1){
        cout << "Esse mes nao existe, duh!";
        return 0;
    }

    cout << "O numero de dias do mes " << mes << " do ano " << ano << " eh: " << dias << endl;

}