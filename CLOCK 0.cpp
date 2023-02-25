#include<iostream>
#include<cstdlib>
#include<windows.h>

#define delay Sleep(1000) 
#define clear system("cls")
#define pause system("pause") 

using namespace std;

const int size = 2;
int h=0,m=0,s=0;
int Fajr_hour[size]={00},Fajr_minute[size]={00},Fajr_second[size]={00};
int Zuhr_hour[size]={00},Zuhr_minute[size]={00},Zuhr_second[size]={00};
int Asr_hour[size]={00},Asr_minute[size]={00},Asr_second[size]={00};
int Maghrib_hour[size]={00},Maghrib_minute[size]={00},Maghrib_second[size]={00};
int Isha_hour[size]={00},Isha_minute[size]={00},Isha_second[size]={00};
int timer_hour[size],timer_minute[size],timer_second[size];
int fajr_time[8],zuhr_time[8],asr_time[8],maghrib_time[8],isha_time[8];

void set_clock_time()
{
	char option;
	while(option != 'C')
	{
		cout<<"\nEnter your option : ";
		cin>>option;
		switch(option)
		{
			case 'F':
				cout<<"Enter new time for Fajr\n";
				cout<<"Enter new hour for Fajr : ";
				cin>>Fajr_hour[size];
				cout<<"Enter new minute for Fajr : ";
				cin>>Fajr_minute[size];
				cout<<"Enter new second for Fajr : ";
				cin>>Fajr_second[size];
				cout<<"New time for fajr has been set to "<<Fajr_hour[size]<<":"<<Fajr_minute[size]<<":"<<Fajr_second[size]<<endl;
				break;
			case 'Z':
				cout<<"Enter new time for Zuhr\n";
				cout<<"Enter new hour for Zuhr : ";
				cin>>Zuhr_hour[size];
				cout<<"Enter new minute for Zuhr : ";
				cin>>Zuhr_minute[size];
				cout<<"Enter new second for Zuhr : ";
				cin>>Zuhr_second[size];
				cout<<"New time for Zuhr has been set to "<<Zuhr_hour[size]<<":"<<Zuhr_minute[size]<<":"<<Zuhr_second[size]<<endl;
				break;
			case 'A':
				cout<<"Enter new time for Asr\n";
				cout<<"Enter new hour for Asr : ";
				cin>>Asr_hour[size];
				cout<<"Enter new minute for Asr : ";
				cin>>Asr_minute[size];
				cout<<"Enter new second for Asr : ";
				cin>>Asr_second[size];
				cout<<"New time for Asr has been set to "<<Asr_hour[size]<<":"<<Asr_minute[size]<<":"<<Asr_second[size]<<endl;
				break;
			case 'M':
				cout<<"Enter new time for Maghrib\n";
				cout<<"Enter new hour for Maghrib : ";
				cin>>Maghrib_hour[size];
				cout<<"Enter new minute for Maghrib : ";
				cin>>Maghrib_minute[size];
				cout<<"Enter new second for Maghrib : ";
				cin>>Maghrib_second[size];
				cout<<"New time for Maghrib has been set to "<<Maghrib_hour[size]<<":"<<Maghrib_minute[size]<<":"<<Maghrib_second[size]<<endl;	
				break;
			case 'I':
				cout<<"Enter new time for Isha\n";
				cout<<"Enter new hour for Isha : ";
				cin>>Isha_hour[size];
				cout<<"Enter new minute for Isha : ";
				cin>>Isha_minute[size];
				cout<<"Enter new second for Isha : ";
				cin>>Isha_second[size];
				cout<<"New time for Isha has been set to "<<Isha_hour[size]<<":"<<Isha_minute[size]<<":"<<Isha_second[size]<<endl;
				break;
			case 'C':
				break;
			default:
				break;
		}
	}
}
class prayers_time
{
	private:
		friend void set_clock_time();
	public:
		void set_prayers_time()
		{
			set_clock_time();
		}
		
		void set_prayer_time_fajr()
		{
			Fajr_hour[size] = 6;
			Fajr_minute[size] = 30;
			Fajr_second[size] = 0;
		}
		
		void set_prayer_time_zuhr()
		{
			Zuhr_hour[size] = 13;
			Zuhr_minute[size] = 30;
			Zuhr_second[size] = 0;
		}
		
		void set_prayer_time_asr()
		{
			Asr_hour[size] = 17;
			Asr_minute[size] = 30; 
			Asr_second[size] = 0;
		}
		
