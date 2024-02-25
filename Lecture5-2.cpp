#include<iostream>
using namespace std;
int main(){
	 int x; // variable name x of type int --> It can store only one value at a time, this is where arrays come into place
	 
	 //Arrays can be used to store multiple values in a single variable
	 int a[5]; // this means it is an array of name a which can store 5 data items of int type
	   //Note: The indexing of array starts from 0 to 4 for this case
	    
	   //elements starting from 0-4
	   //the first element will have an index 0--> a[0] 
	   //the second element will have an index 1--> a[1] 
	   //and goes till a[4]
	   
	   int f,b,c,d,e;
	   cout<<"Give 5 int as input"<<endl;
	   cin>>f>>b>>c>>d>>e;
	   
	   cout<<"reverse order is: ";
	   cout<<e<<d<<c<<b<<f;
	return 0;
}
