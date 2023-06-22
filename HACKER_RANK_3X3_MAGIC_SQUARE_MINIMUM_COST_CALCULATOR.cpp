#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */


bool isMagicSquare(vector<vector<int>> square) {
    int magicSum = square[0][0] + square[0][1] + square[0][2];

    // Check rows
    for (int i = 1; i < 3; i++) {
        int rowSum = square[i][0] + square[i][1] + square[i][2];
        if (rowSum != magicSum)
            return false;
    }

    // Check columns
    for (int j = 0; j < 3; j++) {
        int colSum = square[0][j] + square[1][j] + square[2][j];
        if (colSum != magicSum)
            return false;
    }

    // Check diagonals
    int diagSum1 = square[0][0] + square[1][1] + square[2][2];
    int diagSum2 = square[0][2] + square[1][1] + square[2][0];
    if (diagSum1 != magicSum || diagSum2 != magicSum)
        return false;

    return true;
}

void display(vector<vector<int>> s){
    
    for(int i = 0; i<s.size(); i++){
        for(int j = 0; j < s[i].size(); j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int cost_finding(vector<vector<int>> original, vector<vector<int>> changed){
    
    //This will find the minimum cost.
    int cost = 0;
    for(int i = 0; i<3;i++){
        for(int j =0; j<3;j++){
            cost += abs(original[i][j]-changed[i][j]);
        }
    }
    
    return cost;
    
}

int formingMagicSquare(vector<vector<int>> s) {
    if(isMagicSquare(s)){
        return 0;
    }
    //As per the requirement we need to transform the 3x3 matrix into a magic square
    //But there are only 8 possible magic squares of it so using four arrays.
    vector<vector<int>> one = {{2,7,6},{9,5,1},{4,3,8}};
    vector<vector<int>> two = {{4,3,8},{9,5,1},{2,7,6}};
    vector<vector<int>> three = {{6,1,8},{7,5,3},{2,9,4}};
    vector<vector<int>> four = {{8,1,6},{3,5,7},{4,9,2}};
    vector<vector<int>> five = {{2,9,4},{7,5,3},{6,1,8}};
    vector<vector<int>> six = {{4,9,2},{3,5,7},{8,1,6}};
    vector<vector<int>> seven = {{6,7,2},{1,5,9},{8,3,4}};
    vector<vector<int>> eight = {{8,3,4},{1,5,9},{6,7,2}};
    int min_cost = 1000000;
    int cost = cost_finding(s,one);

    if(min_cost>cost)
        min_cost = cost;
    cost = cost_finding(s,two);

    if(min_cost>cost)
        min_cost = cost;
    cost = cost_finding(s,three);

    if(min_cost>cost)
        min_cost = cost;
    cost = cost_finding(s,four);

    if(min_cost>cost)
        min_cost = cost;
    cost = cost_finding(s,five);

    if(min_cost>cost)
        min_cost = cost;
    cost = cost_finding(s,six);

    if(min_cost>cost)
        min_cost = cost;
    cost = cost_finding(s,seven);

    if(min_cost>cost)
        min_cost = cost;
    cost = cost_finding(s,eight);

    if(min_cost>cost)
        min_cost = cost;
    
    return min_cost;
}


int main()
{
    
    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++) {
        s[i].resize(3);
        for(int j = 0; j<3;j++){
        	cin>>s[i][j];
		}

	}
	system("cls");
	cout<<"The cost for making Matrix \n\n";
	display(s);
	cout<<endl<<"is: "<<formingMagicSquare(s);

    return 0;
}

