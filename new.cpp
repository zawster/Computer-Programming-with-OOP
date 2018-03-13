#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int count1=0,count2=0;
///////////////////////////////////////////////			test1
int test1(string str,int x){
	string temp;
	int i=0;
	for(i=count1;i<str.length();i++){
		if(str[i] !=':'){
			temp +=str[i];
		}
		else if(str[i]==':'){
			istringstream ( temp ) >> x;
			count1 +=1;
			break;
		}
			count1 +=1;
		}
				
	if(count1==str.length()){
		istringstream (temp)>>x;		
	}
				return x;
}/////////////////////////////////////////////////			test2
int test2(string str,int y){
	string temp;
	int j=0;
	for(j=count2;j<str.length();j++){
					if(str[j] !='/'){
						temp +=str[j];
					}
					else if(str[j]=='/'){
						istringstream ( temp ) >> y;
						count2 +=1;
						break;
					}
						count2 +=1;
					}
				
	if(count2==str.length()){
		istringstream (temp)>>y;		
	}
	return y;
}
////////////////////////////////////////////////////
///////////////////////////////////////////////////			class start from here
class Date_and_Time{
	private:											//		private
		int hr,min,sec;
		int date,month,year;
		string str1,str2;
		int i,j;
	public:												//    	public
		   Date_and_Time(){
		   	hr=20; min=52; sec=50; 
		   	date=30; month=03; year=2018;
		   cout<<"Constructor is overloaded "<<endl;
		   	}
	  		 				   	//      Set,get and modify Time		//
		   	void set_hr(int h)		//	1
			   {
			   	if(h>24){
					cout<<"Your hours are invalid"<<endl;
					return;
				}
		   		hr=h;
			   }
		    void set_min(int m)		//	2
			{
				if(m>60){
					cout<<"Your minuts are invalid"<<endl;
					return;
				}
		    	min=m;
			}
			void set_sec(int s)		//	3
			{
				if(s>60){
					cout<<"Your seconds are invalid"<<endl;
					return;
				}
				sec=s;
			}/////////////////////////
			int get_hr()			//	4
			{
				return hr;
			}
			int get_min()		//	5
			{
				return min;
			}
			int get_sec()		//	6
			{
				return sec;
			}//////////////////////	
			void modify_hr(int h)	//	7
			{
				hr=h;
			}
			void modify_min(int m)	//	8
			{
				min=m;
			}
			void modify_sec(int s)	//	9
			{
				sec=s;
			}//////////////////////
								   	//		set,get and modify	 date //
			void set_date(int d)	//	10
			{
				if(d>31){
				    cout<<"Your date is invalid"<<endl;
				    return ;
					}
				else
		   			date=d;
			   }
		    void set_month(int m)	//	11
			{
				if(m>12){
				    cout<<"Your month is invalid :"<<endl;
				    return ;
				}
				else
		    		month=m;
			}
			void set_year(int y)	//	12
			{
				year=y;
			}/////////////////////////
			int get_date()		//	13
			{
				return date;
			}
			int get_month()	//	14
			{
				return month;
			}
			int get_year()	//	15
			{
				return year;
			}//////////////////////	
			void modify_date(int d)	//	16
			{
				if(d>31){
					cout<<"Your date is invalid:"<<endl;
					return;
				}
				date=d;
			}
			void modify_month(int m)	//	17
			{
				if(m>12){
					cout<<"Your month is invalid:"<<endl;
					return;
				}
				month=m;
			}
			void modify_year(int s)		//	18
			{
				sec=s;
			}
			///////////////////////////////////////				full time
			void get_full_time()	//	19
			{
				cout<<"Enter time in formate ( hour:min:sec ):- ";
				cin>>str1;
				hr=test1(str1,hr);
				min=test1(str1,min);
				sec=test1(str1,sec);
			}///////////			20
			void short_Time() 		//   short   time
			{
				int foo;
				if(hr>24 || min>60 || sec>60){
					cout<<"Your time is invalid"<<endl;
					return;
				}
				if(hr>12 && hr<24){
				 		switch(hr){
				 			case 13: foo=1; break;	case 14: foo=2; break;	case 15: foo=3; break;
			 				case 16: foo=4; break;	case 17: foo=5; break;	case 18: foo=6; break;
			 				case 19: foo=7; break;	case 20: foo=8; break;	case 21: foo=9; break;
			 				case 22: foo=10; break;	case 23: foo=11; break;	case 00: foo=12; break;
							 }
							 cout<<" The Short time is "<<foo<<":"<<min<<":"<<sec<<" PM"<<endl;
							 }
					 else{
					 cout<<" The Short time is "<<hr<<":"<<min<<":"<<sec<<" AM"<<endl;}
			}
			////////////////////////////////////////				get full date and short date
			void get_full_date()	//	21
			{
				cout<<"Enter date in formate: dd/mm/yyyy :- ";
				cin>>str2;
				date=test2(str2,date);
				month=test2(str2,month);
				year=test2(str2,year);
				if(date>31 || month>12)
	                cout<<"You Enter invalid date:"<<endl;	
			}
			
