#include <iostream>

using namespace std;

class LocalMember
{
    public:
    
    LocalMember()
    {
            cout << "LocalMember Constructor" << endl;
    }
    ~LocalMember()
    {
        cout << "LocalMember Destructor" << endl;
    }
};

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
        
    StaticMember( )
    {
        cout << "StaticMember Constructor" << endl;
    }
    ~StaticMember()
    {
        cout << "StaticMember Destructor" << endl;
    }
};
  
class StaticMember2
{
    public:
        
    StaticMember2( )
    {
        cout << "StaticMember2 Constructor" << endl;
    }
    ~StaticMember2()
    {
        cout << "StaticMember2 Destructor" << endl;
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
    private:
    
    BaseMember m_base;
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
    
    Derived() :Base()
    {
        LocalMember local;
        
        cout << "Derived Constructor" << endl;
    }
    
    ~Derived()
    {
        cout << "Derived Destructor" << endl;
    }
    private:
    
    DerivedMember m_derived;
    static StaticMember  m_staticMember;
    static StaticMember2  m_staticMember2;
};

StaticMember  m_staticMember;
StaticMember2 m_staticMember2;

int main()
{
    Derived myderived;
    
    cout << "**************************" << endl; 
   
    return 0;
}

