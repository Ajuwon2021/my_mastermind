#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

extern const int MAXIMUM_GAME_ROUNDS_SET_TO_DEFAULT;

int length_of_code_or_str(char *code_or_str);
bool char_or_str_content(char* code_or_str, char code_input);
int flag_t(int flags_len, char** char_flags);
char *codes_or_nbr_rand_gen();
char* flag_c(int input_counter, char** rec_val);
int rec_wrong_codes(char* player_input_code, char* code_target_by_player);
int rec_right_code(char* player_input_code, char* code_target_by_player);
int check_input_code(char* player_input_nbr);
bool secret_evaluator(char* digit_1, char digit_2);
char* rec_input_from_cli();
int buffer_eval(char* player_input_nbr);
void display_game_rounds(int game_ro_cnt);
void success_msg();
void display_nbr_positions(int rightly_positioned, int wrongly_positioned);

#endif
