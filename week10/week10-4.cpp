#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    string name;
    Cat(string _name){ ///物件建構子 constructor (左邊沒有void)
        name = _name;
    } ///沒有 return 值
    void print(){
        cout << "My name is " << name << ".\n";
    }
};
int main()
{
    Cat cat1("小白"), cat2("小花");
    cat1.print();
    cat2.print();
}
