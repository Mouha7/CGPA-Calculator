#include "students.h"

Student::Student() {
    cout << "Nom de l'étudiant : ";
    getline(cin, name);
    cout << "Nom de la Classe : ";
    getline(cin, classStudent);
    cout << "Donnez le nombre de note : ";
    cin >> nombreNote;
    notes = new double[nombreNote];
    coefficient = new int[nombreNote];
    cout << "Saisir les (" << nombreNote << ") note(s)" << endl;
    for(int i = 0; i < nombreNote; i++) {
        cout << "Note N˚" << (i+1) << " : ";
        cin >> notes[i];
        cout << "Coef N˚" << (i+1) << " : ";
        cin >> coefficient[i];
    }
    cin.get();
}

void Student::displayStudent() {
    double sumNote = 0, average;
    int sumCoefficient = 0;

    cout << "Nom Étudiant : " << name << endl;
    cout << "Classe de l'Étudiant : " << classStudent << endl;
    cout << "Id     Note     Coef" << endl;
    for(int i = 0; i < nombreNote ; i++) {
        cout << (i+1) << "      " << notes[i] << "       " << coefficient[i] << endl;
        sumNote += notes[i]*coefficient[i];
        sumCoefficient += coefficient[i];
    }
    average = sumNote/sumCoefficient;
    cout << "Moyenne : " << average << endl;
}