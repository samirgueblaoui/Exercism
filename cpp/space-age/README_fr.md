# Space Age

Bienvenue dans Space Age, sur le parcours C++ d'Exercism.
Si vous avez besoin d'aide pour lancer les tests ou soumettre votre code, consultez `HELP.md`.

## Introduction

Nous sommes en 2525 et vous venez d'embarquer pour un voyage visant à visiter toutes les planètes du Système solaire (Mercure, Vénus, Terre, Mars, Jupiter, Saturne, Uranus et Neptune).
La première étape est Mercure, où les douanes vous demandent de remplir un formulaire (la bureaucratie n'est apparemment _pas_ propre à la Terre).
Lorsque vous remettez le formulaire au douanier, il l'examine attentivement et fronce les sourcils.
"Vous vous attendez _vraiment_ à ce que je croie que vous n'avez que 50 ans ?
Vous devez plutôt approcher les 200 ans !"

Amusé, vous attendez que le douanier se mette à rire, mais il semble tout à fait sérieux.
Vous réalisez que vous avez indiqué votre âge en _années terrestres_, alors que l'agent l'attendait en _années mercuriennes_ !
Comme la période orbitale de Mercure autour du Soleil est nettement plus courte que celle de la Terre, vous êtes en réalité beaucoup plus âgé en années mercuriennes.
Après quelques calculs rapides, vous pouvez fournir votre âge en années mercuriennes.
Le douanier sourit, satisfait, et vous laisse passer.
Vous prenez mentalement note de pré-calculer votre âge propre à chaque planète _avant_ les prochains contrôles douaniers, afin d'éviter ce genre de confusion.

~~~~exercism/note
Si vous vous demandez pourquoi Pluton n'a pas été retenue, regardez [cette vidéo YouTube][pluto-video].

[pluto-video]: https://www.youtube.com/watch?v=Z_2gbGXzFbs
~~~~

## Instructions

À partir d'un âge en secondes, calculez l'âge qu'aurait une personne sur une planète de notre Système solaire.

Une année terrestre équivaut à 365,25 jours terrestres, soit 31 557 600 secondes.
Si l'on vous disait qu'une personne a 1 000 000 000 secondes, son âge serait de 31,69 années terrestres.

Pour les autres planètes, vous devez tenir compte de leur période orbitale en années terrestres :

| Planète | Période orbitale en années terrestres |
| ------- | ------------------------------------- |
| Mercure | 0.2408467                             |
| Vénus   | 0.61519726                            |
| Terre   | 1.0                                   |
| Mars    | 1.8808158                             |
| Jupiter | 11.862615                             |
| Saturne | 29.447498                             |
| Uranus  | 84.016846                             |
| Neptune | 164.79132                             |

~~~~exercism/note
La durée réelle d'une orbite complète de la Terre autour du Soleil est plus proche de 365,256 jours (1 année sidérale).
Le calendrier grégorien compte en moyenne 365,2425 jours.
Bien que ce ne soit pas totalement exact, 365,25 est la valeur utilisée dans cet exercice.
Consultez [Year sur Wikipédia][year] pour d'autres façons de mesurer une année.

[year]: https://en.wikipedia.org/wiki/Year#Summary
~~~~

## Source

### Créé par

- @LegalizeAdulthood

### Contributions de

- @cyborgsphinx
- @elyashiv
- @HenryRLee
- @jackhughesweb
- @KevinWMatthews
- @kytrinyx
- @patricksjackson

### Basé sur

Partiellement inspiré du chapitre 1 du tutoriel en ligne Learn to Program de Chris Pine. - https://pine.fm/LearnToProgram/chap_01.html
