#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	 
	 float resultado, peso, altura, imc;
	 
	 cout<<("Seu altura: "); cin>>(altura);
	 cout<<("Sua peso: "); cin>>(peso);
	 cout<<("\n");
	 
	 
	 imc=(peso/(altura*altura));
	 
	 resultado=(imc);
	 
	 
	 cout<<("\n");
	 cout<<("Resultado: ") << resultado <<endl;
	 cout<<("\n");
   
   system("pause");
	return 0;
}
