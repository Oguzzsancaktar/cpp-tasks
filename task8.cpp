#include <iostream>
#include <cstring>
#include <cstdlib>
#include <regex>

using namespace std;

class Student
{
public:
      string name;
      string surname;
      int schoolNo;
};

int main()
{
      bool validFlag = true;

      Student studentObject;
      regex integer_expr("(\\+|-)?[[:digit:]]+");
      regex word_regex("(\\w+)");

      try
      {
            cout << "Enter your name :" << endl;

            while (true)
            {
                  if (regex_match(studentObject.name, word_regex))
                  {
                        cout << "Enter your name :" << endl;
                        cin >> studentObject.name;
                        throw 10;
                  }
                  else
                  {
                        break;
                  }
            }

            cout << "Enter your surname :" << endl;
            while (true)
            {
                  if (regex_match(studentObject.surname, word_regex))
                  {
                        cout << "Enter your surname :" << endl;
                        cin >> studentObject.surname;
                        throw 20;
                  }
                  else
                  {
                        break;
                  }
            }

            cout << "Enter your school number :" << endl;

            while (true)
            {
                  if (regex_match(studentObject.surname, integer_expr))
                  {
                        cout << "Enter your school number :" << endl;
                        cin >> studentObject.schoolNo;
                        throw 30;
                  }
                  else
                  {
                        break;
                  }
            }
      }
      catch (int e)
      {
            switch (e)
            {
            case 10:
                  cout << "Name cant be include number ! " << e << '\n';

                  break;

            case 20:
                  cout << " Surname cant be include number ! " << e << '\n';

                  break;
            case 30:
                  cout << " School number cant be include char ! " << e << '\n';

                  break;
            default:
                  break;
            }
      }

      cout << studentObject.name << " " << studentObject.surname << " " << studentObject.schoolNo << endl;

      return 0;
}