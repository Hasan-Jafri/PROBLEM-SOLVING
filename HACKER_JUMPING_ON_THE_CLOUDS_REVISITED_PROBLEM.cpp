#include<iostream>
#include<vector>

/*
A child is playing a cloud hopping game. In this game, there are sequentially n
umbered clouds that can be thunderheads or cumulus clouds. The character must jump from cloud to cloud until it reaches the start again.
There is an array of clouds,  and an energy level . 
The character starts from  and uses  unit of energy to make a jump of size  to cloud . 
If it lands on a thundercloud, , its energy () decreases by  additional units. The game ends when the character lands back on cloud .
Given the values of , , and the configuration of the clouds as an array , determine the final value of  after the game ends.
*/
using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
    int energy = 100;
    int i = 0;
    bool cycle = false;
    while(cycle == false){
        i += k;
        int index = i % c.size();
        if(i > c.size()-1 and index == 0){
            //i = c.size()-1-i;
            cycle = true;
        }
        if(c[index] == 0){
            energy--;
        }
        else if(c[index]==1){
            energy -=3;
        }
        i = index;
        
    }
    
    return energy;

}

int main(){
	int n,k,input;
	vector<int>c;
	cin>>n;cin>>k;
	for(int i = 0;i<n;i++){
		cin>>input;
		c.push_back(input);
	}
	
	cout<<jumpingOnClouds(c,k)<<endl;
	
	return 0;
}