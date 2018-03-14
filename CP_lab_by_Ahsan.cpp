#include<iostream>
using namespace std;
int smallest(int a,int b,int c){
	if(a<b && a<c){
		return a;
	}
	else if(b<a && b<c){
		return b;
	}
	else
		return c;
}
float smallest(double a, double b, double c){
	a=int(a);
	b=int(b);
	c=int(c);
	if(a<b && a<c){
		return a;
	}
	else if(b<a && b<c){
		return b;
	}
	else
		return c;
}
string smallest(string a, string b, string c){
	a=int(a);
	b=int(b);
	c=int(c);
	if(a<b && a<c){
		return a;
	}
	else if(b<a && b<c){
		return b;
	}
	else
		return c;
}
class Distance{
	private:
		int inches;
		int feet;
	public:
		Distance(){
			cout<<"default constructor is called"<<endl;
		}
		Distance(int x,int y){
			inches=x;
			feet=y;
			cout<<"with parameter constructor is called"<<endl;
		}
		void set(int in,int f){
			inches=in;
			feet=f;
		}
		void show(){
			cout<<"The length in  inches is :"<<inches<<endl;
			cout<<"The length in feet is :"<<feet<<endl;
		}
		void operator < (Distance d1){
			if(inches < d1.inches  &&  feet < d1.feet){
				cout<<inches<<" "<<feet<<endl;
			}
			cout<<d1.inches<<" "<<d1.feet<<endl;
		}
		void operator +=(Distance d2){
			inches+=d2.inches;
			feet += d2.feet;
			cout<< d2.inches<<" "<<d2.feet<<endl;
		}
		void operator -- (){
			feet--;
			inches--;
			cout<<inches<<" "<<feet<<endl;
		}
	void operator -- (){
			--feet;
			--inches;
			cout<<inches<<" "<<feet<<endl;
		}
	void operator =(Distance d2){
		inches = d2.inches;
		feet = d2.feet;
		cout<<inches<<" "<<feet<<endl;
	}
	void operator << (Distance d2){
		cout<<inches<<"  "<<feet<<endl;
		cout<<d2.inches<<" "<<d2.feet;
	}
	void operator >> (Distance d2){
		cin<<inches;
		cin>>feet;
		cin>>d2.inches;
		cin>>d2.feet;
	}
};


int main(){
	cout<<smallest(2,4,6)<<endl;
	cout<<smallest(1.2,3.5,1.0)<<endl;
	Distance d1,d2;
	d1.set(2,4);
	d2.set(3,5);
	d2<d1;
	d1 +=d2;
	--d1;
	d2--;
	d1<<d2;
	return 0;
}
