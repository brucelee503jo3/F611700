#include<iostream>
#include<string> 
using namespace std;
int main()
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
