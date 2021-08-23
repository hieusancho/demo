#include<iostream>
using namespace std;
void doicho(int a,int b){
	int tg;
	tg=a;
	a=b;
	b=tg;
	cout<<"in a: "<<a<<endl;
	cout<<"in b: "<<b<<endl;
}
int main(){
	int a,b,tg;
	cout<<"moi nhap a: ";
	cin>>a;
	cout<<"moi nhap b: ";
	cin>>b;
	doicho(a,b);
	return 0;
}
