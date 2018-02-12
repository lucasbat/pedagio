/*

Programa em c++ que simula as transações de um pedágio. Programa apresenta o seguinte menu.

1. registrar
2. cancelar
3. fechar caixa
4. sair

onde:

1.Registrar-> quando o usuário escolher essa opção o sistema deverá perguntar o tipo do automóvel(carro ou caminhão).
Para um carro, deverá ser registrado o valor de R$2,50 e para um caminhão, o valor de R$4,00 como tarifa de passagem.
Esse valor deverá ser acumulado para a impressão durante o fechamento do caixa.

2.Cancelar-> selecionado essa opção, o último valor registrado deverá se cancelado e diminuido da soma total.

3.Fechar caixa-> o caixa do dia deverá ser fechado e deverá ser impresso:
a)o valor total do caixa.
b)a quantidade total de veículos registrados nesse caixa.
c)a quantidade de carros e de caminhões que passaram no pedágio durante o período desse caixa.

Obs: ao se fechar um caixa, outro deverá ser imediatamente aberto.

4.Sair-> o programa deverá ser finalizado, mas antes de ser fechado deverão ser apresentados os seguintes dados:
a) o total de carros registrados em todos os caixas.
b) o valor total de todos os caixas.

*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){


	int car=0, tcar=0, cam=0, tcam=0, veic, menu;


	cout<<"\n1 = REGISTRAR || 2 = CANCELAR || 3 = FECHAR || 4 = SAIR  ";
	cin>>menu;


	while(menu!=4){

			while(menu==1){


				do{
					system("clear");

					cout<<"\n\n1 = CARRO || 2 = CAMINHÃO || 3 = FECHAR || 4 = CANCELAR CARRO || 5 = CANCELAR CAMINHÃO  ";
					cin>>veic;

					if(veic==1)
						car=car+1;
					else
						if(veic==2)
							cam=cam+1;
						else
							if(veic==4)
								car=car-1;
							else
								if(veic==5)
									cam=cam-1;



				}while(veic!=3);

			//para somar os caixas

			tcar=tcar+car;
			tcam=tcam+cam;

			//imprimir os resultados

			cout<<"Valor total do caixa: RS "<<tcar*2.50+tcam*4;
			cout<<"\n\nQuantidade total de veículos registrados nesse caixa: "<<tcar+tcam;
			cout<<"\n\nQuantidade de carros: "<<tcar;
			cout<<"\n\nQuantidade de caminhões: "<<tcam;

			}
	}


return 0;
}
