#include<iostream>
#include<vector>

using namespace std;


void display(vector<int> arr){
	for( int i =0;i>arr.size();i++){
		cout<<arr[i]<<endl;
	}
}

vector<int> remove_duplicates(vector<int> arr){
    int i = 0;
    while(i < arr.size()){
        if(arr[i] == arr[i-1]){
            arr.erase(arr.begin() + i);
        }
        else{
            i++;
        }
    }
    return arr;
}

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> result;
    ranked = remove_duplicates(ranked);
    int back = ranked.size() - 1;
    for(int i = 0; i<player.size();i++){
        while(back >= 0 and player[i] > ranked[back]){
            back--;
        }
        if(player[i] == ranked[back])
            result.push_back(back + 1);
        else
            result.push_back(back + 2);
    }
    return result;
}



int main(){
	vector<int> ranked;
	vector<int> player;
	vector<int> result;
	int input;
	int length_ranked;
	int length_player;
	cout<<"Enter The length of the Leaderboard: ";
	cin>>length_ranked;cout<<endl;
	for(int i =0;i<length_ranked;i++){
		cin>>input;
		ranked.push_back(input);
	}
	cout<<ranked.size()<<endl;
	
	cout<<"Enter The length of Player's Scores: ";
	cin>>length_player;cout<<endl;
	for(int i =0;i<length_player;i++){
		cin>>input;
		player.push_back(input);
	}
	cout<<player.size()<<endl;
//	system("cls");
	result = climbingLeaderboard(ranked,player);
	
	cout<<"The Ranks of the Player's Scores are: "<<endl;
	display(result);
	
	
	return 0;
}
