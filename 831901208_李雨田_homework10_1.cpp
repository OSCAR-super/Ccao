#include <iostream>
#include <string>

using namespace std;

class Fractions{
	friend double add(const Fractions& a,const Fractions& b);
	friend double sub(const Fractions& a,const Fractions& b);
	friend double mul(const Fractions& a,const Fractions& b);
	friend double div(const Fractions& a,const Fractions& b);
	friend ostream& operator<<(ostream&, const Fractions&);
    friend istream& operator>>(istream&, Fractions&);
	private:
		int num;
		int denom;
	public:
		explicit Fractions(int =1,int=1);
		void display() const;
};
Fractions::Fractions(int n,int d){
	if(d==0){
		cout<<"The denominator is invalid."<<endl;
	}
	else{
		num=n;
		denom=d;
	}
}
void Fractions::display() const{
	cout<<"The numerator is :"<<num<<endl;
	cout<<"The denominator is :"<<denom<<endl;
}
double add(const Fractions& a,const Fractions& b){
	if((a.denom*b.denom)==0){
		cout<<"The denominator is invalid."<<endl;
	}
	else{
		return (1.0*(a.num*b.denom+b.num*a.denom)/(a.denom*b.denom));
	}
    return 0;
}
ostream& operator<<(ostream& out, const Fractions& f)
{
	if(f.denom==0){
		cout<<"The denominator is invalid."<<endl;
	}
	else{
		cout<<f.num<<"/"<<f.denom<<endl;

	}
	return out;
}
istream& operator>>(istream& in,Fractions& f)
{
	int value;
	string temp;
	int divLocation;
	in >> value; // accept the first number
    getline(cin,temp);
    divLocation = temp.find('/');
    if(divLocation>=0){
    	f.num=value;
	}
	if (divLocation>=0) temp.replace(divLocation,1," ");
	f.denom= atof(temp.c_str());
	return in;
}
double sub(const Fractions& a,const Fractions& b){
	if((a.denom*b.denom)==0){
		cout<<"The denominator is invalid."<<endl;
	}
	else{
		return (1.0*(a.num*b.denom-b.num*a.denom)/(a.denom*b.denom));
	}
    return 0;
}
double mul(const Fractions& a,const Fractions& b){
	if((a.denom*b.denom)==0){
		cout<<"The denominator is invalid."<<endl;
	}
	else{
		return (1.0*(a.num*b.num)/(a.denom*b.denom));
	}
    return 0;
}
double div(const Fractions& a,const Fractions& b){
	if((a.denom*b.num)==0){
		cout<<"The denominator is invalid."<<endl;
	}
	else{
		return (1.0*(a.num*b.denom)/(a.denom*b.num));
	}
    return 0;
}

int main(){
	Fractions fra;
	cout<<"Please enter a number with form a/b :"<<endl;
	cin>>fra;
	cout<<"The number is :"<<fra<<endl;
	return 0;
}
