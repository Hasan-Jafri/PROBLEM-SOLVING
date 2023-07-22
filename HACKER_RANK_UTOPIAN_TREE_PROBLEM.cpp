/*The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

A Utopian Tree sapling with a height of 1 meter is planted at the onset of spring. How tall will the tree be after n growth cycles?

For example, if the number of growth cycles is n = 5 then,
	Period  Height
	0          1
	1          2
	2          3
	3          6
	4          7
	5          14
*/

#include <bits/stdc++.h>
#include<iostream>

using namespace std;


/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n) {
    int height  = 0;
    for(int i = 0;i<=n;i++){
        if(i%2 ==0){
            height++;
        }
        else{
            height *= 2;
        }
    }
    return height;
}


int main(){
	int cycles;
	cout<<"Enter the number of cycles: ";
	cin>>cycles;
	cout<<endl;
	cout<<"The height of Utopian Tree will reach "<<utopianTree(cycles)<<" meters.";

}