#include <iostream>

using namespace std;

class BaseMember
{
    public:
    
    BaseMember()
    {
        cout << "BaseMember Constructor" << endl;
    }
    
    ~BaseMember()
    {
        cout << "BaseMember Destructor" << endl;
    }
};

class DerivedMember
{
    public:
    
    DerivedMember()
    {
        cout << "DerivedMember Constructor" << endl;
    }
    
    ~DerivedMember()
    {
        cout << "DerivedMember Destructor" << endl;
    }
};


class StaticMember
{
    public:
    
    StaticMember()
    {
        cout << "StaticMember Constructor" << endl;
    }
    
    ~StaticMember()
    {
        cout << "StaticMember Destructor" << endl;
    }
};

class Base
{
    public:
    
    Base()
    {
        cout << "Base Constructor" << endl;
    }
    
    ~Base()
    {
        cout << "Base Destructor" << endl;
    }
};

class OtherBase
{
    public:
    
    OtherBase()
    {
        cout << "OtherBase Constructor" << endl;
    }
    
    ~OtherBase()
    {
        cout << "OtherBase Destructor" << endl;
    }
};

class Derived : public Base, OtherBase
{
    public:
    
    Derived()
    {
        cout << "Derived Constructor" << endl;
    }
    
    ~Derived()
    {
        cout << "Derived Destructor" << endl;
    }
    static StaticMember m_static;
    
};

StaticMember m_static;

int main()
{
   Derived derived;
   
   cout << "****************************" << endl; 
   
   return 0;
}

