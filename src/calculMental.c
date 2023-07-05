
/*
  Simple programme d'entraînement au calcul mental.
  L'option SECPIL peut être utilisée pour s'entraîner au SECPIL en ayant un logiciel de simulation ouvert à côté.
*/
// LIBRAIRIES
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <unistd.h>

// CONSTANTES
#define VALEURMIN 2
#define VALEURMAX 50000
#define NBREXERCICES 9

// FONCTIONS
void scanfError(uint32_t valeur)
{
  printf
  (
    "Erreur : %u, valeur invalide.\n"
    "Sortie du programme.\n\n",
    valeur
  );

  exit(0);
}

void SECPIL()
{
  char nombres[10][20][20] = 
  {
    {
      "####################",
      "####################",
      "####################",
      "####################",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####################",
      "####################",
      "####################",
      "####################"
    },
    {
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####"
    },
    {
      "####################",
      "####################",
      "####################",
      "####################",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "####################",
      "####################",
      "####################",
      "####################",
      "####                ",
      "####                ",
      "####                ",
      "####                ",
      "####################",
      "####################",
      "####################",
      "####################"
    },
    {
      "####################",
      "####################",
      "####################",
      "####################",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "####################",
      "####################",
      "####################",
      "####################",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "####################",
      "####################",
      "####################",
      "####################"
    },
    {
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####################",
      "####################",
      "####################",
      "####################",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####"
    },
    {
      "####################",
      "####################",
      "####################",
      "####################",
      "####                ",
      "####                ",
      "####                ",
      "####                ",
      "####################",
      "####################",
      "####################",
      "####################",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "####################",
      "####################",
      "####################",
      "####################"
    },
    {
      "####################",
      "####################",
      "####################",
      "####################",
      "####                ",
      "####                ",
      "####                ",
      "####                ",
      "####################",
      "####################",
      "####################",
      "####################",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####################",
      "####################",
      "####################",
      "####################"
    },
    {
      "####################",
      "####################",
      "####################",
      "####################",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "                ####"
    },
    {
      "####################",
      "####################",
      "####################",
      "####################",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####################",
      "####################",
      "####################",
      "####################",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####################",
      "####################",
      "####################",
      "####################"
    },
    {
      "####################",
      "####################",
      "####################",
      "####################",
      "####            ####",
      "####            ####",
      "####            ####",
      "####            ####",
      "####################",
      "####################",
      "####################",
      "####################",
      "                ####",
      "                ####",
      "                ####",
      "                ####",
      "####################",
      "####################",
      "####################",
      "####################"
    }
  };

  uint32_t intervalle = 3;
  uint32_t max = 9;
  uint32_t resultat = 0;
  uint32_t nb = 0;

  printf
  (
    "Des nombres vont apparaître en gros. Additionnez les jusqu'à la fin de l'épreuve puis écrivez le résultat final.\n"
    "Chaque nombre apparaît puis disparaît pendant 3 secondes.\n"
    "Début du test dans 3 secondes...\n\n"
  );
  sleep(3);

  for(uint32_t i = 0; i < 10; i++)
  {
    nb = 1 + (rand() % max);

    for(uint32_t i = 0; i < 20; i++)
    {
      for(uint32_t j = 0; j < 20; j++)
      {
        printf("%c", nombres[nb][i][j]);
      }

      printf("\n");
    }

    sleep(intervalle);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    sleep(intervalle);

    resultat += nb;
  }

  printf("Entrez le résultat :\n");
  uint32_t entree;
  uint32_t check = scanf("%u", &entree);

  if(check == -1)
  {
    scanfError(entree);
  }

  else if(entree == resultat)
  {
    printf("Test réussi !\n");
  }

  else
  {
    printf("Echec du test. Le résultat était %u.\n", resultat);
  }
}

void sommes(uint32_t max)
{
  while(1)
  {

    uint32_t nb1 = 1 + (rand() % max);
    uint32_t nb2 = 1 + (rand() % max);
    uint32_t resultat = nb1 + nb2;

    printf("%u + %u = ", nb1, nb2);
    uint32_t entree;
    uint32_t check = scanf("%u", &entree);

    if(check == -1)
    {
      scanfError(entree);
    }

    else if(entree == UINT32_MAX)
    {
      break;
    }

    else if(entree == resultat)
    {
      printf("Correct !\n");
    }

    else
    {
      printf("Faux. Le résultat était : %u\n", resultat);
    }

    while((entree = getchar()) != '\n' && entree != EOF);
  }
}

