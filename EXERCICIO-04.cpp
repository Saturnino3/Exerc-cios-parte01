#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	 cout<<("CALCULANDO A AREA DE UM TERRENO:");
	 cout<<("\n");
	 cout<<("\n");
	 
	int largura, comprimento;
	float area, conta;
	
	
	cout<<("largura:");
    cin>>(largura);
	cout<<("comprimento:");
	cin>>(comprimento);
	
   conta=(largura*comprimento);
    
   area=(conta);    
   cout<<("\n");
	 
    cout<<("AREA DO TERRENO:") << area << endl;
    
    cout<<("FIM DO PROGRAMA!");
    cout<<("\n");
    cout<<("\n");
	 
   
   system("pause");
	return 0;
}
