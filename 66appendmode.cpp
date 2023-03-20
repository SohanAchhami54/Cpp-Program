#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;

	char ch;
	file.open("Achhami.txt",ios::app);
	if(file){
		file<<"welcome to c++ class\n";
		file.close();
	}
}

