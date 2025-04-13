#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	   cout<<("SOMA DE NUMEROS INTEIROS:\n"); 
	
	   int num1, num2, res;
	   
	   cout<<("DIGITE UM NUMERO: "); 
	   cin>>(num1); 
	   cout<<("DIGITE OUTRO NUMERO: ");
	   cin>>(num2);
	   
	   res=(num1+num2);
	   
	   cout<<("RESULTADO: ") << res << endl;	   
	   cout<<("\n");
	   cout<<("FIM DO PROGRAMA.\n");
   
   
   system("pause");
	return 0;
}


