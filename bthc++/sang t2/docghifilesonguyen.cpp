#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	int n,a[100];
	cout<<"moi nhap so luong phan tu: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"moi nhap so thu "<<i<<":";
		cin>>a[i];
	}
	
	cout<<"mang vua nhap la: "; 
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	
	ofstream f;
	f.open("songuyen.txt,ios::out");
	f<<n<<endl;
	for(int i=0;i<n;i++){
		f<<a[i]<<endl;
	}
	f.close();
	
	ifstream f1;
	f1.open("songuyen.txt,ios::in");
	string line;
	string m;
	cout<<"\n mang doc tu file la: ";
	for(int i=0;i<n;i++){
		getline(f1,line);
		cout<<line<<"\t";	
	}
	f1.close();
	return 0;
}
