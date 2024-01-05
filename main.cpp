#include <iostream>

using namespace std;

int main() {

    long long int CodigoBarra;
    
    int num_0,num_1,num_2,num_3,num_4,num_5,num_6,num_7,num_8,num_9,num_10,num_11,num_12,
    somatorio,soma,dividir,multiplica,resta;

    cout<<"Digite seu Codigo de barra\n\tobs: Codigo de 13 digitos"<<endl;
    cin >> CodigoBarra;
    if(CodigoBarra> 1000000000000 && CodigoBarra < 9999999999999){

        num_0 = CodigoBarra/1000000000000;
        num_1 = (CodigoBarra%1000000000000/100000000000) *3;
        num_2 = CodigoBarra%100000000000/10000000000;
        num_3 = (CodigoBarra%10000000000/1000000000) *3;
        num_4 = CodigoBarra%1000000000/100000000;
        num_5 = (CodigoBarra%100000000/10000000) *3;
        num_6 = CodigoBarra%10000000/1000000;
        num_7 = (CodigoBarra%1000000/100000) *3;
        num_8 = CodigoBarra%100000/10000;
        num_9 = (CodigoBarra%10000/1000) *3;
        num_10 = CodigoBarra%1000/100;
        num_11 = (CodigoBarra%100/10) *3;
        num_12 = CodigoBarra%10;

        somatorio = num_0+num_1+num_2+num_3+num_4+num_5+num_6+num_7+num_8+num_9+num_10+num_11;

        dividir = somatorio / 10;

        soma = dividir + 1;

        multiplica = soma *  10;

        resta = multiplica - somatorio;

        if(resta%10==0){
            resta =0;
        }

        if(resta == num_12){
            cout << "Codigo de Barra validado"<<endl;
        }else{
            cout << "Codigo de Barra invalido\n\t troque o digito verificador por {"<<resta<<"}";
        }
    } else{
        cout << "Codigo de Barras com tamanho errado"<< endl;
    }
    return 0;
}
