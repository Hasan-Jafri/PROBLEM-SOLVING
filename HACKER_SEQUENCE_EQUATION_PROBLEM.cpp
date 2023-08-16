#include <bits/stdc++.h>
#include<vector>
using namespace std;
/*
Given a sequence of n integers,p(1),p(2),....,p(n) where each element is distinct and satisfies 1<=p(x)<=n. 
For each x where 1<=x<=n, that is x increments from 1 to n, 
find any integer y such that p(p(y)) = x and keep a history of the values of y in a return array.
*/
// Note that the values shold be in range of the values you set as length for array.
/*
 * Complete the 'permutationEquation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY p as parameter.
 */

int search(vector<int> a,int x){
    
	for(int i = 0;i<a.size();i++){
    
	    if(a[i] == x){
            return i+1;
        }        
    
	}
    
	return -1;
}


vector<int> permutationEquation(vector<int> p) {
	// find the index of the index.

    vector<int> result;
    
	for(int x = 1;x<p.size()+1;x++){
        int key = search(p,x);
        result.push_back(search(p,key));
    }
    
	return result;
}

void display(vector<int> x){
	for(int i = 0;i<x.size();i++){
		cout<<x[i]<<" ";
	}
}

int main()
{
	int length;
	int input;
	vector<int> p ;
	cout<<"Enter the length of array: ";cin>>length;
	for(int i = 0;i<length;i++){
		cin>>input;
		p.push_back(input);
	}
    vector<int> result = permutationEquation(p);
    cout<<endl;
    display(result);
    

    return 0;

}
   