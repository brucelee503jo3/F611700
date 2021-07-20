#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{	
//選擇遊戲
cout<<"～歡迎來到我的遊戲～\n\n";
cout<<"請輸入數字來選擇遊戲\n\n";
cout<<"輸入１來進入猜數字遊戲\n";
cout<<"輸入２來進入幾Ａ幾Ｂ遊戲\n";
cout<<"輸入３來進入踩地雷遊戲\n\n";
int key=0;

//防呆 
for(;;)
	{
		cin>>key;
		if(key<1||key>3)
			{ 
				cout<<"輸入錯誤，請重新輸入數字以選擇遊戲：";
			} 
		else 
			break;	
	}
//進入猜數字
if(key==1)
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

//進入幾A幾B 
if(key==2)
{
	//設定答案
	int ans=8462;
	 
	//初始介面設定
	cout<<"----------------------------"<<endl;
	cout<<"| ～歡迎來到幾Ａ幾Ｂ遊戲～ |"<<endl;
	cout<<"|                          |"<<endl; 
	cout<<"|         Player:          |"<<endl; 
	cout<<"|                          |"<<endl; 
	cout<<"|     請先輸入遊戲ID       |"<<endl; 
	cout<<"|                          |"<<endl; 
	cout<<"----------------------------"<<endl; 
	
	//玩家設定
	string p1;
	cout<<"\n輸入您的遊戲ID:";
	cin>>p1; 
	cout<<"\n遊戲ID已設置完成\n\n";
	
	//簡易遊戲說明 
	cout<<"以下為遊戲規則\n\n";
	cout<<"------------------------------------------------------------\n\n"; 
	cout<<"請玩家輸入一個四位數字，當輸入數字後會有ｘＡｙＢ的遊戲提示，\n\n";
	cout<<"其中Ａ代表數字正確位置也正確，而Ｂ代表數字正確但位置不正確，\n\n";
	cout<<"當猜玩家遇到困難，也就是猜測過多次數字也無法好好的利用線索的\n\n";
	cout<<"話，系統則會開始給玩家提示，以利玩家輸入正確的答案。\n\n\n"; 
	cout<<"現在遊戲開始！\n\n";
		
	//答案設定以及計數器設定 
	int c=0,d=0,count=0;
	int a[4];
	a[0]=ans/1000;
	a[1]=ans%1000/100;
	a[2]=ans%100/10;
	a[3]=ans%10;
	
	//計數迴圈設定 
	for(int count=1;count>0;count++)
		{	
			//判斷是否已達給提示次數 
			if(count==11)
				{
					cout<<"親愛的玩家"<<p1<<"：\n"; 
					cout<<"由於您已經猜了10次仍未猜中答案，\n";
					cout<<"所以系統決定給你四位數字的千位數\n";
					cout<<"字，也就是  ８  \n\n";
				}
				
			if(count==21)
				{
					cout<<"親愛的玩家"<<p1<<"：\n"; 
					cout<<"由於您已經猜了20次仍未猜中答案，\n";
					cout<<"所以系統決定給你四位數字的百位數\n";
					cout<<"字，也就是  ４  \n\n";
				}
				
			if(count==31)
				{
					cout<<"親愛的玩家"<<p1<<"：\n"; 
					cout<<"由於您已經猜了30次仍未猜中答案，\n";
					cout<<"所以系統決定給你四位數字的十位數\n";
					cout<<"字，也就是  ６  \n\n";
				}
				
			if(count==41)
				{
					cout<<"親愛的玩家"<<p1<<"：\n"; 
					cout<<"由於您已經猜了40次仍未猜中答案，\n";
					cout<<"所以系統決定給你四位數字的個位數\n";
					cout<<"字，也就是  ２  \n\n";
					cout<<"期待您下次能早點答出正確答案，歡\n";
					cout<<"迎再度遊玩～\n\n";
					break;
				}		
						 							 							 								
			//給玩家信心喊話一下 
			cout<<"現在玩家"<<p1<<"已經猜了"<<count-1<<"次，請加油！\n\n"; 
			cout<<"請輸入數字N:";
			
			//輸入測試答案設定 
			int test=0;
			cin>>test;
			int b[4];
			b[0]=test/1000;
			b[1]=test%1000/100;
			b[2]=test%100/10;
			b[3]=test%10;
			
			//AB判斷 
			for(int j=0;j<4;j++)
				{
					if(b[j]==a[0]||b[j]==a[1]||b[j]==a[2]||b[j]==a[3])
						c++;
					if(b[j]==a[j])
						{
							c--;
							d++;
						} 
				}
			cout<<"\n"<<d<<"A"<<c<<"B\n\n";			
			c=0;
			d=0;
			if(test==8462)
				{
					cout<<"答案正確！！\n\n";
					cout<<"恭喜"<<p1<<"猜對了正確答案\n\n";
					cout<<"期待您下次再度遊玩～\n\n"; 
					break;
				}
		}
	cout<<"　　　　　　　遊戲結束　　　　　　　\n\n";
	return 0;
}
//進入踩地雷 
if(key==3)
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
}

