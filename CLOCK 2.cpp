#include<iostream>
#include<windows.h>

using namespace std;

int h=0,m=0,s=0;

void prayer_time()
{			
	if(h == 6 && m == 30 && s== 0)
	{
		cout<<"\a\a\a\a\a"<<endl;
		cout<<"\t\t\t\tTime for Fajr"<<endl;
		Sleep(1000);
	}

	if(h == 13 && m == 30 && s== 0)
	{
		cout<<"\a\a\a\a\a"<<endl;
		cout<<"\t\t\t\tTime for Zuhr"<<endl;
		Sleep(1000);
	}
	if(h == 17 && m == 0 && s== 0)
	{
		cout<<"\a\a\a\a\a"<<endl;
		cout<<"\t\t\t\tTime for Asr"<<endl;
		Sleep(1000);
	}
	if(h == 18 && m == 30 && s== 0)
	{
		cout<<"\a\a\a\a\a"<<endl;
		cout<<"\t\t\t\tTime for Maghrib"<<endl;
		Sleep(1000);
	}
	if(h == 20 && m == 0 && s== 0)
	{
		cout<<"\a\a\a\a\a"<<endl;
		cout<<"\t\t\t\tTime for Isha"<<endl;
		Sleep(1000);
	}
}

void clock()
{
	while(1)
	{
		Sleep(1000);
		system("cls");
		cout<<"\n\n\n\t\t\t\t"<<h<<":"<<m<<":"<<s<<endl;
		
		s++;
		if(s == 60)
		{
			m++;
			s=1;
			if(m == 60)
			{
				h++;
				m=1;
				if(h == 24)
				{
					h = 0; 
					m = 0;
					s = 0;
				}
			}
		}
		prayer_time();
	}
}
	

int main()
{
	clock();
}
