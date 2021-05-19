#include <iostream>
#include <locale>
using namespace std;

int main()
{
    char aux;
    string nome;
    float valori, valconv, valtax, valfinal;
    int ori, dest;
    

        cout << "Insira apenas o primeiro nome do cliente: ";
        cin >> nome;

            system("cls");
            cout << "Prezado (a) " << nome << "." << endl;
            cout << "Qual é a moeda de origem?" << endl;
            cout << "--------------------------" << endl;
            cout << "1 - Real (BRL)" << endl;
            cout << "2 - Dólar (USD)" << endl;
            cout << "3 - Euro (EUR)" << endl;
            cout << "4 - Libra (GBP)" << endl;
            cout << "--------------------------" << endl;
            cin >> ori;

            if (ori < 1 or ori > 4) {
                system("cls");
                cout << "Moeda não encontrada." << endl;
                cout << "[Digite qualquer tecla para sair]" << endl;
                system("pause");
            }

            else {
                system("cls");
                cout << "Qual é a moeda de destino?" << endl;
                cout << "--------------------------" << endl;
                cout << "1 - Real (BRL)" << endl;
                cout << "2 - Dólar (USD)" << endl;
                cout << "3 - Euro (EUR)" << endl;
                cout << "4 - Libra (GBP)" << endl;
                cout << "--------------------------" << endl;
                cin >> dest;

                if (dest < 1 or dest > 4) {
                    system("cls");
                    cout << "Moeda não encontrada." << endl;
                    cout << "[Digite qualquer tecla para voltar]" << endl;
                    system("pause");
                }
                else if (ori == dest) {
                    system("cls");
                    cout << "O cambiamento não pôde ser realizado." << endl;
                    cout << "[Digite qualquer tecla para voltar]" << endl;
                    system("pause");
                }
                else {
                    system("cls");
                    cout << "Qual o valor a ser convertido?" << endl;
                    cout << "--------------------------------" << endl;
                    cin >> valori;

                    if (ori == 1 and dest == 2) {
                        valconv = valori / 5.3;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;

                    }
                    else if (ori == 1 and dest == 3) {
                        valconv = valori / 6.5;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }
                    else if (ori == 1 and dest == 4) {
                        valconv = valori / 7.5;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }


                    else if (ori == 2 and dest == 1) {
                        valconv = valori * 5.3;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }
                    else if (ori == 2 and dest == 3) {
                        valconv = valori * 0.8;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }
                    else if (ori == 2 and dest == 4) {
                        valconv = valori * 0.7;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }


                    else if (ori == 3 and dest == 1) {
                        valconv = valori * 6.5;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }
                    else if (ori == 3 and dest == 2) {
                        valconv = valori * 0.5;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }
                    else if (ori == 3 and dest == 4) {
                        valconv = valori * 0.9;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }


                    else if (ori == 4 and dest == 1) {
                        valconv = valori * 7.5;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }
                    else if (ori == 4 and dest == 2) {
                        valconv = valori * 1.4;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }
                    else if (ori == 4 and dest == 3) {
                        valconv = valori * 1.2;
                        valtax = valconv * 0.1;
                        valfinal = valconv - valtax;
                    }

                    system("cls");
                    cout << "--------------------------------------" << endl;
                    cout << "Prezado (a) " << nome << "." << endl;
                    cout << "O valor convertido é: " << valconv << endl;
                    cout << "O valor da taxa cobrada é: " << valtax << endl;
                    cout << "O valor a ser entregue é: " << valfinal << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "[Digite qualquer tecla para sair]" << endl;
                    system("pause");

                }
            }
    return 0;
}
