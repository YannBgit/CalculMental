// LIBRAIRIES
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <unistd.h>

// CONSTANTES
#define VALEURMAX 99999
#define NBREXERCICES 6

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

  uint32_t choix = 1;

  while(choix == 1)
  {
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
      nb = 1 + rand() % max;

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

    if(entree == resultat)
    {
      printf("Test réussi !\n");
    }

    else
    {
      printf("Echec du test. Le résultat était %u.\n", resultat);
    }

    printf
    (
      "Continuer :\t\t- 1\n"
      "Revenir au menu :\t- 2\n"
    );

    check = scanf("%u", &choix);

    if((check == -1) || (choix < 1) || (choix > 2))
    {
      scanfError(choix);
    }
  }
}

void sommes(uint32_t max)
{
  max++;

  uint32_t nb1 = rand() % max;
  uint32_t nb2 = rand() % max;
  uint32_t resultat = nb1 + nb2;

  printf("%u + %u = ", nb1, nb2);
  uint32_t entree;
  uint32_t check = scanf("%u", &entree);

  if((check == -1) || (entree < 0) || (entree > VALEURMAX))
  {
    scanfError(resultat);
  }

  if(resultat == entree)
  {
    printf("Correct !\n\n");
  }

  else
  {
    printf("Faux. Le résultat était : %u\n\n", resultat);
  }
}

void soustractions(uint32_t max)
{
  max++;
  
  uint32_t nb1 = rand() % max;
  uint32_t nb2 = rand() % (max - nb1);
  uint32_t resultat = nb1 - nb2;

  printf("%u - %u = ", nb1, nb2);
  uint32_t entree;
  uint32_t check = scanf("%u", &entree);

  if((check == -1) || (entree < 0) || (entree > VALEURMAX))
  {
    scanfError(resultat);
  }

  if(resultat == entree)
  {
    printf("Correct !\n\n");
  }

  else
  {
    printf("Faux. Le résultat était : %u\n\n", resultat);
  }
}

void produits(uint32_t max)
{
  max++;

  uint32_t nb1 = rand() % max;
  uint32_t nb2 = rand() % max;
  uint32_t resultat = nb1 * nb2;

  printf("%u * %u = ", nb1, nb2);
  uint32_t entree;
  uint32_t check = scanf("%u", &entree);

  if((check == -1) || (entree < 0) || (entree > VALEURMAX))
  {
    scanfError(resultat);
  }

  if(resultat == entree)
  {
    printf("Correct !\n\n");
  }

  else
  {
    printf("Faux. Le résultat était : %u\n\n", resultat);
  }
}

void divisions(uint32_t max)
{
  max = (max * 100) + 1; // 10 -> 1001

  uint32_t nb1Entier = rand() % max; // 1000
  float nb1Decimal = nb1Entier / 100.0; // 10.00
  uint32_t nb2Entier = rand() % max; // 1000
  float nb2Decimal = nb2Entier / 100.0; // 100
  float resultat = nb1Decimal / nb2Decimal; // 10.00 / 10.00

  printf("%.2f / %.2f = ", nb1Decimal, nb2Decimal);
  float entree;
  uint32_t check = scanf("%f", &entree);

  if((check == -1) || (entree < 0) || (entree > VALEURMAX))
  {
    scanfError(entree);
  }

  uint32_t resultatEntier = resultat * 100;
  float resultatDecimal = resultatEntier / 100.0;

  if(resultatDecimal == entree)
  {
    printf("Correct !\n\n");
  }

  else
  {
    printf("Faux. Le résultat était : %f\n\n", resultatDecimal);
  }
}

void autresExercices(uint32_t exercice, uint32_t max)
{
  uint32_t continuer = 1;
  uint32_t check;

  while(continuer == 1)
  {
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
      divisions(max);
    }

    printf
    (
      "Continuer :\t\t- 1\n"
      "Revenir au menu :\t- 2\n"
    );

    check = scanf("%u", &continuer);

    if((check == -1) || (continuer < 1) || (continuer > 2))
    {
      scanfError(continuer);
    }
  }

  printf("Retour au menu.\n\n");
}

// MAIN
int main()
{
  srand(time(NULL));

  uint32_t exercice;

  while(1)
  {
    printf
    (
      "Choisissez un programme d'entraînement en entrant le numéro correspondant :\n"
      "SECPIL\t\t\t\t\t\t\t- 1\n"
      "Additions\t\t\t\t\t\t- 2\n"
      "Soustractions\t\t\t\t\t\t- 3\n"
      "Multiplications\t\t\t\t\t\t- 4\n"
      "Divisions avec précision de 2 décimales sans arrondi\t- 5\n"
      "Quitter le programme\t\t\t\t\t- 6\n"
    );

    uint32_t max;
    uint32_t check =
    scanf("%u", &exercice);

    if((check == -1) || (exercice < 1) || (exercice > (NBREXERCICES)))
    {
      scanfError(exercice);
    }

    else if(exercice == 6)
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
      printf("Choisissez la valeur maximum que peuvent prendre les nombres (maximum de %u) :\n", VALEURMAX);

      check = scanf("%u", &max);

      if((check == -1) || (max < 0) || (max > VALEURMAX))
      {
        scanfError(max);
      }

      else
      {
        autresExercices(exercice, max);
      }
    }
  }
}