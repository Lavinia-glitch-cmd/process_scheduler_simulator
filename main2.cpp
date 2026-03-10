#include <iostream>
#include <cstring>
using namespace std;


class proces
{
    private:
        int pid,prioritate,timp_ramas, timp_executie, timp_asteptare;
        bool proces_terminat;
        char *nume;
    
    public:
        proces();
        ~proces();

        void citire();
        void afisare();
};

proces::proces()
{
    pid=0;prioritate=0;timp_ramas=0;timp_executie=0;timp_asteptare=0;
    proces_terminat=false;
    nume = strcpy(new char[1], "");
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