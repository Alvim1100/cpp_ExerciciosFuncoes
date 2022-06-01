#include <iostream>
using namespace std;

int situacao_aluno(float _media, int _faltas, int _horas_aula ){
    int horasfaltas;
    int horastotal;

    horasfaltas = _faltas*3;
    
    horastotal = _horas_aula - horasfaltas;

    if(_media >= 6 && horastotal >= _horas_aula*0.75){
        return true;
    }else{
        return false;
    }
}

int main(){
    bool situacao;
    float media;
    int faltas;
    int horas_aula;

    do{
        cout << "Digite a sua media: ";
        cin >> media;
    }while(media < 0 || media >= 10);
    
    cout << "Digite o numero de faltas: ";
    cin >> faltas;
    cout << "Digite a quantidade de horas_aula no semestre: ";
    cin >> horas_aula;

    situacao = situacao_aluno(media, faltas, horas_aula);

    if(situacao == false){
        cout << "O aluno foi reprovado";
    } else {
        cout << "O aluno foi aprovado";
    }
}