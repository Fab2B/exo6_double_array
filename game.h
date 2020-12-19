#ifndef __GAME__
#define __GAME__

bool main_menu(bool *status_game);
int define_game_area(int *largeur, int *hauteur);
void init_perimeter_area(char **area, int *largeur, int *hauteur);
void control_menu(void);
void print_game(int *largeur, int *hauteur);

#endif
