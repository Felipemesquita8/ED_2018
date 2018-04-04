#include <iostream>
#include<iostream>
#include<list>

using namespace std;


using namespace std;

    void rodar(list<int> &lista){
        lista.push_back(lista.front());
        lista.pop_front();
 }
int main(void){

    int qtd=0, first=0, i, N;

    cin >> qtd;
    cin >> first;
//Ateração para fazer N saltos
//    cin >> N;

    list<int> lista;

    for(i = 1; i <= qtd; i++){
        lista.push_back(i);
    }

    while(lista.front() != first)
        rodar(lista);

//Código padrão.
    while(lista.size() > 1){
        rodar(lista);
        lista.pop_front();
    }

// Alteração para fazer N saltos.
//    while(lista.size() > 1){
//            for(i = 1; i <= N; i++)
//                rodar(lista);
//        lista.pop_front();
//    }

    cout << lista.front() << endl;


}


