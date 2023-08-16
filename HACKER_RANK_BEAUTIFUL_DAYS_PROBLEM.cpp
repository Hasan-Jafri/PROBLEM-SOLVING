/*
Given a range of numbered days,[i......j]  and a number k , determine the number of days in the range that are beautiful.
 Beautiful numbers are defined as numbers where |i - reverse(i)| is evenly divisible by k . 
 If a day's value is a beautiful number, it is a beautiful day. 
 Return the number of beautiful days in the range.
*/

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'beautifulDays' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER i
 *  2. INTEGER j
 *  3. INTEGER k
 */
int reverse(int i){
    int rev = 0;
    int rim;
    while(i>0){
        rim = i % 10;
        rev = rev*10 + rim;
        i = i / 10;
    }
    
    return rev;
}


int beautifulDays(int i, int j, int k) {
    int rev;
    int count = 0;
    for(int x = i;x<=j;x++){
        rev = reverse(x);
        if((abs(x-rev))%k==0){
            count++;
        }
    }
    return count;
}


int main(){
	int i,j,k,result;
	
	cout<<"----------------------------------------------- BEAUTIFUL NUMBERS -----------------------------------------------"<<endl<<endl;
	cout<<"Enter the starting range: ";
	cin>>i;
	cout<<"Enter the ending range: ";
	cin>>j;
	cout<<"Enter the divisibility number: ";
	cin>>k;
	cout<<endl<<endl;
	result = beautifulDays(i,j,k);
	cout<<"Total numbers which can be divided by "<<k<<" in the given range are: "<<result;
	
	
	return 0;
}