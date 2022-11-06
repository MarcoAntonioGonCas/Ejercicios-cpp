#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;





template <typename T> void mostrarVec(vector<T> vec){
	cout<<"[";
	for(int i = 0;i < vec.size(); i++){
		cout<<vec[i];
		
		if(i < vec.size()-1){
			cout<<" , ";
		}
	} 
	cout<<"]"<<endl;
}

int* moda(vector<int>& vec){
	int con;
	int conAnt = 0;
	int* num = NULL;
	
	for(int i = 0; i < vec.size(); i++ ){
		con = 0;
		for(int j = 0; j< vec.size(); j++){
			
			if(vec[i] == vec[j] and i != j){
				con++;
			}
		}
		if(con >= conAnt){
			conAnt = con;

			*num = vec[i]; 
		}
	}
	
	cout<<num<<endl;
	return num;
}

int main(){
	
	
	
	vector<int> vec {1,1,2,3,4,5};
	mostrarVec<int>(vec);
	
	 moda(vec);
	
	
	//cout<<endl<<mo<<endl<<endl;
	
	
	for_each(vec.begin(),vec.end(),
			 [&](int item){
			 	std::cout<<item<<endl;
			 }
	);
	return 0;
}