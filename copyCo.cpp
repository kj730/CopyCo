#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
class copyCo{
    private:
        int m_x;
        string m_first;
    public:
        copyCo();
        copyCo(int length, string name);
        copyCo(const copyCo&);
        ~copyCo();
        string getName();
        int getLength();

};

copyCo::copyCo()
{

}

//constructor
copyCo::copyCo(int length, string name){
    m_x = length;
    m_first = name;
    cout << "Regular constructor called" << endl;
}

copyCo::copyCo(const copyCo& rhs)
{
    m_x = rhs.m_x;
    m_first = rhs.m_first;
    cout << "Copy constructor called" << endl;
}
copyCo::~copyCo()
{
    cout << "destructor called\n";
}

string copyCo::getName(){
    return m_first;
}
int copyCo::getLength(){
    return m_x;
}

int main(int argc, char** argv){
    string length = argv[1];
    string name = argv[2];
    stringstream convert(length);
    int x = 0;
    convert >> x;
    copyCo tester(x, name);
    //cout << tester.getName() << endl << tester.getLength();
    //copyCo tester2(tester);

    std::vector<copyCo> aVector(10);
    
    aVector.push_back(tester);
    aVector.push_back(tester);
    aVector.push_back(tester);
    aVector.push_back(tester);
    aVector.push_back(tester);
    aVector.push_back(tester);
   

}