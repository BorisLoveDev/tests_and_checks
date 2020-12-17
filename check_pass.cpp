#include <iostream>
#include <string>

using namespace std;

string pass = "Hello2020!";
string try_pass;

int main(int argc, char *argv[]){
	if (argv[1] != NULL){
		try_pass = argv[1];
	}
	else 
		cout << "Введите аргумент командной строки" << endl;

	if (try_pass == pass)
		cout << "Пароль верный" << endl;
	else 
		cout << "Неверный пароль!" << endl;

}