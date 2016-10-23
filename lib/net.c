#include "net.h"



/**
 * Used by CURL_WRITEFUNCTION to process response
 */
size_t processResponse(void * ptr, size_t size, size_t nmemb, void * stream) {
    printf("--[ processResponse called ]--\n");
    printf("[*] ptr:\t\t%p\n", ptr);
    printf("[*] size:\t\t%u\n", size);
    printf("[*] nmemb:\t\t%u\n", nmemb);
    cc_fprintf(CC_FG_GREEN, stdout, "--[ Completed Request ]--\n");
    char *response_ptr =  (char*)stream;
    response_ptr = strndup(ptr, (size_t)(size *nmemb));
}

/**
 * GET a url and return content as string
 */
char * getUrl(char * url) {
    CURL *curl = curl_easy_init();
    char * response = NULL;
    if(curl) {
        CURLcode res;
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &processResponse);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        return response;
    }
}
