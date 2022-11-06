#include <iostream>


/*
Escriba, compile y ejecute un programa en C++ que convierta la temperatura en
grados Celsius a grados Fahrenheit, Kelvin y Rankime, se debe leer la
temperatura en grados Celsius y validar que no puede ser menor de -273.
Aplique las siguientes fórmulas: 
°K = °C + 273, 
°F = 9/5 * °C + 32 
°R = °F + 460.
 Se debe imprimir la temperatura en cada escala.
Celsius a grados Fahrenheit, Kelvin y Rankime.
*/
using namespace std;

enum TipoGrado {
	Celsius = 1,
	Fahrenheit,
	Kelvin,
	Rankime
};


double celsius(double grado,TipoGrado tipoGradoRecibido);
double fahrenheit(double g,TipoGrado tipo);
double kelvin(double g,TipoGrado tipo);
double rankine(double g,TipoGrado tipo);

int main(){
	
	cout<<"1.- Celsius"<<endl;
	cout<<"2.- Fahrenheit"<<endl;
	cout<<"3.- Kelvin"<<endl;
	cout<<"4.- Rankime"<<endl;
	
	double g;
	double tipo;
	for(int i=0;i<5;i++){
		
		cin>>g;
		cin>>tipo;
		cout<<endl<<(kelvin(g,static_cast<TipoGrado>(tipo)))<<endl<<endl;
	}
	
}


double fahrenheit(double g,TipoGrado tipo){
	double f=0;
	
	if(tipo == Celsius){
		
		//9/5 * grado  + 32 
		//(grado * 9/5) + 32 = 32 °F
		//hacemos las operaciones inversar
		f = ((g * 9)/5) + 32;
		
	}else if(tipo == Kelvin){
		
		//convertimos a centigrados 
		//posterior convertido a fahrenheit
		//°K = °C + 273, 
		//c = k -273
		f = celsius(g,Kelvin);
		
		f = fahrenheit(f,Celsius);
		
	}else if(tipo == Rankime){
		//°R = °F + 460.
		
		f = g - 460;
	}
	
	return f;
}
double celsius(double grado,TipoGrado tipoGradoRecibido){
	double gCelsius = 0;
	
	
	if(tipoGradoRecibido == Fahrenheit){
		
		//9/5 *grado  + 32 
		//(grado * 9/5) + 32 = 32 °F
		gCelsius = ((grado - 32 ) * 5) / 9;
		
	}else if(tipoGradoRecibido == Kelvin){
		
		//°K = °C + 273, 
		// -- c = K - 273
		gCelsius = grado - 273.15f;
		
	}else if(tipoGradoRecibido == Rankime){
		//°R = °F + 460.
		// f = k -460
		// 
		//obtenemos la operacion inversa 
		//obtenmos los farenheit
		//despues convertimos a celsius
		gCelsius = celsius(fahrenheit(grado,Rankime),Fahrenheit) ; 
		
		gCelsius =  ((g - 400) - 32 ) * 5) / 9
	}
	return gCelsius;
	
}
double kelvin(double g,TipoGrado tipo){
	
	double k=0;
	
	if(tipo == Celsius){
		//k = c° + 237.
		k = g + 273.15f;
		
	}else if(tipo == Fahrenheit){
		//9/5 *grado  + 32 
		//(grado * 9/5) + 32 = 32 °F
		//convertimos a celsius
		//para despues convertir a kelvin
		
		//k = c° + 237.
		k = celsius(g,Fahrenheit);
	
		k = kelvin(k,Celsius);
	
	}else if(tipo == Rankime){
		//°R = °F + 460.
		//f = r - 400
		//k = c° + 237.
		
		k = fahrenheit(g,Rankime);
		k = kelvin(k,Fahrenheit);
	}else {
		k = g;
	}
	return k;
	
}

double rankine(double g,TipoGrado tipo){
	double r=0;
	
	if(tipo == Celsius){
		//°R = °F + 460.
		r = fahrenheit(g,celsius());
		r =   r + 460;
		
	}else if(tipo == Fahrenheit){
		//°R = °F + 460.
		r = g + 460;
		
		
	}else if(tipo == Kelvin){
		//°R = °F + 460.
		r = fahrenheit(g,Kelvin);
		r = r + 460;
		
	}else{
		r = g;
	}
	
	return r;
	
	
}