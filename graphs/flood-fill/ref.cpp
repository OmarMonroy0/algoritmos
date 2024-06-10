#include<bits/stdc++.h>
#define endl "\n"
#define endls "\n\n\n"
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define mk mak_pair
#define pb push_back
#define sz(x) (int)x.size()
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define f0(n) for (int i = 0; i < n;  i++)
#define f1(n) for (int i = 1; i <= n; i++)

using namespace std;
using ll =  long long;
const int maxa = 1e6 + 10;
const int mod = 1e9 + 7;

//this will help for the moves
int mx [] = {1,1,0,-1,-1,-1,0,1};
int my [] = {0,1,1,1,0,-1,-1,-1};



void printImage(vector<vector<int>> &image){
	for (const vector < int > & vec: image){
		for (int i : vec)
			cout << i << " ";
		cout << endl;
	}
	return ;

}



//as you can see this FloodFill not only makes the normal algorithm
//but also counts the number of cells modified
//if you do not need that just take it off
//it makes 8 recurive calls


int FloodFill(vector<vector<int>> &image,int ox, int oy,int color_to_replace,int new_color,int size_n,int size_m){
	//to not for the same color
	if (color_to_replace == new_color) return 0;

	//checking bounds in the matrix 
	if ((ox >= size_n) or (ox < 0)) return 0;//for rows
	
	if ((oy >= size_m) or (oy <0)) return 0; //for columns
	
	//if the cell sent does not have the color that will be replaced we make nothing
	if (image[ox][oy] != color_to_replace) return 0;
	
	//to count the elements modified ( an addition of the 
	int ans = 1;
	
	//we give the cell sent the new_color
	image[ox][oy] = new_color;
	

	for (int i = 0; i < 8; i ++)
		ans += FloodFill(image,ox + mx [ i ], oy + my [ i ], color_to_replace,new_color, size_n,size_m);
	return ans;
}

int main (){ fast;
	
	//in here number will represent a color
	//for that reason cells with same number have same color
	
	vector<vector<int>> image = {
    		{1, 1, 1, 2, 2},
        	{1, 1, 1, 2, 2},
	        {1, 1, 2, 2, 2},
	        {2, 2, 2, 2, 2}
	};

	int ox = 1, oy = 1;// this is the initial point
	int color_to_replace  = 1; //color to replace
	int new_color = 5;     //new color
	
	cout << "Image before Flood Fill " << endl;
	printImage(image);
	
	int size_n = sz(image);
	int size_m = sz(image[0]);

	FloodFill(image,ox,oy,color_to_replace,new_color,size_n, size_m);

	cout << "Image before Flood Fill" << endl;

	printImage(image);
	
				    
	return 0;
}
