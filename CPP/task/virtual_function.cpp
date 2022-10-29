#include <iostream>
using namespace std;

class Employee
{
    string EmployeeName;
    int id;

public:
    Employee(string n, int id);
    string getname();
    virtual int raiseSalary() = 0;
};
Employee::Employee(string n, int id)
{
    EmployeeName = n;
    this->id = id;
}

string Employee::getname()
{
    return EmployeeName;
}
//****************************************************************
class Engineer : public Employee
{
private:
    int Salary1;
    int Percentage;

public:
    Engineer(string n, int id, int Percentage, int Salary1) : Employee(n, id)
    {
        this->Salary1 = Salary1;
        this->Percentage = Percentage;
    }
    int getsalary()
    {
        return Salary1;
    }
    int raiseSalary()
    {
        return ((Salary1 * Percentage) / 100);
    }
};
//****************************************************************
class TeamLeader : public Employee
{
private:
    int Salary2;
    int Percentage;

public:
    TeamLeader(string n, int id, int Salary2, int Percentage) : Employee(n, id)
    {
        this->Salary2 = Salary2;
        this->Percentage = Percentage;
    }
    int getsalary()
    {
        return Salary2;
    }
    int raiseSalary()
    {
        return ((Salary2 * Percentage) / 100);
    }
};
//****************************************************************
class Manager : public Employee
{
private:
    int Salary3;
    int Percentage;

public:
    Manager(string name, int id, int Salary3, int Percentage) : Employee(name, id)
    {
        this->Salary3 = Salary3;
        this->Percentage = Percentage;
    }
    int getsalary()
    {
        return Salary3;
    }
    int raiseSalary()
    {
        return ((Salary3 * Percentage) / 100);
    }
};
//****************************************************************

int main()
{
    cout << "Welcome to Salary Increase Portal :" << endl;
    cout << endl;
    Employee *e[3];

    string name;
    int Id, choice, Per, salary;

    cout << "Enter your Name : ";
    cin >> name;
    cout << "Enter your Id : ";
    cin >> Id;
    cout << "Emter your Salary : ";
    cin >> salary;
    cout << endl;

    while (1)
    {
        cout << "1] Engineer " << endl
             << "2] TeamLeader" << endl
             << "3] Manager" << endl;

        cout << "Enter your chocice : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter Percentge for Engineer Salary Raise :";
            cin >> Per;
            e[0] = new Engineer(name, Id, salary, Per);
            cout << "Rise in salary is : " << e[0]->raiseSalary() << endl;
            cout << endl;
            break;

        case 2:
            cout << "Enter Percentge for Manager Salary Raise :";
            cin >> Per;
            e[1] = new Manager(name, Id, salary, Per);
            cout << "Rise in salary is : " << e[1]->raiseSalary() << endl;
            cout << endl;
            break;

        case 3:
            cout << "Enter Percentge for TeamLeader Salary Raise :";
            cin >> Per;
            e[2] = new TeamLeader(name, Id, salary, Per);
            cout << "Rise in salary is : " << e[2]->raiseSalary() << endl;
            cout << endl;
            break;

        default:
            cout << "Enter a Valid choice !!!!!!" << endl;
            break;
        }
    }

    return 0;
}
