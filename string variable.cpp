#include <iostream>
using namespace std;
#include <string>
class Student
{
    public:
        string name;
        int roll_no;
};
int main()
{
    Student s;
    s.name = "Ganesh";
    s.roll_no = 2;
    cout << s.name << " " << s.roll_no << endl;
    return 0;
}
