#pragma once

#include <stddef.h>

extern int listen_net(char* address);
extern int accept_net(int listener); 

extern int connect_net(char* address);
extern int close_net(int conn);

extern send_net(int conn, char* buffer, size_t size);
extern recv_net(int conn, char* buffer, size_t size);