//²������a�p
#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
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
