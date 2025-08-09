#include <iostream>

using namespace std;

// class of student...
class Sttudent
{
private:
    string name;
    int age;
    float greade;
public:
    void setName(const string n){
        if(n >= 3)
            name = n
        else
            cout << "Error!";
    }
    
};



int main() {
    return 0;
}