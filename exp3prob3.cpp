#include<iostream>
using namespace std;
main(){
	char array[50];
	int size;
	cout<<"Enter array size: ";
	cin>>size;
	
	cout<<"Input characters: "<<endl;
	for(int a = 0; a < size; a++){
		cin>>array[a];
	}
	//sorting
	char temp;
	for(int a = 0; a < size; a++){
		for(int b = a + 1; b < size; b++){
			if(array[a] < array[b]){
				temp = array[a];
				array[a] = array[b];
				array[b] = temp;	
			}
		}
	}
	//printing reverse
	for(int a = size-1; a >= 0; a--){
		cout<<"'"<<array[a]<<"', ";
	}
	cout<<sizeof(array);
}
