#include <iostream>
using namespace std;

class student
{
private:
    string name;

public:
    void set_data(string n)
    {
        name = n; // receive a string value and initialize name with it
    }

    string help_to_print_data()
    {
        return name;
    }
};

int main()
{
    student s1;

    string n = "Samius Sazin";
    s1.set_data(n); // passing string to function

    cout << "Name : " << s1.help_to_print_data() << endl;
                        //receive the ans from func then return
}