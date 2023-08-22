#include<iostream>

using namespace std;



int multiply(int arr[],int size, int x){
    int product;
    int carry = 0;
    for(int i = 0;i<size;i++){
        product = (arr[i] * x) + carry;
        arr[i] = product % 10;
        carry = product / 10;
    }
    
    while(carry){
        arr[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
    
}

void display(int arr[],int size){
    
    for(int i = size-1;i>=0;i--){
        cout<<arr[i];
    }
}


void extraLongFactorials(int n){
    int size = 1;
    int arr[1000];
    arr[0] = 1;
    for(int i = 2;i<=n;i++){
        size = multiply(arr, size, i);
    }
    display(arr,size);
}



int main(){
	int n;
	cout<<"Input: ";
	cin>>n;
	cout<<"Factorial: ";extraLongFactorials(n);
	
	
	return 0;
}