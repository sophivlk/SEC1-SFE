# Accessibilité

Le but ici est de découvrir le code mort dans un programme. Le code mort est le code dont on constate qu'il ne sert à rien car il n'est jamais appelé par une autre partie du programme. Sans doute utile dans une étape antérieure du développement ou du débogage, le code n'a plus de raison d'être et rend inutilement la lecture du code source plus complexe \[[wikipedia](https://fr.wikipedia.org/wiki/Réusinage_de_code#Suppression_du_code_mort)\].

Frama-C va permettre de mener une analyse de couverture d'accessibilité, c'est-à-dire qu'étant donné une fonction `f`, l'analyse recherche les fonctions du programme qui peuvent être appelées depuis `f`.

Avec Frama-c, l'option `-metrics-cover <f1,..,fn>` calcule une surapproximation 
des fonctions accessibles à partir de f1,...,fn.

## Exercice : analyse d'accessibilité

>Observez le code fourni dans `reach.c`. Est-ce que `baz` et `foo` sont atteignables ?

>Utiliser la commande
```frama-c -metrics -metrics-cover main,foo reachability/reach.c``` 
pour appliquer le calcul à `main` et `foo`. Regardez le résultat. Est-ce cohérent avec ce que vous aviez prédit ?

> Expliquer ce que vous avez observé dans votre compte rendu.

<details>
<summary>Cliquer pour avoir une explication</summary>
Dans Frama-c, l'analyse de la couverture d'accessibilité est conservatrice.
Elle considère que toutes les fonctions dont les adresses sont référencées dans une fonction atteignable peuvent être appelées. Cela explique pourquoi elle considère que baz et foo sont atteignables depuis la fonction principale.
</details>
<br>

## Une analyse plus poussée avec Eva

L'option `-metrics-eva-cover` peut être utilisée pour comparer le code effectivement analysé par Eva (le plugin Eva est détaillé plus loin) avec ce que Metrics considère comme atteignable depuis la fonction principale.

Pour toutes les fonctions qui sont considérées comme syntaxiquement atteignables,
mais qui ne sont pas analysées par Eva, le plug-in indique les emplacements dans le code où un appel aurait pu être analysé.

## Exercice : accessibilité avec Eva

>Appeler ```frama-c -metrics -metrics-eva-cover reachability/reach.c``` et
 observer le résultat du test de couverture pour la fonction `main`. Trouver les lignes d'appel 
aux fonctions.

> Expliquer votre démarche dans le compte rendu.


[Suite avec le troisième exercice](exo3.md).

