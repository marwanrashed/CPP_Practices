#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    private:
    int _age, _standard;
    string _first_name, _last_name;
    public:
    //getters
    int get_age()const{return _age;}
    int get_standard()const{return _standard;}
    string get_first_name()const{return _first_name;}
    string get_last_name()const{return _last_name;}
    //setters
    void set_age(int age){this->_age = age;}
    void set_standard (int stad){this->_standard=stad;}
    void set_first_name(string first_name) {this->_first_name=first_name;}
    void set_last_name(string last_name) {this->_last_name = last_name;}

    string to_string(){return  std::to_string(_age) + "," + _first_name + "," + _last_name + "," + std::to_string(_standard);}


};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
