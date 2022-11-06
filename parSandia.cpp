#include <iostream>

int main() {
  
    int x;
  	std::cin >> x;
  	// std::cout << "yout num is " << x;

	if(x%2==0 && x!=2)
	{
	    std::cout << "SI";
	}else{
	   std::cout << "NO";
	}
	
	std::cout<<(5&2==0)<<std::endl;
   
}