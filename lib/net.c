#include "net.h"
#include <stdlib.h>



/**
 * Used by CURL_WRITEFUNCTION to process response
 * copy http response body (ptr) to output
 */
size_t processResponse(char * ptr, size_t size, size_t nmemb, char *output) {
    strcpy(output, ptr);
}

/**
 * GET a url and return content as string
 */
char * getUrl(char * url) {
    CURL *curl = curl_easy_init();
    char * response = (char *)malloc(9000);
    if(curl) {
        CURLcode res;
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &processResponse);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, response);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        return response;
    }
}
