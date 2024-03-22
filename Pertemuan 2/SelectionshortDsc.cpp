#include <iostream>
using namespace std;

void selectionShortAsc(int arr[], int arraySize){
	int LastmaksimumValueIndex;
	int temp;
	
	for(int i=0; i < arraySize-1; i++){
		int maksimumValue= arr[i];
		for(int j = i + 1; j< arraySize; j++){
			if(arr[j] > maksimumValue){
				maksimumValue = arr[j];
				LastmaksimumValueIndex = 1;
			}
		}
		temp = arr[i];
		arr[i] = maksimumValue;
		arr[LastmaksimumValueIndex] = temp;
		cout<<"\nIterasi ke-"<< i + 1<<": ";
		for(int i= 0; i< arraySize; i++){
			cout<<arr[i]<<" ";
		}
	}
	cout<<"\n\nData Setelah disorting: ";
	for(int i= 0; i < arraySize; i++){
		cout<<arr[i]<<" ";
	}
}


int main(){
	int arraySize;
	
	cout<<"masukan Jumlah data : "; cin >> arraySize;
	int arr[arraySize];
	cout<<"\n";
	for(int i =0; i < arraySize; i++){
		cout<<"masukan nilai data : "; cin>>arr[i];
	}
	cout<<"\nData sebelum disorting :";
	for(int i=0; i< arraySize; i++){
		cout<< arr[i]<<" ";
	}
	cout <<endl;
	selectionShortAsc(arr, arraySize);
}