void soustractions(uint32_t max)
{
  while(1)
  {    
    uint32_t nb1 = 1 + (rand() % max);
    uint32_t nb2 = 1 + (rand() % nb1);
    uint32_t resultat = nb1 - nb2;

    printf("%u - %u = ", nb1, nb2);
    uint32_t entree;
    uint32_t check = scanf("%u", &entree);

    if(check == -1)
    {
      scanfError(entree);
    }

    else if(entree == UINT32_MAX)
    {
      break;
    }

    else if(entree == resultat)
    {
      printf("Correct !\n");
    }

    else
    {
      printf("Faux. Le résultat était : %u\n", resultat);
    }

    while((entree = getchar()) != '\n' && entree != EOF);
  }
}

void produits(uint32_t max)
{
  while(1)
  {
    uint32_t nb1 = 1 + (rand() % max);
    uint32_t nb2 = 1 + (rand() % max);
    uint32_t resultat = nb1 * nb2;

    printf("%u * %u = ", nb1, nb2);
    uint32_t entree;
    uint32_t check = scanf("%u", &entree);

    if(check == -1)
    {
      scanfError(entree);
    }

    else if(entree == UINT32_MAX)
    {
      break;
    }

    else if(entree == resultat)
    {
      printf("Correct !\n");
    }

    else
    {
      printf("Faux. Le résultat était : %u\n", resultat);
    }

    while((entree = getchar()) != '\n' && entree != EOF);
  }
}

void divisionsEntieres(uint32_t max)
{
  while(1)
  {
    uint32_t nb1 = 1 + (rand() % max);
    uint32_t nb2 = 1 + (rand() % max);
    float resultat = (float)nb1 / (float)nb2;
    uint32_t resultatEntier = resultat * 100;
    float resultatDecimal = resultatEntier / 100.0;

    printf("%u / %u = ", nb1, nb2);
    float entree;
    uint32_t check = scanf("%f", &entree);

    if(check == -1)
    {
      scanfError(entree);
    }

    else if(entree == -1)
    {
      break;
    }

    else if(entree == resultatDecimal)
    {
      printf("Correct !\n");
    }

    else
    {
      printf("Faux. Le résultat était : %.2f\n", resultatDecimal);
    }

    while((entree = getchar()) != '\n' && entree != EOF);
  }
}

void divisionsDecimales(uint32_t max)
{
  max = max * 100;

  while(1)
  {
    uint32_t nb1Entier = 1 + (rand() % max);
    float nb1Decimal = nb1Entier / 100.0;
    uint32_t nb2Entier = 1 + (rand() % max);
    float nb2Decimal = nb2Entier / 100.0;
    float resultat = nb1Decimal / nb2Decimal;
    uint32_t resultatEntier = resultat * 100;
    float resultatDecimal = resultatEntier / 100.0;

    printf("%.2f / %.2f = ", nb1Decimal, nb2Decimal);
    float entree;
    uint32_t check = scanf("%f", &entree);

    if(check == -1)
    {
      scanfError(entree);
    }

    else if(entree == -1)
    {
      break;
    }

    else if(entree == resultatDecimal)
    {
      printf("Correct !\n");
    }

    else
    {
      printf("Faux. Le résultat était : %.2f\n", resultatDecimal);
    }

    while((entree = getchar()) != '\n' && entree != EOF);
  }
}

void produitEnCroix(uint32_t max)
{
  while(1)
  {
    uint32_t nb1 = 1 + (rand() % max);
    uint32_t prix1 = 1 + (rand() % max);
    uint32_t nb2 = 1 + (rand() % max);
    float resultat = (float)nb2 * (float)prix1 / (float)nb1;
    uint32_t resultatEntier = resultat * 100;
    float resultatDecimal = resultatEntier / 100.0;

    printf("%u produits valent %u. Combien valent %u produits ?\n", nb1, prix1, nb2);
    float entree;
    uint32_t check = scanf("%f", &entree);

    if(check == -1)
    {
      scanfError(entree);
    }

    else if(entree == -1)
    {
      break;
    }

    else if(entree == resultatDecimal)
    {
      printf("Correct !\n");
    }

    else
    {
      printf("Faux. Le résultat était : %.2f\n", resultatDecimal);
    }

    while((entree = getchar()) != '\n' && entree != EOF);
  }
}

