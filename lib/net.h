#include <stdio.h>
#include <string.h>
#include <curl/curl.h>
#include "thirdparty/console-colors.h"

typedef struct HttpResponse {
    char *content;
    char *title;
    long code;
} HttpResponse;

typedef struct HttpHeaders {
    char **** headers;
};

HttpResponse *getUrl(char *);
