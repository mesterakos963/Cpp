#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name;
    string frend;
    int age;
    char friend_sex = ' ';
    string simple_error = "you're kidding, dude";
    string name;
    //------------------------------------------------------------------------------------------------------------------------------------------------
    cout << "Hello, enter your first name followed by 'enter'." << endl;
    cin >> first_name;
    cout << "Hello, " << first_name << "!" << endl;
    cout << "How are you? Im fine! I miss you!" << endl;
    cout << "A few more line..." << endl;
    cout << "Who's your best friend? (rules are the same) " << endl;
    cin >> frend;
    cout << "Have you seen " << frend << " lately?" << endl;
    cout << "Your friend is male(m) or female(f)?" << endl;
    cin >> friend_sex;
    if (friend_sex == 'm')
    {
        cout << "If you see your friend, ask him to call me." << endl;
    }
    else if (friend_sex == 'f')
    {
        cout << "If you see your friend, ask her to call me ;) :* <3 " << endl;
    }
    cout << "Enter the age of the recipient." << endl;
    cin >> age;
    if (age <= 0 || age >= 110)
    {
        cout << simple_error;
    }
    cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
    if (age <= 12)
    {
        cout << "Next year you will be " << age + 1 << " years old." << endl;
    }
    else if (age == 17)
    {
        cout << "Next year you will able to vote ;) " << endl;
    }
    else if (age >= 70)
    {
        cout << "I hope you enjoy your retirement :) " << endl;
    }

    cout << "Please enter your name!" << endl;
    cin >> name;
    cout << endl << "Youre sincerely, " << endl << endl << name;
    return 0;
}
