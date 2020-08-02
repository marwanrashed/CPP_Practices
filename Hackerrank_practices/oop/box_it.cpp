#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
// The class should have the following functions : 
class Box {
    public:
    Box ();
    Box(int,int,int);
    Box(Box &);
// Getters
    int getLength()const;
    int getBreadth()const;
    int getHeight()const;
    long long CalculateVolume()const;
// Operator overloading
    bool operator<(Box&b);
    friend ostream& operator<< (ostream& output, const Box& B){
        output << B._l << " " << B._b << " " << B._h;
        return output;
    }
    private:
    int _l, _b, _h;


};
// Constructors: 
Box::Box(){
    _l = 0;
    _b = 0;
    _h = 0;
}
Box::Box(int length,int breadth,int height): _l(length),_b(breadth),_h(height){}
Box::Box(Box &B){
    _l = B._l;
    _b = B._b;
    _h = B._h;
}

// getters
int Box::getLength()const{ return _l;} // Return box's length
int Box::getBreadth ()const{return _b;} // Return box's breadth
int Box::getHeight ()const {return _h;}  //Return box's height
long long Box::CalculateVolume()const {return (long long) _l*_b*_h;} // Return the volume of the box

//Overload operator < as specified
bool Box::operator<(Box& B){
    if (_l < B._l)
        return true;
    else if (_b < B._b && _l == B._l)
        return true;
    else if (_h < B._h && _l == B._l && _b == B._b)
        return true;
return false;
}



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
