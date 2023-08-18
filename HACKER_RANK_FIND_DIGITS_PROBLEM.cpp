#include<iostream>
#include<vector>


/*
An integer d is a divisor of an integer n if the remainder of n / d =0.
Given an integer, for each digit that makes up the integer 
determine whether it is a divisor. Count the number of divisors occurring within the integer.
*/
using namespace std;

int findDigits(int n) {
    
    int original = n;
    int count = 0;    
    while(n>0){
        int rim = n%10;
        int digit = rim;
        if(digit !=0 and original % digit == 0){
            count++;
        }
        n = n / 10;    
    }
    return count;

}


main(){
	
	
	int n,input;
	cin>>n;
	
	for(int i =0;i<n;i++){
		cin>>input;
		cout<<findDigits(input)<<endl;
	}
}