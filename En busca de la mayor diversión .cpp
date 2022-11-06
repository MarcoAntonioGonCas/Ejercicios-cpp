#include <iostream>
int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int n = 0, min = 1000000, sum = 0;
  short int d = 0;
  std::cin>>n;
  for(int i = 0; i < n; i++){
  	std::cin>>d; 	
  	if(d < min){
	  	min = d;
	}
	sum += d;
  }
  sum -= min;
  
  std::cout<<sum;

  return 0;
}
