#include<iostream>
#include<string>
using namespace std;
int main()
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
