#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	 
	 cout<<("CALCULANDO A AREA DE UM QUADRADO");
	 cout<<("\n");
	 cout<<("\n");
	 
	 int area;
	 float lado1,  multiplicacao;
	 
	 cout<<("DIGITE QUALQUER NUMERO PARA REPRESENTAR UM LADO DE UM QUDRADO:  ");
	 cin>>(lado1);
	 cout<<("\n");
	 
	 multiplicacao=(lado1*lado1);
	 
	  cout<<("RESULTADO DA MULTIPLICACAO: ") << multiplicacao << endl;
	  
	  area=(multiplicacao);
	  
	 cout<<("\n");
	 cout<<("RESULTADO DO CALCULO DA AREA: ") << area << endl;
	 cout<<("\n");
	
	 cout<<("Resultado geral:") << area << endl;
	 cout<<("\n");
	 cout<<("FIM DO PROGRAMA!");
	 cout<<("\n");
	   
     
   
   system("pause");
	return 0;
}

