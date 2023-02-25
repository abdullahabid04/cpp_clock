#include<iostream>
#include<windows.h>

#define delay Sleep(1000) 
#define clear system("cls")
#define pause system("pause") 

using namespace std;

int h=0,m=0,s=0;
int Fajr_hour=6,Fajr_minute=0,Fajr_second=0;
int Zuhr_hour=13,Zuhr_minute=30,Zuhr_second=0;
int Asr_hour=17,Asr_minute=0,Asr_second=0;
int Maghrib_hour=18,Maghrib_minute=30,Maghrib_second=0;
int Isha_hour=20,Isha_minute=0,Isha_second=0;
char option;

class clock
{
	private:	
	public:
		void prayer_time()
		{			
			if(h ==  Fajr_hour && m == Fajr_minute && s == Fajr_second)
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Fajr"<<endl;
				delay;
			}
	
			if(h ==  Zuhr_hour && m == Zuhr_minute && s == Zuhr_second)
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Zuhr"<<endl;
				delay;
			}
		
			if(h ==  Asr_hour && m == Asr_minute && s == Asr_second)
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Asr"<<endl;
				delay;
			}
		
			if(h ==  Maghrib_hour && m == Maghrib_minute && s == Maghrib_second)
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Maghrib"<<endl;
				delay;
			}
		
			if(h ==  Isha_hour && m == Isha_minute && s == Isha_second)
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Isha"<<endl;
				delay;
			}
		}

		void get_time()
		{
			while(1)
			{
				delay;
				clear;
				cout<<"\n\n\n\t\t\t\t"<<h<<":"<<m<<":"<<s<<endl;
		
				s++;
				if(s == 60)
				{
					m++;
					s=0;
					if(m == 60)
					{
						h++;
						m=0;
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
};

int main()
{
	clock time;
	time.get_time();	
}
