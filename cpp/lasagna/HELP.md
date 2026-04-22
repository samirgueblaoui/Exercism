# Aide

## Lancer les tests

Pour lancer les tests, il faut executer `cmake -G`, puis utiliser la commande de compilation adaptee a ta plateforme.
Des instructions detaillees sont disponibles sur la page [Running the Tests][cpp-tests-instructions] pour C++ sur exercism.org.

## Faire passer les tests

Lorsque tu commences un nouvel exercice en local, les fichiers sont configures pour que seul le premier test soit execute.
Fais compiler, lier et passer ce premier test en suivant les [trois regles du developpement pilote par les tests][three-laws-of-tdd].
Cree juste assez de structure en declarant les espaces de noms, fonctions, classes, etc., pour corriger les erreurs de compilation et faire echouer le test.
Ensuite, ecris juste assez de code pour faire passer le test.
Une fois cela fait, decommente le test suivant en deplacant la ligne `if defined(EXERCISM_RUN_ALL_TESTS)` apres ce test.

Voir l'exemple ci-dessous tire de l'exercice Bob (fichier `bob_test.cpp`, ligne 15) :

```diff
-#if defined(EXERCISM_RUN_ALL_TESTS)
TEST_CASE("shouting")
{
    REQUIRE("Whoa, chill out!" == bob::hey("WATCH OUT!"));
}
+#if defined(EXERCISM_RUN_ALL_TESTS)
```

Deplacer cette ligne apres le test suivant peut provoquer des erreurs de compilation, car de nouvelles constructions peuvent etre utilisees alors que tu ne les as pas encore declarees ou definies.
La encore, corrige les erreurs de compilation de facon minimale pour obtenir un test qui echoue, puis modifie le code de facon minimale pour faire passer le test, remanie ton implementation pour la rendre plus lisible et expressive, puis passe au test suivant.

Essaie d'utiliser les fonctionnalites standard de C++17 plutot que d'ecrire toi-meme des algorithmes ou outils bas niveau.

[cpp-tests-instructions]: https://exercism.org/docs/tracks/cpp/tests
[three-laws-of-tdd]: http://butunclebob.com/ArticleS.UncleBob.TheThreeRulesOfTdd

## Soumettre ta solution

Tu peux soumettre ta solution avec la commande `exercism submit lasagna.cpp`.
Cette commande enverra ta solution sur le site d'Exercism et affichera l'URL de la page de ta solution.

Il est possible de soumettre une solution incomplete, ce qui te permet de :

- Voir comment les autres ont termine l'exercice
- Demander l'aide d'un mentor

## Besoin d'aide ?

Si tu veux de l'aide pour resoudre l'exercice, consulte les pages suivantes :

- La [documentation du parcours C++](https://exercism.org/docs/tracks/cpp)
- La [categorie programmation du parcours C++ sur le forum](https://forum.exercism.org/c/programming/cpp)
- La [categorie programmation d'Exercism sur le forum](https://forum.exercism.org/c/programming/5)
- La [foire aux questions](https://exercism.org/docs/using/faqs)

Si ces ressources ne suffisent pas, tu peux soumettre ta solution incomplete pour demander un accompagnement.

Pour obtenir de l'aide si tu rencontres des difficultes, tu peux utiliser l'une des ressources suivantes :

- Le [tag `c++-faq` sur StackOverflow](https://stackoverflow.com/tags/c%2b%2b-faq/info)
- La [FAQ C++ d'isocpp.com](https://isocpp.org/faq)
- [CppReference](http://en.cppreference.com/) est une reference wiki pour le langage C++ et sa bibliotheque standard
- [C traps and pitfalls](http://www.slideshare.net/LegalizeAdulthood/c-traps-and-pitfalls-for-c-programmers) est utile si tu decouvres C++, mais que tu as deja programme en C
