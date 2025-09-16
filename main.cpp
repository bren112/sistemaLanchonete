#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    double totalCompra = 0, valorItem, desconto, totalDesconto; 
    int comeco, escolhaCateg, escolhaProd, qntd;
    string nome, descPedido;

    cout << "\n{======= Bem Vindo ao Cardapio, deseja fazer o pedido? =======}" << endl;
    cout << "\nDigite '1' para Confirmar\nQualquer outro numero para Sair: ";
    cin >> comeco;

    if (comeco == 1) {
        cout << "\n{====== Voce entrou no cardapio! ======}" << endl;
        cin.ignore(); 
        cout << "Digite seu nome: ";
        getline(cin, nome);
        cout << "\nOla " << nome << "!" << endl;

        do {
            cout << "\n{=================== MENU ===================}" << endl;
            cout << "\nPara sair Digite: 0" << endl;
            cout << "O que voce deseja pedir? " << endl;
            cout << "\nDigite qual categoria voce deseja: \n1) Lanches \n2) Bebidas\n3) Doces \n4) Finalizar " << endl;
            cout << "Sua escolha: ";
            while(!(cin >> escolhaCateg)){
                cout << "Entrada invalida! Digite apenas numeros: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            switch (escolhaCateg) {
                // ================= Lanches =================
                case 1:
                    cout << "Digite 0 para voltar para o Menu\n";
                    cout << "\n" << nome << " Qual lanche voce quer? \n\n1) Hamburguer - R$10,00 \n2) Cheeseburguer - R$12,00 \n3) X-Bacon - R$15,00" << endl;
                    cout << "Escolha pelo numero do lanche: ";

                    while (!(cin >> escolhaProd)){
                        cout << "Entrada invalida! Digite apenas numeros: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                  
                    switch (escolhaProd) {
                        case 0:
                            cout << "Voltando... \n"; 
                            break;

                        case 1:
                            cout << "\nQuantos Hamburgueres? ";
                            while(!(cin >> qntd)){
                                cout << "Entrada invalida! Digite apenas numeros: ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            }
                            valorItem = 10 * qntd;  
                            totalCompra += valorItem;
                            cout << "\n" << qntd << "x Hamburguer(s) adicionado(s)!" << endl;
                            descPedido += to_string(qntd) + "x -Hamburguer \n";


                            cout << "=====================================================" << endl;
                            cout << "Valor total do Pedido: R$" << fixed << setprecision(2) << totalCompra << endl;
                            cout << "=====================================================" << endl;

                            break;
                            
                        case 2:
                            cout << "\nQuantos Cheeseburguer? ";
                            while(!(cin >> qntd)){
                                cout << "Entrada invalida! Digite apenas numeros: ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            }
                            valorItem = 12 * qntd;  
                            totalCompra += valorItem;
                            cout << "\n" << qntd << "x Cheeseburguer(es) adicionado(s)!" << endl;
                            descPedido += to_string(qntd) + "x -Cheeseburguer \n";


                            cout << "=====================================================" << endl;
                            cout << "Valor total do Pedido: R$" << fixed << setprecision(2) << totalCompra << endl;
                            cout << "=====================================================" << endl;

                            break;

                        case 3:
                            cout << "\nQuantos X-Bacon? ";
                            while(!(cin >> qntd)){
                                cout << "Entrada invalida! Digite apenas numeros: ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            }
                            valorItem = 15 * qntd;  
                            totalCompra += valorItem;
                            cout << "\n" << qntd << "x X-Bacon adicionado(s)!" << endl;
                            descPedido += to_string(qntd) + "x -Xbacon \n";

                            cout << "=====================================================" << endl;
                            cout << "Valor total adicionado ao pedido: R$" << fixed << setprecision(2) << totalCompra << endl;
                            cout << "=====================================================" << endl;

                            break;

                        default:
                            cout << "\nEscolha uma opcao valida!." << endl;
                            break;
                    }
                    break;  

                // ================= Bebidas =================
                case 2:
                    cout << "Digite 0 para voltar para o Menu\n";
                    cout << "\n" << nome << " Qual bebida voce quer? \n\n1) Refrigerante - R$5,00 \n2) Suco - R$7,00 \n3) Agua - R$3,00" << endl;
                    cout << "Escolha pelo numero da bebida: ";
                    while (!(cin >> escolhaProd)){
                        cout << "Entrada invalida! Digite apenas numeros: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                  

                    switch (escolhaProd) {
                        case 0:
                            cout << "Voltando... \n"; 
                            break;

                        case 1:
                            cout << "Quantos Refrigerantes? ";
                            while(!(cin >> qntd)){
                                cout << "Entrada invalida! Digite apenas numeros: ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            }
                            valorItem = 5 * qntd;  
                            totalCompra += valorItem;
                            cout << "\n" << qntd << "x Refrigerante(s) adicionado(s)!" << endl;
                            descPedido += to_string(qntd) + "x -Refrigerante \n";


                            cout << "=====================================================" << endl;
                            cout << "Valor total adicionado ao pedido: R$" << fixed << setprecision(2) << totalCompra << endl;
                            cout << "=====================================================" << endl;
                            break;

                        case 2:
                            cout << "Quantos Sucos? ";
                            while(!(cin >> qntd)){
                                cout << "Entrada invalida! Digite apenas numeros: ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            }
                            valorItem = 7 * qntd;  
                            totalCompra += valorItem;
                            cout << "\n" << qntd << "x Suco(s) adicionado(s)!" << endl;
                            descPedido += to_string(qntd) + "x -Suco \n";


                            cout << "=====================================================" << endl;
                            cout << "Valor total adicionado ao pedido: R$" << fixed << setprecision(2) << totalCompra << endl;
                            cout << "=====================================================" << endl;
                            break;

                        case 3:
                            cout << "Quantas Aguas? ";
                            while(!(cin >> qntd)){
                                cout << "Entrada invalida! Digite apenas numeros: ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            }
                            valorItem = 3 * qntd;  
                            totalCompra +=  valorItem;
                            cout << "\n" << qntd << "x Agua(s) adicionada(s)!" << endl;
                            descPedido += to_string(qntd) + "x -Agua \n";


                            cout << "=====================================================" << endl;
                            cout << "Valor total adicionado ao pedido: R$"   << fixed << setprecision(2)<< totalCompra << endl;
                            cout << "=====================================================" << endl;
                            break;

                        default:
                            cout << "\nEscolha uma opcao valida!." << endl;
                            break;
                    }
                    break;

                // ================= Doces =================
                case 3:
                    cout << "Digite 0 para voltar para o Menu\n";
                    cout << "\n" << nome << " Qual sobremesa voce quer? \n\n1) Sorvete - R$8,00 \n2) Bolo - R$6,00 \n3) Pudim - R$5,00" << endl;
                    cout << "Escolha pelo numero da sobremesa: ";
                    while (!(cin >> escolhaProd)){
                        cout << "Entrada invalida! Digite apenas numeros: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                  

                    switch (escolhaProd) {
                        case 1:
                            cout << "Quantos Sorvetes? ";
                            while(!(cin >> qntd)){
                                cout << "Entrada invalida! Digite apenas numeros: ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            }
                            valorItem = 8 * qntd;  
                            totalCompra +=  valorItem;
                            cout << "\n" << qntd << "x Sorvetes(s) adicionado(s)!" << endl;
                            descPedido += to_string(qntd) + "x -Sorvete \n";


                            cout << "=====================================================" << endl;
                            cout << "Valor total adicionado ao pedido: R$"   << fixed << setprecision(2)<< totalCompra << endl;
                            cout << "=====================================================" << endl;
                        break;

                        case 2:
                            cout << "Quantos Bolos? ";
                            while(!(cin >> qntd)){
                                cout << "Entrada invalida! Digite apenas numeros: ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            }
                            valorItem = 6 * qntd;  
                            totalCompra +=  valorItem;
                            cout << "\n" << qntd << "x Bolos(s) adicionado(s)!" << endl;
                            descPedido += to_string(qntd) + "x -Bolo \n";


                            cout << "=====================================================" << endl;
                            cout << "Valor total adicionado ao pedido: R$"   << fixed << setprecision(2)<< totalCompra << endl;
                            cout << "=====================================================" << endl;
                        break;
                        
                        case 3:
                            cout << "Quantos Pudims? ";
                            while(!(cin >> qntd)){
                                cout << "Entrada invalida! Digite apenas numeros: ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            }
                            valorItem = 5 * qntd;  
                            totalCompra +=  valorItem;
                            cout << "\n" << qntd << "x Pudim(s) adicionado(s)!" << endl;
                            descPedido += to_string(qntd) + "x -Pudim \n";


                            cout << "=====================================================" << endl;
                            cout << "Valor total adicionado ao pedido: R$"   << fixed << setprecision(2)<< totalCompra << endl;
                            cout << "=====================================================" << endl;
                    }
                    break;

                // ================= Finalizar =================
                case 4:
                    cout << "{=================PEDIDO FINALIZADO!=================}" << endl;
                    if (totalCompra > 50){
                        cout << "PARABENS! Voce passou de R$50,00 na compra ganhou 10% de desconto!" << endl;
                        desconto = totalCompra * 0.1;
                        totalDesconto = totalCompra - desconto;
                        cout << "\nResumo do pedido:\n" << descPedido << endl;
                        
                        cout << "O valor ficou em R$" << totalDesconto << endl;

                        cout << "{====================================================}" << endl;

                    }else{

                    
                    cout << "\n";
                    cout << "O valor total e de R$ " << fixed << setprecision(2) << totalCompra << endl;
                    cout << "\nResumo do pedido:\n" << descPedido << endl;
                    cout << "{====================================================}" << endl;
                    }

                    break;

                case 0:
                    cout << "Finalizando pedido...\n";
                    break;

                default:
                    cout << "Opcao invalida! Tente novamente.\n";
            }

        } while (escolhaCateg != 4 && escolhaCateg != 0);

    } else {
        cout << "Voce escolheu nao fazer o pedido\n";
    }

    return 0;
}
