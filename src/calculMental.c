// LIBRAIRIES
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <unistd.h>

// CONSTANTES
#define VALEURMAX 999999
#define NBRCHOIX 6

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

void choix0()
{
  printf("Sortie du programme.\n\n");

  exit(0);
}

void choix1()
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

uint32_t choix2(uint32_t max)
{
  uint32_t nb1 = rand() % max;
  uint32_t nb2 = rand() % max;
  uint32_t resultat = nb1 + nb2;

  uint32_t entree;
  uint32_t check = scanf("%d + %d = %d\n", nb1, nb2, &entree);

  return resultat;
}

void choix3(max, rep)
{
  uint32_t entreeChoix = 1;
  uint32_t soustraction;
  uint32_t nb1;
  uint32_t nb2;

  while(entreeChoix == 1)
  {
    soustraction = 0;
    nb1 = rand() % max;
    nb2 = rand() % max;
    somme = nb1 + nb2;

    uint32_t resultat;
    uint32_t check = scanf("%d + %d = %d\n", nb1, nb2, &resultat);

    if((check == -1) || (resultat < 0) || (resultat > 9999))
    {
      scanfError(resultat);
    }

    if(resultat == somme)
    {
      printf("Correct !\n\n");
    }

    else
    {
      printf("Faux. Le résultat était : %d\n\n", somme);
    }

    check =
    scanf
    (
      "Continuer :\t- 1\n"
      "Revenir au menu :\t- 2\n",
      &entreeChoix
    );

    if((check == -1) || (entreeChoix < 1) || (entreeChoix > 2))
    {
      scanfError(resultat);
    }
  }
}

void choix4(max, rep)
{
  uint32_t produit;
  uint32_t nb1;
  uint32_t nb2;

  for(uint32_t i = 0; i < rep; i++)
  {
    produit = 0;
    nb1 = rand() % max;
    nb2 = rand() % max;
    produit = nb1 * nb2;

    uint32_t resultat;
    uint32_t check = scanf("%d * %d = %d\n", nb1, nb2, &resultat);

    if((check == -1) || (resultat < 0) || (resultat > 9999))
    {
      scanfError(resultat);
    }

    if(resultat == produit)
    {
      printf("Correct !\n\n");
    }

    else
    {
      printf("Faux. Le résultat était : %d\n\n", produit);
    }
  }
}

void choix5(max, rep)
{
  printf("Les résultats sont à donner approchés au centième (2 décimales).\n");

  float quotient;
  uint32_t nb1;
  uint32_t nb2;

  for(uint32_t i = 0; i < rep; i++)
  {
    quotient = 0;
    nb1 = rand() % max;
    nb2 = rand() % max;
    quotient = nb1 / nb2;

    float resultat;
    uint32_t check = scanf("%d / %d = %f\n", nb1, nb2, &resultat);

    if((check == -1) || (resultat < 0) || (resultat > 9999))
    {
      scanfError(resultat);
    }

    if(resultat == quotient)
    {
      printf("Correct !\n\n");
    }

    else
    {
      printf("Faux. Le résultat était : %d\n\n", quotient);
    }
  }
}

// MAIN
uint32_t main()
{
  srand(time(NULL));

  while(1)
  {
    uint32_t max;
    uint32_t choix;
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
      &choix
    );

    if((check == -1) || (choix < 0) || (choix > (NBRCHOIX - 1)))
    {
      scanfError(choix);
    }

    if(choix == 0)
    {
      choix0();
    }

    else if(choix == 1)
    {
      choix1();
    }

    check = scanf("Choisissez la valeur maximum que peuvent prendre les nombres (maximum de %d) : %d\n", VALEURMAX, &max);

    if((check == -1) || (max < 0) || (max > VALEURMAX))
    {
      scanfError(max);
    }

    else if(choix == 2)
    {
      choix2();
    }

    else if(choix == 3)
    {
      choix3();
    }

    else if(choix == 4)
    {
      choix4();
    }

    else if(choix == 5)
    {
      choix5();
    }
  }
}