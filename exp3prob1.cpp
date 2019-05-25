#include<iostream>
using namespace std;
main(){
	int array[10];
	double total = 0;
	double average = 0;
	
	cout<<"Please enter 10 integers: "<<endl;
	for(int a = 0; a < 10; a++){
		cin>>array[a];
		total += array[a];
		average = total / 10;
	}
	int max = array[0];
	for(int b; b < 10; b++){
		if(max < array[b])
		max = array[b];
	}
	int min = array[0];
	for(int c; c < 10; c++){
		if(min > array[c])
		min = array[c];
	}
	cout<<"The smallest integer is "<<min<<endl;
	cout<<"The largest integer is "<<max<<endl;
	cout<<"Total sum of the elements is "<<total<<endl;
	cout<<"The average of the elements is "<<average<<endl;
}
