#include<iostream>
using namespace std;
	void matrix(int arr[][3],int row,int column){
		for(int i=0;i<row;i++){
			for(int j=0;j<column;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
int main(){
	int arr[2][3]={
	{1,2,3},{4,5,6}};
	
	matrix(arr,2);

};

