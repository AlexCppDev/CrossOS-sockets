#pragma once
#include <stdint.h>

typedef struct HTTPreq {
	char method[16];
	char path[2048];
	char proto[16];
	uint16_t state;
	size_t index; 
};
extern HTTP* new_http(char* address);
extern void free_http(HTTP* http);

extern void hande_http(HTTP* http, char* path, void(*)int, HTTPreq*));
extern int16_t listen_http(HTTP* http);

extern void parsehtml_http(int conn, char* filename); 


