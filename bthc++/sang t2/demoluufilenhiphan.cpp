#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	ofstream fo;
	fo.open("demonnp.txt",ios::out|ios::binary);
	string data="chuc ca lop thi tot ";
	fo.write((char*)&data,sizeof(data));
	fo.close();
	
	cout<<"doc file nhi phan ";
	string data1;
	ifstream f1;
	f1.open("demonp.txt",ios::in|ios::binary);
	f1.read((char*)&data1,sizeof(data1));
	f1.close();
	cout<<data1;
	return 0;
}
