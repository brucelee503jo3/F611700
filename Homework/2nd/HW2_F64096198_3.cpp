//簡易版踩地雷
#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{	
	//初始介面設定
	cout<<"----------------------------"<<endl;
	cout<<"|                          |"<<endl; 
	cout<<"|  ～歡迎來到踩地雷遊戲～  |"<<endl;
	cout<<"|                          |"<<endl; 
	cout<<"----------------------------"<<endl; 
	
	//地雷區設定 
	int row=0,column=0;
	int n=0,m=0;
	cout<<"請輸入n m以產生一個n*m大小的地雷區"<<endl;
	cout<<"n=";
	cin>>row;
	cout<<"m=";
	cin>>column;
	char bomb[row][column];
	
	//地雷設定 
	srand(time(0));
	n=rand()%row;
	m=rand()%column;
	
	//遊戲初期
	cout<<"\n"; 
	cout<<"現在，我們已經放置了一顆很危險的地雷在裡\n";
	cout<<"面，要小心，千萬別踩到那顆地雷，遊戲即將\n";
	cout<<"開始，以下是當前的地雷圖\n\n";
	//地雷區清空 
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
				{
					bomb[i][j]='O';	
				}
		}
	//印出初始地雷區	
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
				{
					cout<<setw(2)<<bomb[i][j];
				}
			cout<<endl;
		}	
	//小小說明一下遊戲	
	cout<<endl<<"遊戲已經開始，現在己開始無止盡的踩地雷，除非你能將非地雷區域全部踩光！"<<endl;
	cout<<"\n其中\n\n*代表地雷的位置，O代表還未踩過的區域，X代表已經踩過的區域\n\n";
	int status=0;
	for(int count=0;count!=-1;count++)
		{ 
			cout<<endl<<"目前的踩地雷次數為"<<count<<"次"<<endl<<endl;
			int key1=0,key2=0,bcount=0;
			cout<<"請輸入你要踩踏的區域位置(行，列)\n\n";
			//防呆 
			for(int i=0;i>-1;i++)
				{
					cout<<"行:";
					cin>>key1;
					cout<<"列:";
					cin>>key2;
					if(key1<=row&&key2<=column)
						{
							break;
						}
					else
						cout<<"\n輸入錯誤，請重新輸入你要踩踏的區域位置(行，列)\n\n";
				}
			//踩到地雷的作業 
			if(((key1-1))==n&&((key2-1)==m))
				{
					cout<<endl<<"哈哈！你踩到地雷了，看來你還不夠會閃避地雷唷！\n"<<endl;
					bomb[key1-1][key2-1]='*';
					cout<<"\n最後的地雷圖如下，星號代表地雷的位置，祝你下次好運！\n\n"; 
					for(int i=0;i<row;i++)
						{
							for(int j=0;j<column;j++)
								{
									cout<<setw(2)<<bomb[i][j];
								}
							cout<<endl;
						}					
					break;
				}
			//沒踩到地雷的作業	
			else	
				{
					//確認非地雷區是否已經採完 
					bomb[key1-1][key2-1]='X';
					for(int i=0;i<row;i++)
						{
							for(int j=0;j<column;j++)
								{
									if(bomb[i][j]=='X')
										{
											bcount++;
										}
								}
						}
					//踩完就跳出去完美大結局 
					if(bcount==((row*column)-1)) 
						{
							status=1;
							break;
						}	
					bcount=0;
					
					cout<<endl<<"恭喜你這次沒有踩到地雷！"<<endl<<endl; 
					//再次印出當前地雷區圖 
					cout<<"以下是當前的地雷區圖"<<endl<<endl;
					for(int i=0;i<row;i++)
						{
							for(int j=0;j<column;j++)
								{
									cout<<setw(2)<<bomb[i][j];
								}
							cout<<endl;
						}
				}	
		}
		
	if(status==1)
		{
		cout<<"\n恭喜你完美的閃避地雷！\n\n";
		cout<<"以下是你最後的地雷區圖，星號代表地雷的位置！\n\n";
		bomb[n][m]='*';
		for(int i=0;i<row;i++)
			{
				for(int j=0;j<column;j++)
					{
						cout<<setw(2)<<bomb[i][j];
					}
				cout<<endl;
			}
			
		cout<<"\n遊戲結束，感謝遊玩～\n";
		
		return 0;
		}
	else	
		return 0;						
}
