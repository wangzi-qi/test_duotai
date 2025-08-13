#include <iostream>
#include <string>
using namespace std;

//基类animal
class animal
{

    protected:
        string name;
    public:
        animal(string n):name(n){};
        virtual void sound() const =0;
        //{
          //  cout<<"animal makes a sound"<<endl;
    
        //}

        virtual ~animal() //确保子类对象被正确析构
        {
            cout<<"animal destroyed"<<endl;
        }
};

class dog:public animal
{
    public:
        dog(string n):animal(n){}
        
        void sound()const override{
            cout<<"dog called:"<<name<<" makes a sound:wang wang"<<endl;
        }

        ~dog()
        {
            cout<<"dog destroyed"<<endl;
        }
};

class cat:public animal
{
    public:
        cat(string n):animal(n){}
        
        void sound()const override{
            cout<<"cat called:"<<name<<" makes a sound:wang wang"<<endl;
        }

        ~cat()
        {
            cout<<"cat destroyed"<<endl;
        }
};

template <typename T>
T add(T a,T b){
    return a+b;
}

template <typename T>
class fun
{
    public:
        T fu(T x)
        {
            return x;
        }
};
int main()
{
    animal *animalptr;
    animalptr = new dog("d");
    animalptr -> sound();
    delete animalptr;
     dog dog1("wangcai");
     dog1.sound();
     cat cat1("coke");
     cat1.sound();
     cout << add(1.1,1.2)<<endl;
     fun<int> fun1;
     cout<<fun1.fu(3) <<endl;
     fun <string> fun2;
     cout<<fun2.fu("wangwang")<<endl;
     return 0;

}