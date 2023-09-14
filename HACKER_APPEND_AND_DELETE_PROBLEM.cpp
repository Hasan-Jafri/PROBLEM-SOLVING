#include<iostream>

using namespace std;

/*
You have two strings of lowercase English letters. You can perform two types of operations on the first string:

1.Append a lowercase English letter to the end of the string.
2.Delete the last character of the string. Performing this operation on an empty string results in an empty string.

Given an integer, k, and two strings, s and t, determine whether or not you can convert s to t by performing exactly k of the above operations on s. 
If it's possible, print Yes. Otherwise, print No.

Example. s = [a,b,c]
t = [d,e,f]
k = 6

To convert s to t, we first delete all of the characters in 3 moves. Next we add each of the characters of t in order. On the 6th move,
you will have the matching string. Return Yes.
If there were more moves available, they could have been eliminated by performing multiple deletions on an empty string.
 If there were fewer than 6 moves, we would not have succeeded in creating the new string.


*/


string appendAndDelete(string s, string t, int k) {

    int cl = 0;
    
    while(cl < s.size()  && cl<t.size()){
        if(s[cl] != t[cl]){
            break;
        }
        cl++;
    }
    if(s.size() - cl + t.size() - cl<=k and (s.size()-cl + t.size()-cl)%2 == k%2){
        return "Yes";
    }
    else if(s.size() + t.size() <= k){
        return "Yes";        
    }
    else{
        return "No";
    }

}


main(){
	string s,t,result;
	int k;
	cout<<"Enter s:";
	cin>>s;
	cout<<"Enter t:";
	cin>>t;
	cout<<"Enter k:";
	cin>>k;
	result = appendAndDelete(s,t,k);
	cout<<endl<<result;
	
	
	
}