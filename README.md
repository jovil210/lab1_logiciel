# Laboratoire 1 - Architecture des logiciels

Le laboratoire a pour but de jouer une vidéo avec l'API DirectShow de Microsoft. Le programme doit effectuer les commandes suivantes lorsqu'on appuie sur les touches correspondantes:
* P: Play/Pause
* A: Accélérer
* R: Retour au début
* Q: Quitter

## Installation

Installer [Visual Studio](https://visualstudio.microsoft.com/fr/downloads/) et ouvrir le projet "Laboratoire1.sln".

## Usage
Il est important de garder les lignes suivantes au début du code:
```cpp
#pragma comment(lib, "Strmiids.lib")
#include "lecture.h"
```
Le programme démarre la vidéo indiqué à la ligne suivante:

```cpp
hr = g_pPlayer->OpenFile(L"Example.avi");
```
Il est important d'écrire le nom du fichier avec le bon emplacement de dossier. L'example devrait fonctionner puisque "Example.avi" se trouve dans la repo.

Finalement, la bibliothèque "lecture.h" s'occupe de faire quelque initialisation avec l'API DirectShow et la boucle principale se fait dans la fonction
```cpp
hr = VideoLoop();
``` 
La vidéo devrait démarrer et faire les 4 fonctions nommés plus haut:
* P: Play/Pause
* A: Accélérer
* R: Retour au début
* Q: Quitter

## License
[MIT](https://choosealicense.com/licenses/mit/)