		void set_prayer_time_maghrib()
		{
			Maghrib_hour[size] = 19;
			Maghrib_minute[size] = 0;
			Maghrib_second[size] = 0;
		}
		
		void set_prayer_time_isha()
		{
			Isha_hour[size] = 20;
			Isha_minute[size] = 30;
			Isha_second[size] = 0;
		}
};
class Clock : public prayers_time
{
	private:	
	public:
		void auto_set_prayer_time_fajr()
		{
			set_prayer_time_fajr();
		}		
		
		void auto_set_prayer_time_zuhr()
		{
			set_prayer_time_zuhr();
		}		
		
		void auto_set_prayer_time_asr()
		{
			set_prayer_time_asr();
		}		
		
		void auto_set_prayer_time_maghrib()
		{
			set_prayer_time_maghrib();
		}		
		
		void auto_set_prayer_time_isha()
		{
			set_prayer_time_isha();
		}
		
		void auto_set_prayers_time()
		{
			auto_set_prayer_time_fajr();
			auto_set_prayer_time_zuhr();
			auto_set_prayer_time_asr();
			auto_set_prayer_time_maghrib();
			auto_set_prayer_time_isha();
		} 
		
		void timings()
		{
			int t;
			t = size; 
			cout<<"\tFajr"<<"\t"<<Fajr_hour[t]<<":"<<Fajr_minute[t]<<":"<<Fajr_second[t]<<"\n";
			cout<<"\tZuhr"<<"\t"<<Zuhr_hour[t]<<":"<<Zuhr_minute[t]<<":"<<Zuhr_second[t]<<"\n";
			cout<<"\tAsr"<<"\t"<<Asr_hour[t]<<":"<<Asr_minute[t]<<":"<<Asr_second[t]<<"\n";
			cout<<"\tMaghrib"<<"\t"<<Maghrib_hour[t]<<":"<<Maghrib_minute[t]<<":"<<Maghrib_second[t]<<"\n";
			cout<<"\tIsha"<<"\t"<<Isha_hour[t]<<":"<<Isha_minute[t]<<":"<<Isha_second[t]<<"\n";
		}
		
		void prayer_time()
		{			
			if(h ==  Fajr_hour[size] && m == Fajr_minute[size] && s == Fajr_second[size])
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Fajr"<<endl;
				delay;
			}
	
			if(h ==  Zuhr_hour[size] && m == Zuhr_minute[size] && s == Zuhr_second[size])
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Zuhr"<<endl;
				delay;
			}
		
			if(h ==  Asr_hour[size] && m == Asr_minute[size] && s == Asr_second[size])
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Asr"<<endl;
				delay;
			}
		
			if(h ==  Maghrib_hour[size] && m == Maghrib_minute[size] && s == Maghrib_second[size])
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Maghrib"<<endl;
				delay;
			}
		
			if(h ==  Isha_hour[size] && m == Isha_minute[size] && s == Isha_second[size])
			{
				cout<<"\a\a\a\a\a"<<endl;
				cout<<"\t\t\t\tTime for Isha"<<endl;
				delay;
			}
		}
		void display_time()
		{
			delay;
			clear;
			timings();
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
		}		
		void get_time()
		{
			while(1)
			{
				display_time();
				prayer_time();
			}
		}
		
		void timer()
		{
			cout<<"Enter time for stopwatch\n";
			cout<<"Enter hour for stopwatch : ";
			cin>>timer_hour[size];
			cout<<"Enter minute for stopwatch : ";
			cin>>timer_minute[size];
			cout<<"Enter second stopwatch : ";
			cin>>timer_second[size];
			while(1)
			{
				display_time();
				if(h  == timer_hour[size] && m == timer_minute[size] && s == timer_second[size])
				{
					while(1)
					{
						display_time();
						int a;
						a++;
						cout<<"\a";
						if(a == 5)
						{
							break;
						}
					}
				}
			}
		}			
};

int main()
{
	Clock time;
	prayers_time time_for_prayer;
	time.auto_set_prayers_time();
	static char choice;	
	while(1)
	{
		cout<<"B for begin time"<<endl;
		cout<<"T for stopwatch"<<endl;
		cout<<"S for set time"<<endl;
		cout<<"P for show previous timings"<<endl;
		cout<<"E for shut down clock"<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;
		cout<<endl<<endl;
		switch(choice)
		{
			case 'B':
				time.get_time();
				break;		
			case 'T':
				time.timer();
				break;
			case 'S':
				time_for_prayer.set_prayers_time();
				pause;
				break;
			case 'P':
				time.timings();
				pause;
				break;
			case 'E':
				exit(1);
		}	
	}
}
