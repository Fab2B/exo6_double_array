#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "game.h"


bool main_menu(bool *status_game)
{
	char choice[3];
	char *test_choice = NULL;
	printf("Bienvenue ! Voulez-vous faire une partie ?\n1 - Oui\n2 - Non\n");
	scanf("%s", choice);
	test_choice = strpbrk(choice, "1uiUI" );

	if (test_choice != NULL)
	{
		printf("Super ! Jouons !\n");
		*status_game = true;
	}
	else printf("Dommage !\n");
}


int define_game_area(int *pt_largeur, int *pt_hauteur)
{
	int largeur = 0;
	int hauteur = 0;
	printf("Definnisez la surface de jeu\n");
	printf("Largeur ?\n");
	scanf("%d", &largeur);
	printf("Hauteur ?\n");
	scanf("%d", &hauteur);
	*pt_largeur = largeur+2;
	*pt_hauteur = hauteur+2;
}

void control_menu(void)
{
	printf("---------\n");
	printf("Z - UP\nS - DOWN\nQ - LEFT\nD - RIGHT\n5 - QUIT\n");
	printf("---------\n");
}

void init_perimeter_area(char area[][largeur], int *line, int *column)
{
	int i,j;
	for (i=0, j=0;i==0 && j<*column;j++)
		area[i][j]= 'O';
}

/*void print_game(int *area, int *ps_x, int *pos_y)
{
	
}*/