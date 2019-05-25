#include<iostream>
using namespace std;
main(){
	double tempA[7];
	double tempB[7];
	double tempC[7];
	
	//Province A
	cout<<"Enter temperature for: "<<endl;
	for(int a = 0; a < 7; a++){
		cout<<"Province A, Day "<<a+1<<": ";
		cin>>tempA[a];
	}
	//Province B
	for(int a = 0; a < 7; a++){
		cout<<"Province B, Day "<<a+1<<": ";
		cin>>tempB[a];
	}
	//Province C
	for(int a = 0; a < 7; a++){
		cout<<"Province C, Day "<<a+1<<": ";
		cin>>tempC[a];
	}
	cout<<endl;
	//Display
	cout<<"Displaying Values: "<<endl;
	for(int a = 0; a < 7; a++){
		cout<<"Province A, Day "<<a+1<<"= "<<tempA[a]<<endl;
	}
	for(int a = 0; a < 7; a++){
		cout<<"Province B, Day "<<a+1<<"= "<<tempB[a]<<endl;
	}
	for(int a = 0; a < 7; a++){
		cout<<"Province C, Day "<<a+1<<"= "<<tempC[a]<<end;
	}
}
