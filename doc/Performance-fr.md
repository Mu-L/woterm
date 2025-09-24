# Rapport de test de performance WoTerm

Ce test de performance est effectué avec **la version v10**, car les versions ultérieures ont bénéficié d’optimisations profondes du noyau.  
Merci aux internautes pour leur encouragement et leur soutien, ainsi qu’à l’auteur de **WindTerm** : bien que nous ne nous connaissions pas et n’ayons jamais échangé techniquement, WindTerm est un logiciel excellent et a inspiré certaines fonctionnalités de WoTerm.

---

## 🖥 Environnement de test

| Composant          | Configuration                                |
|--------------------|----------------------------------------------|
| **Hôte WoTerm**    | i5 12e génération, 48 Go de RAM              |
| **Serveur de test**| 2 cœurs, 8 Go RAM, Fedora, VM en mode NAT    |

---

## ⚙ Commandes de test

| Commande              | Description                          |
|-----------------------|--------------------------------------|
| `time seq 10000000`   | Génère 10 millions de lignes         |
| `urandom_test.sh`     | Génère 100 Mo de données aléatoires  |

---

## 📦 Versions des programmes

| Programme    | Version |
|--------------|---------|
| **WoTerm**    | v10.2.1 |
| **WindTerm**  | v2.7.0  |
| **PuTTY**     | v0.83   |

---

## ⏱ Méthodologie

- **Date du test :** 18 avril 2025  
- Chaque commande exécutée **au moins 10 fois**  
- **Valeurs max & min écartées**, moyenne calculée  

---

## Durée de traitement de la commande

La commande `time seq 10000000` est lancée sur le serveur ; le temps total est mesuré au chronomètre du téléphone.  
La durée affichée par la commande ne reflète que l’instant où le thread SSH finit de recevoir, ce qui n’est pas équitable.  
Flux de données :

*thread SSH → thread principal → thread terminal → affichage principal*

D’où l’usage du chronomètre.  

### Durée de traitement de la commande
![](timeseq1.png)  


## Comparaison du débit urandom_test

Comparaison du **nombre d’enregistrements par seconde (débit)**.  

### Débit d’exécution
![](urandom_test_speed.png)  


## Utilisation mémoire après urandom_test

Montre **la mémoire supplémentaire** consommée après la commande (mémoire de base au démarrage soustraite).  

### Utilisation mémoire
![](urandom_test_memory.png)  


*Remarque : les résultats sont basés sur la configuration ci-dessus ; un environnement différent peut donner des chiffres dissemblables.*