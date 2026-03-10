#include <iostream>
#include <cstring>
using namespace std;


class proces
{
    private:
        int pid,prioritate,timp_ramas, timp_exec, timp_asteptare;
        bool proces_terminat;
        char *nume;
        static int numar_procese;
    
    public:
        proces(int pid, int prioritate, int timp_exec, int proces_terminat, char *nume);
        ~proces();

        void citire();
        void afisare();
};

int proces::numar_procese=0;

proces::proces(int pid, int prioritate, int timp_exec, int proces_terminat, char *nume):
    pid(numar_procese++),prioritate(prioritate), timp_exec(timp_exec),timp_ramas(timp_exec),timp_asteptare(0), proces_terminat(proces_terminat)
{
    if(nume!=nullptr)
        {
            this->nume=new char[(strlen(nume)+1)];
            strcpy(this->nume, nume);
        }
    else 
    {
        this->nume=new char[1];
        strcpy(this->nume, "");

    }
}
proces::~proces()
{
    if(this->nume !=nullptr) ////to-do: fix this bug 
    {
        delete[] nume;
        this->nume=nullptr;
    }
}
void proces::citire()
{
    char buffer[100];
    cout<<"introdu numele procesului: ";cin>>buffer;
    delete[] nume;                                               //eliberez memoria pt nume nou
    nume= new char[(strlen(buffer)+1)];

    cout<<"pid: ";cin>>pid;
    cout<<"prioritate: ";cin>>prioritate;
    cout<<"timp de executie: ";cin>>timp_executie;
}
void proces::afisare()
{

}

class scheduler()
{
    private:

    public:
        
};
int main()
{
    int optiune;
    cin>>optiune;
    do 
    {
        cout << "1. Add process\n";
        cout << "2. Show processes\n";
        cout << "3. Run FCFS\n";
        cout << "4. Run Priority\n";
        cout << "5. Exit\n";

        cout << "Optiune: ";
        cin >> optiune;

        switch(optiune)
        {
            case 1:
                char *buffer;
                cout<<"Numele procesului: "; cin>> buffer;
                scheduler.adauga_proces(buffer);

            case 2:
                scheduler.afiseaza_procese();

            case 3:
                scheduler.ruleaza_fcfs();

            case 4:
                scheduler.ruleaza_dupa_prioritate();
        }
    }while(optiune!=5);
}