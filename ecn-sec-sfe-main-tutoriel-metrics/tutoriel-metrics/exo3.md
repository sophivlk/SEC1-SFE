# Régle de codage MISRA

Dans cette partie vous allez produire un code et utiliser `cppcheck` pour
vérifier si les règles de codage MISRA sont respectées.

MISRA C est une norme de programmation en langage C créée en 1998 par la _Motor
Industry Software Reliability Association_ (MISRA). Elle spécifie les règles 
de programmation pour plus de sûreté. L’objectif est d’éviter des erreurs 
d’exécution causées par l'écriture de code C mal structuré et de garantir la 
validité des expressions utilisées. La plupart de ces règles peuvent être automatiquement 
vérifiées ou prises en considération lors de la génération du code.
\[[wikipedia](https://fr.wikipedia.org/wiki/MISRA_C) \]

## Exercice : un peu de code C pour la route

> Récupérez le fichier `misra/tri.c` et implémentez la fonction `bubble_sort`. Le
pseudo-code suivant (copié depuis [wikipedia](https://fr.wikipedia.org/wiki/Tri_à_bulles)) donne une implémentation non-optimisée du tri à bulles:

```
tri_à_bulles(Tableau T)
   pour i allant de (taille de T)-1 à 1
       pour j allant de 0 à i-1
           si T[j+1] < T[j]
               (T[j+1], T[j]) = (T[j], T[j+1])
```

> Une fois votre code produit, lancer `cppcheck --addon=misra your-file.c` pour 
vérifier si vous respectez bien toutes les règles  de codage MISRA.

Attention, la norme MISRA étant propriétaire, cppcheck affiche un texte d'erreur 
en spécifiant uniquement les numéros des règles violées (par exemple, 
[c2012-21.3]). Utiliser le document MISRA C:2012 qui se trouve sur hippocampus pour retrouver les explications des règles qui ne sont pas respectées.

> Mettez dans votre compte rendu le code que vous avez produit (avant de vérifier les règles) ainsi que les erreurs remontées.

> Corriger le code afin de respecter les règles de codage MISRA.

> Mettez votre nouveau code et expliquant les corrections que vous avez faites.

## Exercice : import des régles de codage MISRA

Bonne nouvelle, nous avons créé un fichier textuel qui contient les règles de 
codage MISRA. Pour l'utiliser il vous faut utiliser un code python fourni avec
le projet cppchek. Le code est installé sur la VM dans le répertoire
`/home/etud/cppcheck/addons/`.

<details>
<summary>Cliquer si vous voulez l'installer sur votre machine </summary>
cloner le dépôt https://github.com/danmar/cppcheck avec la commande

```
git clone https://github.com/danmar/cppcheck
```
Puis commenter la ligne 4600 dans le fichier `cppcheck/addons/misra.py`.
</details>
<br>

Pour utiliser le script il vous faut appeler les commandes :
```sh
cppcheck --dump --quiet your-file.c
python2 /home/etud/cppcheck/addons/misc.py your-file.c.dump
python2 /home/etud/cppcheck/addons/misra.py --rule-texts=~/misra_rules.txt your-file.c.dump
```
Vérifiez bien les chemins en fonction d'où vous lancer la commande.

> Utiliser les règles sur le fichier `misra/foo.c` et corriger le code en conséquence.

> Mettez dans votre compte rendu les erreurs remontées ainsi que le code corrigé.

## Fin de la partie sur les métriques

Vous avez terminé la partie sur les métriques, vous pouvez maintenant passer à la partie sur la vérification de code à l'aide de Frama-C. Rendez-vous sur [https://gitlab.univ-nantes.fr/faucou-s/ecn-sec-sfe/-/tree/main/tutoriel-framac](https://gitlab.univ-nantes.fr/faucou-s/ecn-sec-sfe/-/tree/main/tutoriel-framac)
