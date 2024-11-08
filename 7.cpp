#include<iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person() : name(""), age(0) {} // Default constructor

    // Overload the extraction (>>) operator
    friend istream& operator>>(istream& is, Person& p)
    {
        cout << "Enter name: ";
        is >> p.name;
        cout << "Enter age: ";
        is >> p.age;
        return is;
    }

    // Overload the insertion (<<) operator
    friend ostream& operator<<(ostream& os, const Person& p)
    {
        os << "Name: " << p.name << ", Age: " << p.age;
        return os;
    }
};

int main()
{
    Person p;
    
    // Use overloaded >> operator to input data
    cin >> p;

    // Use overloaded << operator to output data
    cout << p << endl;

    return 0;
}
