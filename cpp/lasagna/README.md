# Lasagna

Bienvenue dans l'exercice Lasagna du parcours C++ d'Exercism.
Si tu as besoin d'aide pour lancer les tests ou soumettre ton code, consulte `HELP.md`.
Si tu bloques sur l'exercice, consulte `HINTS.md`, mais essaie d'abord de le résoudre sans l'utiliser :)

## Introduction

## Bases

Pour commencer le voyage en C++, nous allons voir les variables, les appels de fonctions et les commentaires.

### Commentaires

Il existe deux types de commentaires : sur une seule ligne et sur plusieurs lignes.
Tout ce qui vient apres `//` sur la meme ligne est ignore par le compilateur.
Les commentaires multilignes sont aussi appeles commentaires de style C.
Ils sont entoures par `/*` et `*/`.
Tout ce qui se trouve entre ces marqueurs sera egalement ignore.

### Variables

C++ est un langage type.
Tous les types doivent etre connus au moment de la compilation, et il faut generalement les indiquer explicitement.
Le type d'une variable ne peut pas changer.
Une variable entiere nommee `years` peut etre declaree ainsi :

```cpp
int years;
```

Il est recommande d'initialiser les variables au moment de leur declaration.
C++ propose differents mecanismes pour le faire.
La version avec les accolades correspond davantage au C++ moderne, mais la version avec le signe egal est aussi tres courante.

```cpp
int tomatoes{80};
int potatoes = 40;
```

~~~~exercism/caution
C++ permet d'utiliser des variables non initialisees.
Tant que la variable n'a pas ete definie volontairement, sa valeur est indeterminee et peut contenir n'importe quoi.
Pour eviter les erreurs d'utilisation avant affectation et les comportements indefinis, il est conseille de **toujours initialiser**.
Un comportement indefini peut faire planter ton programme au pire moment, alors qu'il fonctionnait tres bien auparavant.
On ne le dira jamais assez : evite les comportements indefinis a tout prix.
~~~~

### Operations arithmetiques

Les operateurs arithmetiques comme `*`, `+` ou `-` peuvent faire partie d'une expression comme `3 * 2` ou `tomatoes + potatoes`.

### Mise a jour des variables

Tu peux reaffecter des variables, tant qu'elles gardent leur type :

```cpp
tomatoes = tomatoes - 5; // tomatoes is now 75
potatoes = (32 * 2) + 11; // potatoes is now 75 as well
```

### Fonctions

Les fonctions ont un nom, un type de retour et une liste de parametres, qui peut etre vide.
Voici un exemple de fonction nommee `always_fortyseven` qui retournerait toujours 47 :

```cpp
int always_fortyseven() {
    return 47;
}
```

Voici `vip_fee`, qui a un parametre :

```cpp
int vip_fee(int standard_fee) {
    /*
    vip_fee calculates the vip fee based on the standard_fee.
    */
    int vip_multi{3};
    return standard_fee * vip_multi;
}
```

Ou encore `total_fee`, une fonction avec trois parametres et un appel a une autre fonction.

```cpp
int total_fee(int vips, int adults, int kids) {
    /*
    total_fee calculates the total price for a group of VIP and adult guests with kids.
    Kids get a flat discount on the standard fee.
    VIP guest fees are calculated by calling vip_fee.
    */
    int standard_fee{30};
    int kids_discount{15};

    int kids_total_fee = kids * (standard_fee - kids_discount);
    int vips_total_fee = vips * vip_fee(standard_fee);
    int adult_total_fee = adults * standard_fee;

    return vips_total_fee + adult_total_fee + kids_total_fee;
}
```

En C++, les fonctions ne retournent pas la valeur de la derniere instruction comme dans certains autres langages.
Le mot-cle `return` est necessaire pour que le code compile.

### Espaces

Les espaces servent a formater le code source et incluent les espaces, les tabulations et les retours a la ligne.
Comme le compilateur ignore les espaces inutiles, tu peux les utiliser pour structurer ton code.
Une bonne utilisation des espaces peut ameliorer la lisibilite de ton code.
Il existe differentes normes de formatage, mais elles restent conventionnelles et ne sont pas imposees par le compilateur.

```cpp
// Formatting makes it easier to find bugs

int eggs_yolks =  3;
int      yeast = 15;

int flour=500;int sugar=200;// compact, but difficult to read
```

## Instructions

La petite amie de Lucian est en route pour rentrer a la maison, et il n'a pas encore prepare leur diner d'anniversaire !

Dans cet exercice, tu vas ecrire du code pour aider Lucian a preparer une excellente lasagne issue de son livre de cuisine prefere.

Tu as quatre taches, toutes liees au temps passe a cuisiner la lasagne.

## 1. Definir le temps de cuisson attendu au four en minutes

Definis la fonction `ovenTime()` qui ne prend aucun argument et retourne le nombre de minutes pendant lesquelles la lasagne doit rester au four.
Selon le livre de cuisine, le temps de cuisson attendu est de 40 minutes :

```cpp
ovenTime();
// => 40
```

## 2. Calculer le temps de cuisson restant au four en minutes

Definis la fonction `remainingOvenTime(int actualMinutesInOven)` qui prend en argument le nombre reel de minutes pendant lesquelles la lasagne est deja restee au four, et retourne le nombre de minutes qu'elle doit encore y rester, d'apres le temps de cuisson attendu de la tache precedente.

```cpp
remainingOvenTime(30);
// => 10
```

## 3. Calculer le temps de preparation en minutes

Definis la fonction `preparationTime(int numberOfLayers)` qui prend en argument le nombre de couches que tu as ajoutees a la lasagne et retourne le nombre de minutes passees a la preparer, en supposant que chaque couche prend 2 minutes a preparer.

```cpp
preparationTime(2);
// => 4
```

## 4. Calculer le temps ecoule en minutes

Definis la fonction `elapsedTime(int numberOfLayers, int actualMinutesInOven)` qui prend deux arguments : le premier est le nombre de couches que tu as ajoutees a la lasagne, et le second est le nombre de minutes pendant lesquelles la lasagne est restee au four. La fonction doit retourner le nombre de minutes que tu as passees a cuisiner la lasagne, c'est-a-dire la somme du temps de preparation en minutes et du temps que la lasagne a deja passe au four.

```cpp
elapsedTime(3, 20);
// => 26
```

## Source

### Created by

- @vaeng
