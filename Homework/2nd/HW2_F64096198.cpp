#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{	
//��ܹC��
cout<<"���w��Ө�ڪ��C����\n\n";
cout<<"�п�J�Ʀr�ӿ�ܹC��\n\n";
cout<<"��J���Ӷi�J�q�Ʀr�C��\n";
cout<<"��J���Ӷi�J�X�ϴX�йC��\n";
cout<<"��J���Ӷi�J��a�p�C��\n\n";
int key=0;

//���b 
for(;;)
	{
		cin>>key;
		if(key<1||key>3)
			{ 
				cout<<"��J���~�A�Э��s��J�Ʀr�H��ܹC���G";
			} 
		else 
			break;	
	}
//�i�J�q�Ʀr
if(key==1)
{
	//�]�w���� 
	int ans=66;
	
	//��l�����]�w
	cout<<"----------------------------"<<endl;
	cout<<"|  ���w��Ө�q�Ʀr�C����  |"<<endl;
	cout<<"|                          |"<<endl; 
	cout<<"|        Player1:          |"<<endl; 
	cout<<"|        Player2:          |"<<endl; 
	cout<<"|                          |"<<endl; 
	cout<<"|     �Х���J�C��ID       |"<<endl; 
	cout<<"|                          |"<<endl; 
	cout<<"----------------------------"<<endl;
	
	//����]�w 
	string p1;
	string p2;
	cout<<"\n�п�JP1�C��ID:";
	cin>>p1;
	cout<<"\n�п�JP2�C��ID:";
	cin>>p2;
	cout<<"\n----------------------------\n";
	cout<<"\n�C��ID�w�]�m����\n\n";
	cout<<"P1: "<<p1<<endl;
	cout<<"P2: "<<p2<<endl<<endl; 

	//²���C������ 
	cout<<"�H�U���C���W�h\n\n";
	cout<<"��쪱�a���y��J�@�ӤG��Ʀr�A�q�諸���a�Y���ӧQ���@��C\n\n";
	cout<<"�{�b�C���}�l�I\n\n";
	
	//�C���j��]�w 
	int key=0,count1=0,count2=0;
	
	for(;;)
		{
			//�Ĥ@�쪱�a 
			cout<<"�Ъ��a"<<p1<<"��J�Ʀr�G";
			cin>>key;
			count1++;
			if(key==ans)
				{
					cout<<"\n���ߪ��a"<<p1<<"�q�F"<<count1<<"���N�q���F���סA�A�O�̫᪺Ĺ�a�I\n\n";	
					break;
				}	
			else if(key>ans)
				{ 
					if(key-ans>=10) 
						cout<<"\n�񵪮פj�Ӧh�F��I\n\n";
					else
						cout<<"\n�񵪮פj�A���O�D�`�����񵪮פF�I\n\n";	
				}		
			else if(key<ans) 
				{ 
					if(ans-key>=10) 
						cout<<"\n�񵪮פp�Ӧh�F��I\n\n";
					else
						cout<<"\n�񵪮פp�A���O�D�`�����񵪮פF�I\n\n";	
				}
				
			//�ĤG�쪱�a 
			cout<<"�Ъ��a"<<p2<<"��J�Ʀr�G";
			cin>>key;
			count2++;
			if(key==ans)
				{
					cout<<"\n���ߪ��a"<<p2<<"�q�F"<<count2<<"���N�q���F���סA�A�O�̫᪺Ĺ�a�I\n\n";
					break;	
				}	
			else if(key>ans)
				{ 
					if(key-ans>=10) 
						cout<<"\n�񵪮פj�Ӧh�F��I\n\n";
					else
						cout<<"\n�񵪮פj�A���O�D�`�����񵪮פF�I\n\n";	
				}		
			else if(key<ans) 
				{ 
					if(ans-key>=10) 
						cout<<"\n�񵪮פp�Ӧh�F��I\n\n";
					else
						cout<<"\n�񵪮פp�A���O�D�`�����񵪮פF�I\n\n";	
				}								
		}
	cout<<"    �C�������A���¹C����    "<<endl;	
	
	return 0; 
}

