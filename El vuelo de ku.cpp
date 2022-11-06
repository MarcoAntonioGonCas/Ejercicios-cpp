#include <iostream>


//https://omegaup.com/arena/problem/El-Vuelo-de-Ku/
/*
Descripción
En verano las águilas tienden a volar en circulos ya que esto les
permite mantenerse a una misma altura sin la necesidad de gastar
mucha energia.

Actualmente un conjunto de  águilas se encuentra volando en circulos,
sin embargo, cada cierto tiempo deciden rotarse  posiciones.

Ku, al ser un Lider Transformador por estudiar en la UPAEP, le dice
a las demas aguilas un numero  de veces que tienen que rotar, el número
de posiciones y hacia que dirección.

Ayuda a Ku a saber cual seria la formación de las aguilas tras todas
las rotaciones.
*/
using namespace std;

void imprime(int* arr,int size){
	
	for(int i=0;i<size;i++){
		cout<<arr[i];
		if(i!=size-1){
			cout<<" ";
		}
	}
	cout<<endl;
	
}
void rotar(int* arr,int size,int rotaciones);
int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  // TODO: fixme.
  int* aguilas;
  int canAguilas;
  int canRotar;
  int posRotar;
  
  //
  string aux;
  
  /*
  cout<<"Ingresa el numero de aguilas: ";
  fflush(stdin);
  cin>>canAguilas;
  cout<<"Ingresa las veces que deben rotar: ";
  cin>>canRotar;
  fflush(stdin);
  aguilas = new int[canAguilas];
  */
  /*
  for(int i=0;i<canAguilas;i++){
  	cout<<i+1<<".- Ingresa el identificador del aguila: ";
  	fflush(stdin);
  	cin>>aguilas[i];
  	fflush(stdin);
  }
  cout<<"Ingresa las posiciones a rotar: ";
  cin>>posRotar;
  */
  
 	posRotar = posRotar * canRotar;
  rotar(aguilas,canAguilas,posRotar);
  imprime(aguilas,canAguilas);
  return 0;
}

void rotar(int* arr,int size,int rotaciones){
	
	
	
	
	int temp=0;
	imprime(arr,size);
	if(rotaciones>0){
		for(int r = 0; r < rotaciones; r++){
			temp = arr[size-1];
			for(int i=size-1 ; i>0 ; i--){
				arr[i]= arr[i-1];
				
				//imprime(arr,size);
				
			}
			
			arr[0] = temp;
			//imprime(arr,size);
		}
	}else if(rotaciones<0){
		for(int r = 0; r > rotaciones; r--){
			temp = arr[0];
			for(int i=1;i<size;i++){
				arr[i-1]= arr[i];
			}
			
			arr[size-1] = temp;
			//imprime(arr,size);
		}
	}
	
	
}
