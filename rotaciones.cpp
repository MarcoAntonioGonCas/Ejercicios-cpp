#include <iostream>


using namespace std;


void imprimiar(int* arr,int size){
	
	cout<<"[";
	for(int i=0;i<size;i++){
		
		cout<<*(arr+i);
		
		if(i != size-1){
			cout<<" ";
		}
	}
	cout<<"]"<<endl;
}
void insertiontSort(int* arr,int size){
	int posA,aux,dato;
	
	
	for(int i=0; i<size; i++){
		posA = i;
		dato = arr[i];
		
		
		
		while(posA>0 && arr[posA-1] > dato ){
			arr[posA] = arr[posA-1];
			//aux =arr[posA];
			//arr[posA] = arr[posA-1];
			//arr[posA-1] = aux;
			posA--; 
		}
		
		//aux = arr[i];
		//arr[i] = arr[posA];
		//arr[posA] = aux;
		
		cout<<posA<<" "<<i<<endl;
		arr[posA] = dato;
		
		imprimiar(arr,size);
		
	}
	
}
void rotarDer(int* arr,int size){
	int temp,aux;
	temp = arr[size-1];
	
	int vueltas =0;
	/*
	for(int i=size-2 ; i >=0; i--){
		arr[i+1] = arr[i];
		
		vueltas++;
	}
	*/
	
	
	for(int i=size-1; i>0 ; i--){
		arr[i-1] = arr[i];
		vueltas++;
	}
	
	
	cout<<"Total de vueltas "<<vueltas<<endl;
	arr[0] = temp;
}

int main(){
	int* arr = new int[4]{4,3,2,1};
	insertiontSort(arr,4);
	
	
	// de -10 a 0
	for(int i = -10; i <= 0; i++){
		cout<<i<<endl;
	}
	cout<<endl;
	
	//de 0 a -10
	for(int i = 0; i >= -10;i-- ){
		cout<<i<<endl;
	}
	cout<<endl;
	
	//de 10 a 0;
	for(int i=10;i>=0;i--){
		cout<<i<<endl;
	}
	cout<<endl;
	
	//de 0 a 10
	for(int i= 0;i<=10;i++){
		cout<<i<<endl;
	}
	
	
	rotarDer(arr,4);
	
	imprimiar(arr,4);
	
	return 0;
}