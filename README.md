# Laboratoire 1 - Architecture des logiciels

Le laboratoire a pour but de jouer une vidéo avec l'API DirectShow de Microsoft. Le programme doit effectuer les commandes suivantes lorsqu'on appuie sur les touches correspondantes:
* P: Play/Pause
* A: Accélérer
* R: Retour au début
* Q: Quitter

## Installation

Installer [Visual Studio](https://visualstudio.microsoft.com/fr/downloads/) et clôner le projet directement dans visual studio ou par la commande suivante:
```
git clone https://github.com/jovil210/lab1_logiciel.git
```

et ouvrir "Laboratoire1.sln" avec Visual Studio.

Il ne devrait pas y avoir d'erreur sinon, vérifier que la première ligne est bel et bien 

```cpp
#pragma comment(lib, "Strmiids.lib")
```
Sinon, ouvrir  *Projet->Propriétés->Éditeur de liens->Système* et modifier Sous-Système pour avoir 

**Console (/SUBSYSTEM:CONSOLE)**

## Usage
Le programme démarre la vidéo indiqué à la ligne suivante:

```cpp
hr = g_pPlayer->OpenFile(L"Example.avi");
```
Il est important d'écrire le nom du fichier avec le bon emplacement de dossier. L'example devrait fonctionner puisque "Example.avi" se trouve dans la repo.

La vidéo devrait démarrer et faire les 4 fonctions nommées plus haut:
* P: Play/Pause
* A: Accélérer
* R: Retour au début
* Q: Quitter

N.B: Les lettres doivent être tapées directement dans la console ouverte par Visual Studio et non sur la vidéo

## License
[MIT](https://choosealicense.com/licenses/mit/)