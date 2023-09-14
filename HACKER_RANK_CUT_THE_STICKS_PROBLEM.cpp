#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, 
discarding the shortest pieces until there are none left. At each iteration you will determine the length of the 
shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length. 
When all the remaining sticks are the same length, they cannot be shortened so discard them.Given the lengths of n sticks, print 
the number of sticks that are left before each iteration until there are none left.
*/


vector<int> sort(vector<int> arr){
    
    for(int i = 0;i<arr.size()-1;i++){
        
        bool sorted = true;
        for(int j = 0;j<arr.size()-i-1;j++){
            
            if(arr[j] > arr[j+1]){
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted = false;
            }
            
        }
        
        if(sorted == true){
            break;
        }
    
    }
    return arr;
    
}

void display(vector<int> arr){
    
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
}
vector<int> cutTheSticks(vector<int> arr) {
    vector<int> count;
    int counter;
    int min;
    arr = sort(arr);
    bool end;
    while(arr.size() > 0){
        counter = 0;
        min = arr[0];
        for(int i = 0;i<arr.size();i++){
            if(arr[i] > 0){
                arr[i] = arr[i]-min;
                counter++;
            }
        }
        arr.erase(remove_if(arr.begin(), arr.end(), [](int x) { return x <= 0; }), arr.end());
        count.push_back(counter);
    }
    
    return count;
}

int main(){
	vector<int> array,result;
	int size;
	int input;
	cin>>size;
	for(int i =0;i<size;i++){
		cin>>input;
		array.push_back(input);
	}
	
	result = cutTheSticks(array);
	display(result);
}