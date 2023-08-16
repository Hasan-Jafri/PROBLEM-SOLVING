/*
HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, 
they advertise it to exactly 5 people on social media.
On the first day, half of those 5 people (i.e.floor(5/2) = 2, ) like the advertisement and each shares it with 3 of their friends.
At the beginning of the second day, floor(5/2) x 3 = 6 people receive the advertisement.
Each day, floor(recipents/2) of the recipients like the advertisement and will share it with  
friends on the following day. Assuming nobody receives the advertisement twice, 
determine how many people have liked the ad by the end of a given day, beginning with launch day as day .
*/
#include<iostream>
#include <bits/stdc++.h>


using namespace std;
/*
 * Complete the 'viralAdvertising' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int viralAdvertising(int n) {
    int recipents = 5;
    int liked = 0;
    int likes;
    for(int i = 1; i<=n ;i++){
        likes = recipents/2;
        liked += likes;
        recipents = likes*3;
    }
    return liked;
}

int main(){
	int days;
	int result;
	cout<<"------------------------------------ HACKERLAND ADVERTISING MANAGEMENT -------------------------------------"<<endl<<endl;
	cout<<"Enter the day to generate liked data: ";
	cin>>days;
	result = viralAdvertising(days);
	cout<<"After "<<days<<" Day(s), the cumulative likes will be "<<result<<endl;
	
	return 0;
}