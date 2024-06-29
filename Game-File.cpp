#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<windows.h>

using namespace std;

void load(){
	int i,j;
	int a=177,b=219; // 176,175
	cout<<"\t\t\t\t         ";
	
	for(j=0;j<25;j++)
		cout<<(char)a;
	cout<<"]\r";
	cout<<"\t\t\t\tLoading [";
	for(i=0;i<25;i++){
		Sleep(100);
		cout<<(char)b;
	}
	cout<<"]\n\n";
}


int main(){
	
	load();
	system("cls");
	
	cout<<"\t\t\t\tWELCOME TO NUMBER GUESSING GAME"<<endl<<endl;
	
	
int num=0;
		
num=rand() % 100;	
//cout<< num <<endl<<endl;

	
	int ans=0,i=0;
	
while(ans != num){
	
	cout<<"Enter Your Guess = ";
	cin>>ans;
	
	if(ans > num){
		cout<<"Your Guess is too High!"<<endl<<endl;
	}else if(ans < num){
		cout<<"Your Guess is too Low!"<<endl<<endl;
	}
	
	if(i == 5){
		system("cls");
		cout<<"\t\t\t\tWELCOME TO NUMBER GUESSING GAME"<<endl<<endl;
		i=0;
	}
	i++;
}


	system("cls");
	cout<<endl;
	cout<<"Congratulations Your Guess is Correct!";


}
