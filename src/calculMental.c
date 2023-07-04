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
    "Erreur : %d, valeur invalide.\n"
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
      printf("\n\n\n\n\n\n\n\n\n\n");
      sleep(intervalle);

      resultat += nb;
    }

    uint32_t entree;
    uint32_t check = scanf("Entrez le résultat : %d\n", &entree);

    if(check == -1)
    {
      scanfError(entree);
    }

    if(entree == resultat)
    {
      printf
      (
        "Test réussi !\n"
      );
    }

    else
    {
      printf
      (
        "Echec du test. Le résultat était %d.\n",
        resultat
      );
    }

    check =
    scanf
    (
      "Continuer :\t- 1\n"
      "Revenir au menu :\t- 2\n",
      &choix
    );

    if((check == -1) || (choix < 1) || (choix > 2))
    {
      scanfError(choix);
    }
  }
}

void sommes(uint32_t max)
{
  uint32_t nb1 = rand() % max;
  uint32_t nb2 = rand() % max;
  uint32_t resultat = nb1 + nb2;

  uint32_t entree;
  uint32_t check = scanf("%d + %d = %d\n", nb1, nb2, &entree);

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
    printf("Faux. Le résultat était : %d\n\n", resultat);
  }
}

uint32_t soustractions(uint32_t max)
{
    uint32_t nb1 = rand() % max;
    uint32_t nb2 = rand() % (max - nb1);
    uint32_t resultat = nb1 - nb2;

    uint32_t entree;
    uint32_t check = scanf("%d - %d = %d\n", nb1, nb2, &entree);

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
      printf("Faux. Le résultat était : %d\n\n", resultat);
    }
}

uint32_t produits(uint32_t max)
{
    uint32_t nb1 = rand() % max;
    uint32_t nb2 = rand() % max;
    uint32_t resultat = nb1 * nb2;

    uint32_t entree;
    uint32_t check = scanf("%d * %d = %d\n", nb1, nb2, &entree);

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
      printf("Faux. Le résultat était : %d\n\n", resultat);
    }
}

uint32_t divisions(uint32_t max)
{
    uint32_t nb1 = rand() % max;
    uint32_t nb2 = rand() % max;
    uint32_t resultat = nb1 / nb2;

    uint32_t entree;
    uint32_t check = scanf("%d / %d = %d\n", nb1, nb2, &entree);

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
      printf("Faux. Le résultat était : %d\n\n", resultat);
    }
}

void autresExercices(uint32_t exercice, uint32_t max)
{
  uint32_t continuer = 1;

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

    check =
    scanf
    (
      "Continuer :\t\t- 1\n"
      "Revenir au menu :\t- 2\n",
      &continuer
    );

    if((check == -1) || (continuer < 1) || (continuer > 2))
    {
      scanfError(resultat);
    }
  }

  printf("Retour au menu.\n\n");
}

// MAIN
uint32_t main()
{
  srand(time(NULL));

  uint32_t exercice;

  while(exercice != 0)
  {
    uint32_t max;
    uint32_t check =
    scanf
    (
      "Choisissez un programme d'entraînement en entrant le numéro correspondant :\n"
      "Sortie du programme\t- 0\n"
      "SECPIL\t\t\t- 1\n"
      "Additions\t\t- 2\n"
      "Soustractions\t\t- 3\n"
      "Multiplications\t\t- 4\n"
      "Divisions\t\t- 5\n"
      "%d\n",
      &exercice
    );

    if((check == -1) || (exercice < 0) || (exercice > (NBREXERCICES - 1)))
    {
      scanfError(choix);
    }

    else if(exercice == 1)
    {
      SECPIL();
    }

    else
    {
      check = scanf("Choisissez la valeur maximum que peuvent prendre les nombres (maximum de %d) : %d\n", VALEURMAX, &max);

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

  printf("Sortie du programme.\n\n");

  exit(0);
}