#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <numeric>
class Person {
public:
string name;
int age;

// getters
virtual void putdata () {
cout << this->name << " " << this->age << " ";
}
//setters

virtual void getdata () {
cin >> this->name;
cin >> this ->age;
}
};

class Professor : public Person {

int _publications;
static int _cur_id;
int _local_id;
public:
Professor () { _cur_id++;
_local_id = _cur_id;
}
//getters
void putdata () {
Person::putdata();
cout << _publications << " " << _local_id << endl;
}
//setters
void getdata () {
Person::getdata ();
cin >> _publications;
}

};

class Student : public Person {

vector<int> _marks;
static int _cur_id;
int _local_id;

public:

Student () {
_cur_id++;
_local_id = _cur_id;
}
//getters

void putdata () {
Person::putdata();
cout << std::accumulate(_marks.begin(),_marks.end(),0) << " " << _local_id << endl;
}
//setters
void getdata () {
Person::getdata();
int n;
for (int i =0; i<6; i++){
cin >> n;
_marks.push_back(n);
}
}
};

int Professor::_cur_id = 0;
int Student::_cur_id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

