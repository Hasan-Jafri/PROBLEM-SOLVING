#include <bits/stdc++.h>
#include<iostream>
using namespace std;


/*

This Program Finds out the length of the longest sub array in the given array that contains elements whose differences
never exceed 1.

*/


vector<int> sort_array(vector<int> a){
	
	for(int i = 0;i<a.size() - 1;i++){
		for(int j = 0;j < a.size() - i -1;j++ ){
			
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	return a;
	
}
int pickingNumbers(vector<int> a) {
	a = sort_array(a);
    int result = 0;
    int start = 0;
    int end = start;
    int counter = 0;
	while(start != a.size()){
        
        
            
            if((abs(a[end] - a[start])<=1)){
                end++;
				counter++; 
            }
            else{
			
            	 if(counter > result){
            		result = counter;
            		
       		 	}
       		 	start++;
            	end = start;
            	counter = 0;
		}
        
       
        
    }
    return result;
}


int main(){
	int size;
	vector<int> arr;
	
	
	cout<<"Enter the size for the sequence: ";
	cin>>size;
	int element;
	for(int i = 0;i<size;i++){
		cin>>element;
		arr.push_back(element);
	}
	
	arr = sort_array(arr);
	cout<<"Maximum Sequence Size: "<<pickingNumbers(arr);
	
	return 0;
}