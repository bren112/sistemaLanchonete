#include <iostream>
using namespace std;

int main() {
    int comeco, escolhaCateg;
    string nome;

    cout << "{=======Bem Vindo ao Cardapio, deseja fazer o pedido?=======}" << endl;
    cout << "Digite '1' para comecar e qualquer outra tecla para sair: ";
    cin >> comeco;

    if (comeco == 1) {
        cout << "{======Voce entrou no cardapio!======}" << endl;
        cin.ignore(); 
        cout << "Digite seu nome: ";
        getline(cin, nome);
        cout << "Ola " << nome << "!" << endl;

        do {
            cout << "\n{======== O QUE VOCE DESEJA PEDIR? ========}" << endl;
            cout << "Digite:\n1) Lanches\n2) Bebidas\n4) Sair" << endl;
            cout << "Sua escolha: ";
            cin >> escolhaCateg;

            switch (escolhaCateg) {
                case 1:
                    cout << "Você escolheu Lanches!\n";
              
                    break;
                case 2:
                    cout << "Você escolheu Bebidas!\n";

                    break;


                case 4:
                    cout << "Finalizando pedido...\n";
                    break;
                default:
                    cout << "Opção inválida! Tente novamente.\n";
            }

        } while (escolhaCateg != 4);

    } else {
        cout << "vc escolheu n fazer o pedido\n";
    }

    return 0;
}
