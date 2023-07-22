/*
There is a list of 26 character heights aligned by index to their letters. For example, 'a' is at index 0 and 'z' 
is at index 25. There will also be a string. Using the letter heights given, determine the area of the rectangle 
highlight in mm^2 assuming all letters are 1mm wide
*/

#include<iostream>
#include<vector>

using namespace std;


int designerPdfViewer(vector<int> h, string word) {
    int length = word.length();
    int width;
    int max = 0;
    int pos;
    for(int i = 0;i<word.size();i++){
        pos = 25 - ('z' - word[i]); //Calculates the index of the letter. Works on the principle of ASCII conversions.
        if(h[pos] > max){
            max = h[pos];
        }    
    }
    width = length*max;
    return width;
}

int main(){
	int result;
	int input;
	vector<int> h; // Array to store heights of each alphabet.
	cout<<"Enter the heights of all the letters"<<endl;
	for(int i = 0;i<26;i++){
		cin>>input;
		h.push_back(input);
	}
	string word;
	cout<<"Enter the word to kow its width: ";
	cin>>word; //Note that only alphabets will be considered so space should not be a part of the string at the input.
	system("cls");
	result = designerPdfViewer(h,word);
	
	cout<<"The width of the word "<<word<<" is: "<<result<<endl;
	
	return 0 ;
}