#include<iostream>

using namespace std;


/*
There is a string, s, of lowercase English letters that is repeated infinitely many times. Given an integer, n,
 find and print the number of letter a's in the first n letters of the infinite string.

Example
s = 'abcac'
n = 10


The substring we consider is abcacabcac, the first 10 characters of the infinite string. There are 4 occurrences of a in the substring.
*/



long repeatedString(string s, long n) {
    long count = 0;
    if(n < s.size()){
        for(int i = 0;i<n;i++){
            if(s[i] == 'a'){
                count++;
            }
        }
    }
    else{
    
    for(int i = 0;i<s.size();i++){
        if(s[i] == 'a'){
            count++;
        }
    }
    if(n%s.size() == 0){
        count *= n/s.size();
    }
    else{
        long long rim = n%s.size();
        count *= n/s.size();
        for(int i =0;i<rim;i++){
            if(s[i] == 'a'){
                count++;
            }
        }
    }
    }
    return count;
}

int main(){
	
	string s;
	long n;
	cout<<"Enter String: ";cin>>s;
	cout<<"Enter n: ";cin>>n;
	cout<<repeatedString(s,n);
	
}