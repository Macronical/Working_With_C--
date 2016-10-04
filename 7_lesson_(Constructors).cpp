//A constructor is a set of commands you choose that run when you set/make an object.
//(each object has it's own variables)

#include <iostream>
#include <string>

using namespace std;

class SebJor{
    public:
        SebJor(string z){
            setName(z);
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};

int main()
{
    SebJor so("Lucky Bucky roberts");
    cout << so.getName() << endl;

    SebJor so2("Sally mcsalad");
    cout << so2.getName();
    return 0;
}
