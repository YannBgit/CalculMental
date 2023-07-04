// LIBRAIRIES
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// FONCTIONS
void scanfError(uint16_t choix)
{
  printf
  (
    "Erreur : %d, choix invalide.\n"
    "Sortie du programme.\n\n",
    choix
  );

  exit(0);
}

void choix0()
{
  printf("Sortie du programme.\n\n");

  exit(0);
}

void choix1(max)
{
  uint8_t intervalle = 3;
  uint8_t somme = 0;
  uint8_t nb = 0;

  printf("Début du test dans 3 secondes...\n\n");
  sleep(3);

  for(uint8_t i = 0; i < 10; i++)
  {
    nb = 1 + rand() % max;

    for(uint8_t i = 0; i < 10; i++)
    {
      for(uint8_t j = 0; j < 12; j++)
      {
        printf("%c", nombres[nb][i][j]);
      }

      printf("\n");
    }

    sleep(intervalle);
    printf("\n\n\n\n\n\n\n\n\n\n");
    sleep(intervalle);

    somme += nb;
  }

  uint8_t resultat;
  check = scanf("Entrez le résultat : %d\n", &resultat);

  if(check == -1)
  {
    scanfError(resultat);
  }

  if(resultat == somme)
  {
    printf
    (
      "Test réussi !\n"
      "Sortie du programme.\n\n"
    );
  }

  else
  {
    printf
    (
      "Echec du test. Le résultat était %d.\n"
      "Sortie du programme.\n\n",
      somme
    );
  }

  exit(0);
}

choix2(max, rep)
{
  uint16_t somme;
  uint8_t nb1;
  uint8_t nb2;

  for(uint8_t i = 0; i < rep; i++)
  {
    somme = 0;
    nb1 = rand() % max;
    nb2 = rand() % max;
    somme = nb1 + nb2;

    scanf("%d + %d = %d\n", nb1, nb2, &resultat);

    if(resultat == somme)
    {
      printf("Correct !\n\n");
    }

    else
    {
      printf("Faux.\n\n");
    }
  }
}

choix3(max, rep)
{
  uint16_t soustraction;
  uint8_t nb1;
  uint8_t nb2;

  for(uint8_t i = 0; i < rep; i++)
  {
    soustraction = 0;
    nb1 = rand() % max;
    nb2 = rand() % (max - nb1);
    soustraction = nb1 - nb2;

    scanf("%d - %d = %d\n", nb1, nb2, &resultat);

    if(resultat == soustraction)
    {
      printf("Correct !\n\n");
    }

    else
    {
      printf("Faux.\n\n");
    }
  }
}

choix4(max, rep)
{
  uint16_t produit;
  uint8_t nb1;
  uint8_t nb2;

  for(uint8_t i = 0; i < rep; i++)
  {
    produit = 0;
    nb1 = rand() % max;
    nb2 = rand() % max;
    produit = nb1 * nb2;

    scanf("%d * %d = %d\n", nb1, nb2, &resultat);

    if(resultat == produit)
    {
      printf("Correct !\n\n");
    }

    else
    {
      printf("Faux.\n\n");
    }
  }
}

choix5(max, rep)
{
  printf("Les résultats sont à donner approchés au centième (2 décimales).\n");

  float quotient;
  uint8_t nb1;
  uint8_t nb2;

  for(uint8_t i = 0; i < rep; i++)
  {
    quotient = 0;
    nb1 = rand() % max;
    nb2 = rand() % max;
    quotient = nb1 / nb2;

    scanf("%d / %d = %d\n", nb1, nb2, &resultat);

    if(resultat == quotient)
    {
      printf("Correct !\n\n");
    }

    else
    {
      printf("Faux.\n\n");
    }
  }
}

// MAIN
uint8_t main()
{
  uint8_t choix;
  uint8_t check =
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

  if((check == -1) || (choix < 0) || (choix > 5))
  {
    scanfError(choix);
  }

  if(choix == 0)
  {
    choix0();
  }

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

  if((choix > 0) && (choix < 6))
  {
    srand(time(NULL));

    uint16_t max = 9;

    if(choix == 1)
    {
       choix1(max);
    }

    check = scanf("Choisissez le nombre maximum que peut prendre une valeur (maximum de 9999) : %d\n", &max);

    if((check == -1) || (max < 0) || (max > 9999))
    {
      scanfError(max);
    }

    uint16_t rep;
    check = scanf("Choisissez le nombre de répétitions de l'exercice (maximum de 9999) : %d\n", &rep);

    if((check == -1) || (rep < 0) || (rep > 9999))
    {
      scanfError(rep);
    }

    if(choix == 2)
    {
      choix2();
    }

    if(choix == 3)
    {
      choix3();
    }

    if(choix == 4)
    {
      choix4();
    }

    if(choix == 5)
    {
      choix5();
    }
  }
}