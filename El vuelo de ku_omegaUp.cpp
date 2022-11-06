#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>

using namespace std;
void imprime(int* arr, int size) {

	for (int i = 0; i < size; i++) {
		cout << arr[i];
		if (i != size - 1) {
			cout << " ";
		}
	}
	cout << endl;

}
void rotar(int* arr, int size, int rotaciones);
int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	// TODO: fixme.
	int* aguilas;
	int canAguilas;
	int canRotar;
	int posRotar;


	string str;
	getline(cin, str, '\n');


	//
	char* ptr;
	ptr = strtok(strdup(str.c_str()), " ");

	canAguilas = atoi(ptr);

	ptr = strtok(NULL, " ");

	canRotar = atoi(ptr);


	//
	aguilas = new int[canAguilas];

	str = "";
	getline(cin, str, '\n');


	int i = 0;

	ptr = strtok(strdup(str.c_str()), " ");
	while (i < canAguilas) {

		aguilas[i] = atoi(ptr);
		ptr = strtok(NULL, " ");
		i++;
	}
	cin >> posRotar;


	


	posRotar = posRotar * canRotar;
	rotar(aguilas, canAguilas, posRotar);
	imprime(aguilas, canAguilas);
	return 0;
}

void rotar(int* arr, int size, int rotaciones) {




	int temp = 0;
	
	if (rotaciones > 0) {
		for (int r = 0; r < rotaciones; r++) {
			temp = arr[size - 1];
			for (int i = size - 1; i > 0; i--) {
				arr[i] = arr[i - 1];

			

			}

			arr[0] = temp;
			
		}
	}
	else if (rotaciones < 0) {
		for (int r = 0; r > rotaciones; r--) {
			temp = arr[0];
			for (int i = 1; i < size; i++) {
				arr[i - 1] = arr[i];
			}

			arr[size - 1] = temp;
			
		}
	}


}
