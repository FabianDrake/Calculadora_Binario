#include <iostream>

using namespace std;


int binario() {
	int decimal;
	int binario[20];

	cout << "Ingresa el numero a convertir: "; cin >> decimal;

	for (int i = 0; i < 8; i++) {
		binario[i] = decimal % 2;
		decimal /= 2;
	}
	
	cout << "El Binario es: ";

	for (int i = 7; i >= 0; i--) {
		cout << binario[i];
	}

	cout << endl;
	return 0;
}

int hexadecimal() {
	int digito[20];
	int decimal, residuo, resultado, i = 0;

	cout << "Introduce el numero a convertir: "; cin >> decimal;
	do {
		residuo = decimal % 16;
		resultado = decimal / 16;
		digito[i] = residuo;
		decimal = resultado;
		i++;
	} while (resultado > 15);

	digito[i] = resultado;

	cout << "El Hexadecimal es: ";

	for (int j = i; j >= 0; j--) {
		if (digito[j] == 10) {
			cout << "A";
		}
		else if (digito[j] == 11) {
			cout << "B";
		}
		else if (digito[j] == 12) {
			cout << "C";
		}
		else if (digito[j] == 13) {
			cout << "D";
		}
		else if (digito[j] == 14) {
			cout << "E";
		}
		else if (digito[j] == 15) {
			cout << "F";
		}
		else {
			cout << digito[j];
		}
	}
	cout << endl;
	return 0;	
}


int main() {
	int opcion;

	do {
		cout << "Que quieres hacer? \n";
		cout << "--------------------------------- \n";
		cout << "1 - Convertir a binario \n";
		cout << "2 - Convertir a hexadecimal \n";
		cout << "3 - Salir del programa \n";
		cout << "---------------------------------- \n";
		cout << "Opcion: "; cin >> opcion;


		switch (opcion) {
		case 1: 
			binario();
			cout << "---------------------------------------- \n";
			cout << "\nQuiere regresar al menu? Si = 1 No = 2 \n";
			cout << "Opcion: "; cin >> opcion;
			cout << "---------------------------------------- \n";
			if (opcion == 1) {
				break;
			}
			else {
				return 0;
			}

		case 2:
			hexadecimal();
			cout << "---------------------------------------- \n";
			cout << "\nQuiere regresar al menu? Si = 1 No = 2 \n";
			cout << "Opcion: "; cin >> opcion;
			cout << "---------------------------------------- \n";
			if (opcion == 1) {
				break;
			}
			else {
				return 0;
			}

		case 3:
			break;
		}
	} while (opcion != 4);
	cout << "Opcion no valida";
}