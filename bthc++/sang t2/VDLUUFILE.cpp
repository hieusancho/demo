#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	fstream f;
	f.open("demofile.txt,ios::out");
	string data="du lieu he thong";
	f<<data;
	f.close();
	
	fstream f1;
	f1.open("demofile.txt,ios::in");
	string data1;
	getline(f1,data1);
	f1.close();
	cout<<data1;
	return 0;
}
