#ifndef _DES_H_
#define _DES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define ENCRYPTION_MODE 1
#define DECRYPTION_MODE 0

typedef struct {
	uint8_t k[8];
	uint8_t c[4];
	uint8_t d[4];
} key_set;

void generate_key(unsigned char* key);

void generate_sub_keys(unsigned char* main_key, 
					   key_set* key_sets);

void process_message(unsigned char* message_piece, 
					 unsigned char* processed_piece, 
					 key_set* key_sets, 
					 int mode);

#endif
