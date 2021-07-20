#include<iostream>
#include<string>
using namespace std;
int main()
{
	//設定答案 
	int ans=66;
	
	//初始介面設定
	cout<<"----------------------------"<<endl;
	cout<<"|  ～歡迎來到猜數字遊戲～  |"<<endl;
	cout<<"|                          |"<<endl; 
	cout<<"|        Player1:          |"<<endl; 
	cout<<"|        Player2:          |"<<endl; 
	cout<<"|                          |"<<endl; 
	cout<<"|     請先輸入遊戲ID       |"<<endl; 
	cout<<"|                          |"<<endl; 
	cout<<"----------------------------"<<endl;
	
	//角色設定 
	string p1;
	string p2;
	cout<<"\n請輸入P1遊戲ID:";
	cin>>p1;
	cout<<"\n請輸入P2遊戲ID:";
	cin>>p2;
	cout<<"\n----------------------------\n";
	cout<<"\n遊戲ID已設置完成\n\n";
	cout<<"P1: "<<p1<<endl;
	cout<<"P2: "<<p2<<endl<<endl; 

	//簡易遊戲說明 
	cout<<"以下為遊戲規則\n\n";
	cout<<"兩位玩家輪流輸入一個二位數字，猜對的玩家即為勝利的一方。\n\n";
	cout<<"現在遊戲開始！\n\n";
	
	//遊戲迴圈設定 
	int key=0,count1=0,count2=0;
	
	for(;;)
		{
			//第一位玩家 
			cout<<"請玩家"<<p1<<"輸入數字：";
			cin>>key;
			count1++;
			if(key==ans)
				{
					cout<<"\n恭喜玩家"<<p1<<"猜了"<<count1<<"次就猜中了答案，你是最後的贏家！\n\n";	
					break;
				}	
			else if(key>ans)
				{ 
					if(key-ans>=10) 
						cout<<"\n比答案大太多了唷！\n\n";
					else
						cout<<"\n比答案大，但是非常的接近答案了！\n\n";	
				}		
			else if(key<ans) 
				{ 
					if(ans-key>=10) 
						cout<<"\n比答案小太多了唷！\n\n";
					else
						cout<<"\n比答案小，但是非常的接近答案了！\n\n";	
				}
				
			//第二位玩家 
			cout<<"請玩家"<<p2<<"輸入數字：";
			cin>>key;
			count2++;
			if(key==ans)
				{
					cout<<"\n恭喜玩家"<<p2<<"猜了"<<count2<<"次就猜中了答案，你是最後的贏家！\n\n";
					break;	
				}	
			else if(key>ans)
				{ 
					if(key-ans>=10) 
						cout<<"\n比答案大太多了唷！\n\n";
					else
						cout<<"\n比答案大，但是非常的接近答案了！\n\n";	
				}		
			else if(key<ans) 
				{ 
					if(ans-key>=10) 
						cout<<"\n比答案小太多了唷！\n\n";
					else
						cout<<"\n比答案小，但是非常的接近答案了！\n\n";	
				}								
		}
	cout<<"    遊戲結束，謝謝遊玩～    "<<endl;	
	
	return 0;
}
