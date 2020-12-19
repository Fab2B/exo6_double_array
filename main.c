#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "game.h"



int main(void)
{
	bool play_game = false;
	int largeur = 0; 
	int hauteur = 0;

	printf("Status du jeu: %d\n",play_game );
	main_menu(&play_game);
	printf("Status du jeu : %d\n", play_game );

	if(play_game == true)
	{
		printf("C'est parti !\n");
		define_game_area(&largeur, &hauteur);
		printf("Initialisation du jeu.\n");
		char area[hauteur][largeur];
		/*for (int i=0; i<hauteur; i++)
			for(int j=0; j<largeur; j++)
				{
					printf("[ ][%d]\n", j);
					printf("[%d][%d]\n", i, area[i][j]);
					printf("________\n");
				}
		*/
		init_perimeter_area(**area, &hauteur, &largeur);
		int pos_x=1;
		int pos_y=1;

		/*do
		{
			print_game(&largeur, &hauteur);
			control_menu();
			
		} while (play_game == true);*/
	}
	return 0;
}