void calculPourcentages(uint32_t max)
{
  while(1)
  {
    uint32_t prix1 = 1 + (rand() % max);
    uint32_t prix2 = prix1 + (rand() % (max - prix1));
    float resultat = ((float)prix2 / (float)prix1 * 100.0) - 100.0;
    uint32_t resultatEntier = resultat;

    printf("Un produit vaut %u. Suite à l'inflation son nouveau prix passe à %u. Quel est le pourcentage de l'augmentation ?\n", prix1, prix2);
    uint32_t entree;
    uint32_t check = scanf("%u", &entree);

    if(check == -1)
    {
      scanfError(entree);
    }

    else if(entree == UINT32_MAX)
    {
      break;
    }

    else if(entree == resultatEntier)
    {
      printf("Correct !\n");
    }

    else
    {
      printf("Faux. Le résultat était : %u\n", resultatEntier);
    }

    while((entree = getchar()) != '\n' && entree != EOF);
  }
}

void calculNouveauPrix(uint32_t max)
{
  while(1)
  {
    uint32_t prix = 1 + (rand() % max);
    uint32_t pourcentageEntier = 110 + (rand() % 90);
    float pourcentageDecimal = pourcentageEntier / 100.0;
    float resultat = (float)prix * pourcentageDecimal;
    uint32_t resultatEntier = resultat;

    printf("Un produit vaut %u. Suite à l'inflation son prix augmente de %u%%. Quel est le nouveau prix ?\n", prix, pourcentageEntier - 100);
    uint32_t entree;
    uint32_t check = scanf("%u", &entree);

    if(check == -1)
    {
      scanfError(entree);
    }

    else if(entree == UINT32_MAX)
    {
      break;
    }

    else if(entree == resultatEntier)
    {
      printf("Correct !\n");
    }

    else
    {
      printf("Faux. Le résultat était : %u\n", resultatEntier);
    }

    while((entree = getchar()) != '\n' && entree != EOF);
  }
}

// MAIN
int main()
{
  srand(time(NULL));

  uint32_t exercice;

  while(1)
  {
    printf("\n\n\n\n");

    printf
    (
      "Choisissez un programme d'entraînement en entrant le numéro correspondant :\n"
      "SECPIL\t\t\t\t\t\t\t\t... 1\n"
      "Additions\t\t\t\t\t\t\t... 2\n"
      "Soustractions\t\t\t\t\t\t\t... 3\n"
      "Multiplications\t\t\t\t\t\t\t... 4\n"
      "Divisions entières à 2 décimales près sans arrondi\t\t... 5\n"
      "Divisions décimales à 2 décimales près sans arrondi\t\t... 6\n"
      "Produits en croix à 2 décimales près sans arrondi\t\t... 7\n"
      "Calcul de pourcentages au pourcent près sans arrondi\t\t... 8\n"
      "Calcul de nouveau prix à l'entier près sans arrondi\t\t... 9\n"
      "Quitter le programme\t\t\t\t\t\t... -1\n"
    );

    uint32_t max;
    uint32_t check =
    scanf("%u", &exercice);

    if((check == -1) || ((exercice != -1) && ((exercice < 1) || (exercice > NBREXERCICES))))
    {
      scanfError(exercice);
    }

    else if(exercice == UINT32_MAX)
    {
      printf("Sortie du programme.\n\n");

      exit(0);
    }

    else if(exercice == 1)
    {
      SECPIL();
    }

    else
    {
      printf("Choisissez la valeur maximum que peuvent prendre les nombres (minimum de %u et maximum de %u) :\n", VALEURMIN, VALEURMAX);

      check = scanf("%u", &max);

      if((check == -1) || (max < VALEURMIN) || (max > VALEURMAX))
      {
        scanfError(max);
      }

      printf
      (
        "Munissez-vous d'une feuille et d'un stylo. Il n'y a pas de limite de temps.\n"
        "Pour retourner au menu, entrez '-1' comme réponse à tout moment.\n"
      );

      if(exercice == 2)
      {
        sommes(max);
      }

      else if(exercice == 3)
      {
        soustractions(max);
      }

      else if(exercice == 4)
      {
        produits(max);
      }

      else if(exercice == 5)
      {
        divisionsEntieres(max);
      }

      else if(exercice == 6)
      {
        divisionsDecimales(max);
      }

      else if (exercice == 7)
      {
        produitEnCroix(max);
      }

      else if (exercice == 8)
      {
        calculPourcentages(max);
      }

      else if (exercice == 9)
      {
        calculNouveauPrix(max);
      }
    }

    printf("Retour au menu.\n\n");
  }
}