//�i�J�XA�XB 
if(key==2)
{
	//�]�w����
	int ans=8462;
	 
	//��l�����]�w
	cout<<"----------------------------"<<endl;
	cout<<"| ���w��Ө�X�ϴX�йC���� |"<<endl;
	cout<<"|                          |"<<endl; 
	cout<<"|         Player:          |"<<endl; 
	cout<<"|                          |"<<endl; 
	cout<<"|     �Х���J�C��ID       |"<<endl; 
	cout<<"|                          |"<<endl; 
	cout<<"----------------------------"<<endl; 
	
	//���a�]�w
	string p1;
	cout<<"\n��J�z���C��ID:";
	cin>>p1; 
	cout<<"\n�C��ID�w�]�m����\n\n";
	
	//²���C������ 
	cout<<"�H�U���C���W�h\n\n";
	cout<<"------------------------------------------------------------\n\n"; 
	cout<<"�Ъ��a��J�@�ӥ|��Ʀr�A���J�Ʀr��|���A�ϣB�Ъ��C�����ܡA\n\n";
	cout<<"�䤤�ϥN��Ʀr���T��m�]���T�A�ӢХN��Ʀr���T����m�����T�A\n\n";
	cout<<"��q���a�J��x���A�]�N�O�q���L�h���Ʀr�]�L�k�n�n���Q�νu����\n\n";
	cout<<"�ܡA�t�Ϋh�|�}�l�����a���ܡA�H�Q���a��J���T�����סC\n\n\n"; 
	cout<<"�{�b�C���}�l�I\n\n";
		
	//���׳]�w�H�έp�ƾ��]�w 
	int c=0,d=0,count=0;
	int a[4];
	a[0]=ans/1000;
	a[1]=ans%1000/100;
	a[2]=ans%100/10;
	a[3]=ans%10;
	
	//�p�ưj��]�w 
	for(int count=1;count>0;count++)
		{	
			//�P�_�O�_�w�F�����ܦ��� 
			if(count==11)
				{
					cout<<"�˷R�����a"<<p1<<"�G\n"; 
					cout<<"�ѩ�z�w�g�q�F10�������q�����סA\n";
					cout<<"�ҥH�t�ΨM�w���A�|��Ʀr���d���\n";
					cout<<"�r�A�]�N�O  ��  \n\n";
				}
				
			if(count==21)
				{
					cout<<"�˷R�����a"<<p1<<"�G\n"; 
					cout<<"�ѩ�z�w�g�q�F20�������q�����סA\n";
					cout<<"�ҥH�t�ΨM�w���A�|��Ʀr���ʦ��\n";
					cout<<"�r�A�]�N�O  ��  \n\n";
				}
				
			if(count==31)
				{
					cout<<"�˷R�����a"<<p1<<"�G\n"; 
					cout<<"�ѩ�z�w�g�q�F30�������q�����סA\n";
					cout<<"�ҥH�t�ΨM�w���A�|��Ʀr���Q���\n";
					cout<<"�r�A�]�N�O  ��  \n\n";
				}
				
			if(count==41)
				{
					cout<<"�˷R�����a"<<p1<<"�G\n"; 
					cout<<"�ѩ�z�w�g�q�F40�������q�����סA\n";
					cout<<"�ҥH�t�ΨM�w���A�|��Ʀr���Ӧ��\n";
					cout<<"�r�A�]�N�O  ��  \n\n";
					cout<<"���ݱz�U���ভ�I���X���T���סA�w\n";
					cout<<"��A�׹C����\n\n";
					break;
				}		
						 							 							 								
			//�����a�H�߳۸ܤ@�U 
			cout<<"�{�b���a"<<p1<<"�w�g�q�F"<<count-1<<"���A�Х[�o�I\n\n"; 
			cout<<"�п�J�ƦrN:";
			
			//��J���յ��׳]�w 
			int test=0;
			cin>>test;
			int b[4];
			b[0]=test/1000;
			b[1]=test%1000/100;
			b[2]=test%100/10;
			b[3]=test%10;
			
			//AB�P�_ 
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
					cout<<"���ץ��T�I�I\n\n";
					cout<<"����"<<p1<<"�q��F���T����\n\n";
					cout<<"���ݱz�U���A�׹C����\n\n"; 
					break;
				}
		}
	cout<<"�@�@�@�@�@�@�@�C�������@�@�@�@�@�@�@\n\n";
	return 0;
}
//�i�J��a�p 
if(key==3)
{
	//��l�����]�w
	cout<<"----------------------------"<<endl;
	cout<<"|                          |"<<endl; 
	cout<<"|  ���w��Ө��a�p�C����  |"<<endl;
	cout<<"|                          |"<<endl; 
	cout<<"----------------------------"<<endl; 
	
	//�a�p�ϳ]�w 
	int row=0,column=0;
	int n=0,m=0;
	cout<<"�п�Jn m�H���ͤ@��n*m�j�p���a�p��"<<endl;
	cout<<"n=";
	cin>>row;
	cout<<"m=";
	cin>>column;
	char bomb[row][column];
	
	//�a�p�]�w 
	srand(time(0));
	n=rand()%row;
	m=rand()%column;
	
	//�C�����
	cout<<"\n"; 
	cout<<"�{�b�A�ڭ̤w�g��m�F�@���ܦM�I���a�p�b��\n";
	cout<<"���A�n�p�ߡA�d�U�O��쨺���a�p�A�C���Y�N\n";
	cout<<"�}�l�A�H�U�O��e���a�p��\n\n";
	//�a�p�ϲM�� 
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
				{
					bomb[i][j]='O';	
				}
		}
	//�L�X��l�a�p��	
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
				{
					cout<<setw(2)<<bomb[i][j];
				}
			cout<<endl;
		}	
	//�p�p�����@�U�C��	
	cout<<endl<<"�C���w�g�}�l�A�{�b�v�}�l�L��ɪ���a�p�A���D�A��N�D�a�p�ϰ��������I"<<endl;
	cout<<"\n�䤤\n\n*�N��a�p����m�AO�N���٥���L���ϰ�AX�N��w�g��L���ϰ�\n\n";
	int status=0;
	for(int count=0;count!=-1;count++)
		{ 
			cout<<endl<<"�ثe����a�p���Ƭ�"<<count<<"��"<<endl<<endl;
			int key1=0,key2=0,bcount=0;
			cout<<"�п�J�A�n��񪺰ϰ��m(��A�C)\n\n";
			//���b 
			for(int i=0;i>-1;i++)
				{
					cout<<"��:";
					cin>>key1;
					cout<<"�C:";
					cin>>key2;
					if(key1<=row&&key2<=column)
						{
							break;
						}
					else
						cout<<"\n��J���~�A�Э��s��J�A�n��񪺰ϰ��m(��A�C)\n\n";
				}
			//���a�p���@�~ 
			if(((key1-1))==n&&((key2-1)==m))
				{
					cout<<endl<<"�����I�A���a�p�F�A�ݨӧA�٤����|�{�צa�p��I\n"<<endl;
					bomb[key1-1][key2-1]='*';
					cout<<"\n�̫᪺�a�p�Ϧp�U�A�P���N��a�p����m�A���A�U���n�B�I\n\n"; 
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
			//�S���a�p���@�~	
			else	
				{
					//�T�{�D�a�p�ϬO�_�w�g�ħ� 
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
					//�򧹴N���X�h�����j���� 
					if(bcount==((row*column)-1)) 
						{
							status=1;
							break;
						}	
					bcount=0;
					
					cout<<endl<<"���ߧA�o���S�����a�p�I"<<endl<<endl; 
					//�A���L�X��e�a�p�Ϲ� 
					cout<<"�H�U�O��e���a�p�Ϲ�"<<endl<<endl;
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
		cout<<"\n���ߧA�������{�צa�p�I\n\n";
		cout<<"�H�U�O�A�̫᪺�a�p�ϹϡA�P���N��a�p����m�I\n\n";
		bomb[n][m]='*';
		for(int i=0;i<row;i++)
			{
				for(int j=0;j<column;j++)
					{
						cout<<setw(2)<<bomb[i][j];
					}
				cout<<endl;
			}
			
		cout<<"\n�C�������A�P�¹C����\n";
		
		return 0;
		}
	else	
		return 0;						
}
}

