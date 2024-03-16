#include "students.h"

int main() {
    int choice;
    vector <Student*> student;

    do {
        cout << "1. Ajouter un étudiant." << endl;
        cout << "2. Afficher le(s) étudiant(s)." << endl;
        cout << "3. Quitter." << endl;
        cout << "Faites votre choix : " ;
        cin >> choice;
        cin.get();
        switch(choice) {
            case 1:
                {
                    Student * st = new Student;
                    student.push_back(st);
                    break;
                }
            case 2:
                for(int i = 0; i < student.size(); i++) {
                    cout << "_____________________________" << endl;
                    student[i]->displayStudent();
                }
                cout << "_____________________________" << endl;
                break;
            case 3:
                break;
        }
    } while(choice != 3);
    cout <<"Fin du programme "<<endl;
}