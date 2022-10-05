#include <iostream>
#include <string>

using namespace std;


int binario() {
	int num, count = 0, digito[100];
	cout << "Introduzca un numero: "; cin >> num;

	for (int i = 0; num > 0; i++) {
		digito[i] = num % 2;
		num = num / 2;
		count++;
	}
	cout << "El numero binario es: " ;
	for (int j = count - 1; j >= 0; j--) {
		cout << digito[j];
	}
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

int binario_decimal() {
	int numero, digito, posicion = 0, resultado = 0;
	int vector[] = {1,2,4,8,16,32,64,128,256};

	cout << "Ingrese el numero a convertir : ";cin >> numero;
	while (numero > 0) {
		digito = numero % 10;
		if (digito == 1) {
			resultado = resultado + vector [posicion];
		}
		posicion++;
		numero = numero / 10;
	}
	cout << "El resultado es: " << resultado << endl;
	return 0;
}


void hexadecimal_decimal() {
	char num[20];
	int i, r, len, hexadecimal = 0;
	cout << "Escribe el numero hexadecimal: ";
	cin >> num;
	len = strlen(num);
	for (i = 0; num[i] != '\0'; i++)
	{
		len--;
		if (num[i] >= '0' && num[i] <= '9')
			r = num[i] - 48;
		else if (num[i] >= 'a' && num[i] <= 'f')
			r = num[i] - 87;
		else if (num[i] >= 'A' && num[i] <= 'F')
			r = num[i] - 55;
		hexadecimal += r * pow(16, len);
	}
	cout << "El numero en decimal es: " << hexadecimal << endl;
	return;
}


void binario_hexadecimal() {
	int hexa[100];
	int m = 1, dno = 0, bino;
	cout << "Ingresa el numero binario: "; cin >> bino;

	while (bino > 0) {
		dno = dno + (bino % 2) *m;
		m = m * 2;
		bino = bino / 10;
	}
	m = 0;
	while (dno!=0) {
		hexa[m] = dno % 16;
		dno = dno / 16;
		m++;
	}

	cout << "El valor hexadecimal es: ";

	for (int k = m - 1; k >= 0;k--) {
		if (hexa[k]>9) {
			cout << (char)(hexa[k]+55);
		}
		else {
			cout << hexa[k];
		}
	}
	cout << endl;
}

int hexadecimal_binario() {
	char hexa[100];
	int i = 0;

	cout << "Introduce el numero Hexadecimal: "; cin >> hexa;

	cout << "El numero Binario es: " << endl;

	while (hexa[i]) {
		switch (hexa[i]) {
			case '0': cout << "0000";break;
			case '1': cout << "0001";break;
			case '2': cout << "0010";break;
			case '3': cout << "0011";break;
			case '4': cout << "0100";break;
			case '5': cout << "0101";break;
			case '6': cout << "0110";break;
			case '7': cout << "0111";break;
			case '8': cout << "1000";break;
			case '9': cout << "1001";break;
			case 'A': cout << "1010";break;
			case 'B': cout << "1011";break;
			case 'C': cout << "1100";break;
			case 'D': cout << "1101";break;
			case 'E': cout << "1110";break;
			case 'F': cout << "1111";break;

			default: cout << "Numero invalido";
				hexa[i];
				return 0;
		}
		i++;
	}	
	return 0;
}



int main() {
	int opcion;

	do {
		cout << "Que quieres hacer? \n";
		cout << "--------------------------------- \n";
		cout << " 1 - Convertir decimal a binario \n";
		cout << " 2 - Convertir decimal a hexadecimal \n";
		cout << " 3 - Convertir de binario a decimal \n";
		cout << " 4 - Convertir hexadecimal a decimal \n";
		cout << " 5 - Convertir binario a hexadecimal \n";
		cout << " 6 - Convertir hexadecimal a binario \n";
		cout << " 7 - Salir \n";
		cout << "---------------------------------- \n";
		cout << "Opcion: "; cin >> opcion;


		switch (opcion) {
		case 1: 
			binario();
			cout << "\n---------------------------------------- \n";
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
			binario_decimal();
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

		case 4: 
			hexadecimal_decimal();
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

		case 5:
			binario_hexadecimal();
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

		case 6:
			hexadecimal_binario();
			cout << "\n---------------------------------------- \n";
			cout << "\nQuiere regresar al menu? Si = 1 No = 2 \n";
			cout << "Opcion: "; cin >> opcion;
			cout << "---------------------------------------- \n";
			if (opcion == 1) {
				break;
			}
			else {
				return 0;
			}

		case 7:
			break;
		}
	} while (opcion != 8);
	cout << "Opcion no valida";
}