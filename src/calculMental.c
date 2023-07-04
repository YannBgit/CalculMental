// Programme d'entraînement au calcul mental simple

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
  printf
  (
    "Choisissez un programme d'entraînement en entrant le numéro correspondant :\n"
    "SECPIL\t- 1\n"
	  "Additions\t- 2\n"
    "Soustractions\t- 3\n"
    "Multiplications\t- 4\n"
    "Divisions\t- 5\n"
    "Sortie du programme\t- 0\n\n"
  );

  int choix;
  int check = scanf("%d", &choix);

  if(check == -1)
  {
    printf
    (
      "Entrée invalide.\n"
      "Sortie du programme.\n\n"
    );

    exit(0);
  }

  char nombres[10][10][12] = 
  {
    {
      "############",
      "############",
      "##        ##",
      "##        ##",
      "##        ##",
      "##        ##",
      "##        ##",
      "##        ##",
      "############",
      "############"
    },
    {
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##"
    },
    {
      "############",
      "############",
      "          ##",
      "          ##",
      "############",
      "############",
      "##          ",
      "##          ",
      "############",
      "############"
    },
    {
      "############",
      "############",
      "          ##",
      "          ##",
      "############",
      "############",
      "          ##",
      "          ##",
      "############",
      "############"
    },
    {
      "##        ##",
      "##        ##",
      "##        ##",
      "##        ##",
      "############",
      "############",
      "          ##",
      "          ##",
      "          ##",
      "          ##"
    },
    {
      "############",
      "############",
      "##          ",
      "##          ",
      "############",
      "############",
      "          ##",
      "          ##",
      "############",
      "############"
    },
    {
      "############",
      "############",
      "##          ",
      "##          ",
      "############",
      "############",
      "##        ##",
      "##        ##",
      "############",
      "############"
    },
    {
      "############",
      "############",
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##",
      "          ##"
    },
    {
      "############",
      "############",
      "##        ##",
      "##        ##",
      "############",
      "############",
      "##        ##",
      "##        ##",
      "############",
      "############"
    },
    {
      "############",
      "############",
      "##        ##",
      "##        ##",
      "############",
      "############",
      "          ##",
      "          ##",
      "############",
      "############"
    }
  };

  if((choix > 0) && (choix < 6))
  {
    srand(time(NULL));

    int max = 9;
    int intervalle = 3;

    if(choix == 1)
    {
      int somme = 0;
      int nb = 0;

      printf("Début du test dans 3 secondes...\n\n");
      sleep(3);

      while(somme < 60)
      {
        nb = 1 + rand() % max;

        for(int i = 0; i < 10; i++)
        {
          for(int j = 0; j < 12; j++)
          {
            printf("%c", nombres[nb][i][j]);
          }

          printf("\n");
        }
        sleep(intervalle);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        sleep(intervalle);

        somme += nb;
      }

      int resultat;
      check = scanf("Entrez le résultat : %d", &resultat);

      if(check == -1)
      {
        printf
        (
          "Entrée invalide.\n"
          "Sortie du programme.\n\n"
        );

        exit(0);
      }

      if(resultat == somme)
      {
        printf
        (
          "Test réussi !\n"
          "Sortie du programme.\n"
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

    printf
    ("Choisissez le nombre maximum que peut prendre une valeur (maximum de 999 999):\n");

    check = scanf("%d", &max);

    if(check == -1)
    {
      printf
      (
        "Entrée invalide.\n"
        "Sortie du programme.\n\n"
      );

      exit(0);
    }

    if((max < 0) || (max > 999999))
    {
      printf
      (
        "Erreur : %d, choix invalide.\n"
        "Sortie du programme.\n\n",
        choix
      );

      exit(0);
    }

    if(choix == 2)
    {
      exit(0);
    }

    if(choix == 3)
    {
      exit(0);
    }

    if(choix == 4)
    {
      exit(0);
    }

    if(choix == 5)
    {
      exit(0);
    }
  }

  else if(choix == 6)
  {
    printf("Sortie du programme.\n\n");

    exit(0);
  }

  else
  {
    printf
    (
      "Erreur : %d, choix invalide.\n"
      "Sortie du programme.\n\n",
      choix
    );

    exit(0);
  }
}