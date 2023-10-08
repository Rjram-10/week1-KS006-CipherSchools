#include<iostream>
using namespace std;

int main(){
	int a,b;
	int c,d;
	
	cout<<"Input 4 integers a,b,c,d"<<endl;
	
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	// statement : a>b
	cout<<(a>b && c>d);
	cout<<endl;
	cout<<(a>b || c>d);
	
	//c++ interprets true as 1 , false as 0
	return 0;
}
