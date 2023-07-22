#include<bits/stdc++.h>
#include<iostream>

using namespace std;


/*
 * Complete the 'angryProfessor' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY a
 */

string angryProfessor(int k, vector<int> a) {
    int late_level = 0;
    for(int i =0;i<a.size();i++){
        if(a[i] <= 0){
            late_level++;
        }
    }
    if(late_level < k){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main(){
	
	string result;
	vector<int> arrivings;
	int students;
	int entries;
	int time;
	int threshold;
	
	cout<<"Enter number of Entries: ";
	cin>>entries;
	cout<<endl;
	for(int i =0;i<entries;i++){
		cin>>students; // Number of students.
		cin>>threshold; // Threshold for class conduction.
		for(int i =0;i<students;i++){
			cin>>time;
			arrivings.push_back(time);
		}
		
		result = angryProfessor(threshold,arrivings);
		cout<<"Class Status: "<<result<<endl;
		arrivings.clear();
	}
	
}