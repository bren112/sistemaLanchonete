#include <iostream>
using namespace std;
#include <string>

int main() {
    double totalPedido; 
    int comeco, escolhaCateg, escolhaProd, qntd;
    string nome, descPedido;


    cout << "\n{=======Bem Vindo ao Cardapio, deseja fazer o pedido?=======}" << endl;
    cout << "\nDigite '1' para Confirmar\nQualquer outro numero para Sair: ";
    cin >> comeco;

    if (comeco == 1) {
        cout << "\n{======Voce entrou no cardapio!======}" << endl;
        cin.ignore(); 
        cout << "Digite seu nome: ";
        getline(cin, nome);
        cout << "\nOla " << nome << "!" << endl;

        do {
            cout << "\n{=================== MENU ===================}" << endl;
            cout << "\nPara sair Digite: 0" << endl;
            cout << "O que voce deseja pedir? " << endl;
            cout << "\nDigite qual categoria voce deseja: \n1) Lanches \n2) Bebidas\n3) Doces\n \n" << endl;
            cout << "Sua escolha: ";
            cin >> escolhaCateg;
            cout << "\n"; 


            switch (escolhaCateg) {
                case 1:
                    cout << "Digite 0 para voltar para o Menu\n";
                    cout << "\n" << nome <<  " Qual lanche voce quer? \n  \n1)Hamburguer - R$10,00 \n2)Cheeseburguer - R$12,00 \n3)X-Bacon - R$15,00" <<endl;
                    cout << "Escolha pelo numero do lanche: " ;
                    cin >> escolhaProd;

                        switch (escolhaProd){
                            case 0 :
                                    cout << "Voltando... \n"; 
                                    break;

                            case 1 :
                                    cout << "\nQuantos hamburguers? ";
                                    cin >> qntd;
                                    totalPedido += (10 * qntd);
                                    cout << "\n";
                                    
                                    cout << "=====================================================" << endl;
                                    cout << "Valor total do Pedido: ";
                                    cout << "R$" << totalPedido << endl;
                                    cout << "=====================================================" << endl;


                                    cout << "\nSeu pedido: " << endl;
                                    descPedido += to_string(qntd)+"x" + " -Hamburguer R$" + to_string(10 * qntd) + "\n";
                                    cout << "\n"; 
                                    cin.ignore(); 
                                    cout << descPedido;
                                    cout << "\n=====================================================" << endl;

                            break;
                            
                            case 2 : 
                                    cout << "\nQuantos Cheeseburguers? ";
                                    cin >> qntd;
                                    totalPedido  += (qntd * 12);
                                    cout << "\n";
                                    
                                    cout << "=====================================================" << endl;
                                    cout << "Valor total do Pedido: ";
                                    cout << "R$" << totalPedido << endl;
                        
                                    cout << "=====================================================" << endl;
                                    cout << "\nSeu pedido: " << endl;
                                    descPedido += to_string(qntd)+"x" + " -Cheeseburguer R$" + to_string(12 * qntd) + "\n";
                                    cout << "\n";
                                    cin.ignore(); 
                                    cout << descPedido;
                                    cout << "\n=====================================================" << endl;

                            break;

                            case 3 :
                                 
                                  cout << "\nQuantos X-Bacons?" << endl;
                                  totalPedido += 15;
                                  cout << "\n";
                                  cout << "=====================================================" << endl;

                                  cout << "=====================================================" << endl;
                                  cout << "Valor total do Pedido: ";
                                  cout << "R$" << totalPedido << endl;
                                  

                                  cout << "=====================================================" << endl;
                                  cout << "\nSeu pedido: " << endl;
                                  descPedido += "-X-Bacon -R$15,00 \n";
                                  cout << "\n";
                                  cin.ignore();
                                  cout << descPedido;
                                  cout << "\n=====================================================" << endl;

                                  default: 
                                  cout << "\nEscolha uma opcao valida!." << endl;
                                  break;

                        }                            
                break;  
                         
                          
                case 2:
                    cout << "\n" << nome <<  " Qual Bebida voce quer? \n \n1)Refrigerante - R$5,00 \n2)Suco - R$7,00 \n3)Agua - R$3,00" <<endl;
                    cout << "Escolha pelo numero do da Bebida: " ;
                    cin >> escolhaProd;
                
                        switch(escolhaProd){
                            case 1:{
                                cout << "\nRefrigerante adicionado ao carrinho com sucesso!" << endl;
                                totalPedido += 5;
                                cout << "\n";

                                cout << "=====================================================" << endl;
                                cout << "Valor total do Pedido: ";
                                cout << "R$" << totalPedido << endl;
                                
                                
                                cout << "=====================================================" << endl;
                                cout << "\nSeu pedido: " << endl;
                                descPedido += "-Refrigerante -R$5,00 \n";
                                cout << "\n";
                                cin.ignore();
                                cout << descPedido;
                                cout << "\n=====================================================" << endl;

                                break;
                            }
                            case 2:{
                                cout << "\nSuco adicionado ao carrinho com sucesso!" << endl;
                                totalPedido += 7;
                                cout << "\n";
                                
                                cout << "=====================================================" << endl;
                                cout << "Valor total do Pedido: ";
                                cout << "R$" << totalPedido << endl;
                              
                                

                                cout << "=====================================================" << endl;
                                cout << "\nSeu pedido: " << endl;
                                descPedido += "-Suco -R$7,00 \n";
                                cout << "\n";
                                cin.ignore();
                                cout << descPedido;
                                cout << "\n=====================================================" << endl;

                                break;
                            }
                            case 3:{
                                cout << "\nAgua adicionada ao carrinho com sucesso!" << endl;
                                totalPedido += 3;
                                cout << "\n";

                                cout << "=====================================================" << endl;
                                cout << "Valor Total do Pedido: ";
                                cout << "R$" << totalPedido << endl;

                                cout << "=====================================================" << endl;
                                cout << "\nSeu pedido: " << endl;
                                cout << "\n";
                                descPedido += "-Agua -R$3,00\n";
                                cin.ignore();
                                cout << descPedido;
                                cout << "\n=====================================================" << endl;

                                break;
                            }
                            default: 
                            cout << "\nEscolha uma opcao valida!." << endl;
                            break;

                        }

                    break;

                case 3: {
                    cout << "\n" << nome <<  " Qual opce voce quer? \n \n1)Sorvete - R$8,00 \n2)Bolo - R$6,00 \n3)Pudim - R$5,00" <<endl;
                    cout << "Escolha pelo numero do da Bebida: " ;
                    cin >> escolhaProd;

                    switch(escolhaProd){
                        case 1:
                            cout << "sorvete";
                            break;

                        case 2:
                            cout << "bolo";
                            break;
                        
                        case 3:
                            cout << "pudim";
                            break;
                            
                        
                    }

                }

                case 0:
                    cout << "Finalizando pedido...\n";
                    break;

                default:
                    cout << "opcao invalida! Tente novamente.\n";
            }

        } while (escolhaCateg != 4);

    } else {
        cout << "vc escolheu n fazer o pedido\n";
    }

    return 0;
}
