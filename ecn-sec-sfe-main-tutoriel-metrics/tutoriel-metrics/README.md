# Outils nécessaires pour le TD

## Comment lire le sujet de TD

Ce sujet a pour but de vous faire manipuler des outils pour analyser du code C 
et en améliorer la qualité. Les éléments à réaliser sont indiqués visuellement par le style suivant :

> Ceci est un exercice à pratiquer

Il vous faudra quand même lire le texte qui accompagne les exercices pour 
comprendre ce qu'il y a à faire...

## Les outils nécessaires pour le TD

Pour ce TD (et le TP) vous aurez besoin de [Frama-C](https://frama-c.com) et de
[cppchek](https://cppcheck.sourceforge.io/#premium).

**Frama-C** est une plateforme open-source pour l'analyse du code source 
en langage C. Elle est développée par le **CEA-List** 
et l'**Inria**. Frama-C offre différents outils pour travailler 
sur un code source, de la navigation dans des projets 
jusqu'à la certification de logiciels critiques.

**Cppcheck** est un analyseur statique pour le code C/C++. Le créateur 
et développeur principal est **Daniel Marjamäki** et le code est libre sous 
la Licence Publique Générale de GNU. Cppcheck fournit des outils 
d'analyse statique de code en particulier un vérifier de règles de codage.
Cppcheck est conçu pour être capable d'analyser 
du code C et C++ même s'il a une syntaxe non standard (commun dans les 
projets embarqués).

## Installation des outils

### Machine virtuelle

Une machine virtuelle Linux avec les outils est disponible sur les machines de la salle D102.

Une archive avec la VM est aussi disponible sur une clé USB. Si vous le souhaitez, à la première séance, vous pouvez installer la VM sur votre machine en utilisant un
logiciel de virtualisation, par exemple VirtualBox.

### Installation à la main sur Linux

Attention seules l'installation sur Linux (Debian) est validée (l'installation Mac OS pose des problèmes pour utiliser les plugin de Frama-C).

**Installation de cppcheck**

L'installation de cppcheck est relativement simple, par contre il vous faudra
aussi Python2 et pip2 ce qui nécessite quelque manipulations supplémentaires.
```sh
sudo apt update
sudo apt install cppcheck
wget https://bootstrap.pypa.io/pip/2.7/get-pip.py
sudo python2 get-pip.py
pip2.7 install pathlib
```

**Installation Frama-C**

Allez sur https://frama-c.com/html/get-frama-c.html# pour avoir les
commandes d'installation en fonction de votre système. **Attention**,
à la fin appler la commande `opam init` (ou à chaque fois que vous
lancer un terminal `eval $(opam env)`)

## Cloner le dépôt

Avant de vous lancer des les exercices et afin de disposer de l'ensemble des
codes à utiliser pour les TD, commencer par cloner 
le dépôt sur la machine sur laquelle vous allez travailler. Pour cela, exécuter la
commande :
```sh
git clone https://gitlab.univ-nantes.fr/faucou-s/ecn-sec-sfe.git
```

Maintenant que vous avez les outils et le code, vous êtes prêt.e.s pour
[pratiquer un peu](exo1.md).