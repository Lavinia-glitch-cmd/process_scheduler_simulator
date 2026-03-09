#include <iostream>
#include <cstring>
using namespace std;

class proces
{
    private:
        int pid=0, prioritate=0, timp_ramas=0, timp_executie=0, timp_astepare=0;
        char *nume_proces;
        bool proces_terminat=false;

    public:
        proces()
        {
            nume_proces = new char[1];

        }

        

};

class coada_de_procese
{
    private:


    public:

};

class cpu
{
    private:
        

    public:
};

class planificator
{
    private:

    public:

};

int main()
{
    int optiune;
    do 
    {
        cout<<"\n== Process scheduler ==\n"
        cout<<"1. Add process\n";
        cout<<"2. Show processes\n";
        cout<<"3. Run FCFS\n";
        cout<<"4. Run Round Robin\n";
        cout<<"5. Run Priority\n";
        cout<<"6. Exit\n";
    }

    cout<<"optiune";cin>>option;
    switch(option)
    {
        case 1:
            planificator.adauga_proces();
            break;
        
        case 2:
            planificator.afiseaza_procese();
            break;

        case 3:
            planificator.ruleaza_fcfs();
            break;

        case 4:
            planificator.ruleaza_round_robin();
            break;

        case 5:
            planificator.ruleaza_dupa_prioritate();
            break;



    }
}