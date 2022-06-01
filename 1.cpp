#include <iostream>
using namespace std;

int mmc(int _a, int _b){
    int i = 1;
    
    while(true){
        if(i%_a == 0 && i%_b == 0){
            return i;
        }
        i++;
    }
}

int main(){
    int a;
    int b;
    int resultado;

    cout << "Digite o primeiro numero" << endl;
    cin >> a;

    cout << "Digite o segundo numero" << endl;
    cin >> b;

    resultado = mmc(a, b);

    cout << "O mmc de " << a << " e " << b << " eh " << resultado << endl;

}