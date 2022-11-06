#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int* num;
	int can;
	int op;
	string str;

	cin >> can;
	num = new int[can];
	getline(cin, str, '\n');

	char* token = strtok(strdup(str.c_str()), " ");

	
	int i = 0;
	while (i<can)
	{
		
		num[i] = atoi(token);
		i++;
		
		if(token!=NULL)
			token = strtok(NULL, " ");
		
	}
	fflush(stdin);
	cin >> op;


	for (int i = 0; i < can; i++) {
		if (op == 1 && num[i] % 2 != 0) {
			cout << num[i] << " ";
		}
		//pares
		else if (op == 0 && num[i] % 2==0) {
			cout << num[i] << " ";
		}
	}


	return 0;
}