			void short_Date(){		//    22   short date
				if(date>31 || month>12){
					cout<<"Your date is invalid "<<endl;
					return ;
				}
				else{
					cout<<"The short date is "<<date<<"/"<<month<<"/"<<year<<endl;
				}
			}
			void long_Date_and_Time()		//	23
			{
			 	cout<<"The long date is "<<date<<"/"<<month<<"/"<<year;
			 	if(hr>12 && hr<24){
				 		switch(hr){
				 			case 13: hr=1; break;	case 14: hr=2; break;	case 15: hr=3; break;
			 				case 16: hr=4; break;	case 17: hr=5; break;	case 18: hr=6; break;
			 				case 19: hr=7; break;	case 20: hr=8; break;	case 21: hr=9; break;
			 				case 22: hr=10; break;	case 23: hr=11; break;	case 00: hr=12; break;
							 }
							 cout<<" and the long time is "<<hr<<":"<<min<<":"<<sec<<" PM"<<endl;
							 }
				 else{
					 cout<<" and the long time is "<<hr<<":"<<min<<":"<<sec<<" AM"<<endl;}
			}
			void english_date()		//  English date	//	24
			{
				cout<<"The date is "<<date<<"th";
				switch(month)
				{
					case 01: cout<<" Jan ,"<<year;
						break;
					case 02: cout<<" Feb,"<<year;
						break;
					case 03: cout<<" March,"<<year;
						break;
					case 04: cout<<" April,"<<year;
						break;
					case 05: cout<<" May,"<<year;
						break;
					case 06: cout<<" June,"<<year;
						break;
					case 07: cout<<" July,"<<year;
						break;
					case 8: cout<<" Agust,"<<year;
						break;
					case 9: cout<<" September,"<<year;
						break;
					case 10: cout<<" October,"<<year;
						break;
					case 11: cout<<" November,"<<year;
						break;
					case 12: cout<<" December,"<<year;
						break;
					default: {
				        cout<<"Your date is invalid:"<<endl;
				        break;
					    }
				}
			
				cout<<endl;
			}
			~Date_and_Time()
			{
				cout<<"Destructor is called"<<endl;
			}
};
int main(){
	class Date_and_Time d1;
	/////////////////////	set time
	d1.set_hr(20);
	d1.set_min(16);
	d1.set_sec(45);
	///			modify time
//	d1.modify_hr(8);
//	d1.modify_min(32);
//	d1.modify_sec(56);
	///			get time
//	cout<<d1.get_hr()<<endl;
//	cout<<d1.get_min()<<endl;
//	cout<<d1.get_sec()<<endl;
//	/////////////////////		set  date
	d1.set_date(27);
	d1.set_month(3);
	d1.set_year(2017);
	///			modify  date
//	d1.modify_date(30);
//	d1.modify_month(10);
//	d1.modify_year(2018);
	///							get	date
//	cout<<d1.get_date()<<endl;
//	cout<<d1.get_month()<<endl;
//	cout<<d1.get_year()<<endl;
//	////////////////////
	//////////////////////      full and short time
//	d1.get_full_time();
	d1.short_Time();
//	//////////////////////		full and short date
//	d1.get_full_date();
	d1.short_Date();
	///////////////////////		long date and time
	d1.long_Date_and_Time();
	//////////////////////		English Date
	d1.english_date();	
}
