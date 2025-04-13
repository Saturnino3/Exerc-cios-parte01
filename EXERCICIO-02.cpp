#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
     float nota1, nota2, nota3;
	 int somar, dividir, res;
     
     cout<<("PRIMEIRA NOTA: ");
     cin>>(nota1); cout<<("\n");
     cout<<("SEGUNDA NOTA: ");
     cin>>(nota2); cout<<("\n");
     cout<<("TERCEIRA NOTA: ");
     cin>>(nota3); cout<<("\n");
     
      somar=(nota1+nota2+nota3);
      dividir=(somar/3);
      
      cout<<("RESULTADO DA SOMA: ") << somar;
      cout<<("\n");
      cout<<("\n");
      
      res=(dividir);
	  cout<<("RESULTADO DA DIVISAO: ") << res;
	  cout<<("\n");      
      
      
    
   
   system("pause");
	return 0;
}
