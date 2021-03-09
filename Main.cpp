#include <string.h>
#include "extclib/http.h"
#include <iostream>
#include <conio.h>

using namespace std; 

void index_page(int conn, HTTPreq* request); 
void about_page(int conn, HTTPreq* request);

int main ()
{
	HTTP* server = new_http("127.0.0.1:7545");
		handle_http(server, "/", index_page);
		handle_http(server, "/about", about_page);
		free_http(serve); 
	setlocale(LC_ALL, "Russian");
	_getch;
	return 0; 
}

void index_page(int conn, HTTPreq* request)
{
	if (strcmp(req->path, "/") != 0)
	{
		parsehtml_http(conn, "index.html"); // file to html 
		return; 
	}
	parsehtml_http(conn, "index.html");
}
void about_page(int conn, HTTPreq* request)
{
	if (strcmp(req->path, "/") != 0)
	{
		parsehtml_http(conn, "index.html"); // file to html 
		return;
	}
	parsehtml_http(conn, "index.html");
}