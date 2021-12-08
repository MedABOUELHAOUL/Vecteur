// vectreur3D.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Vecteur3D.h"
using namespace Geom;
int main()
{
 /*  int a = 0; // decla+ init
    int b(a); // declara+init 
    b = a;// 
    */

    Vecteur3D v1;
    Vecteur3D v2(1, 2, 30);
    Vecteur3D v3(v2);

   v1 = v2;// affectation
   //v1 = v1;// auto-Affectation
   std::cout << v1.operator[](0) << std::endl;
   v1.operator[](0) = 3;
    std::cout << v1.operator[](0)<<std::endl;

    v1.afficher();
    v2.afficher();
    v3.afficher();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
