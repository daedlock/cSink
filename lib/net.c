#include "net.h"
#include <stdlib.h>


/**
 * Used by CURL_WRITEFUNCTION to process response
 * copy http response body (ptr) to output
 */
size_t processResponse(char *ptr, size_t size, size_t nmemb, struct HttpResponse *output) {
    /* Write response body to response instance */
    strcpy(output->content, ptr);
}

/**
 * GET a url and return content as string
 */
HttpResponse *getUrl(char *url) {
    CURL *curl = curl_easy_init();
    /* allocate memory for struct instance */
    struct HttpResponse *response = malloc(sizeof(struct HttpResponse));

    /* allocate memory for content */
    response->content = (char *) malloc(100000);

    if (curl) {
        CURLcode res;
        curl_easy_setopt(curl, CURLOPT_URL, url);

        /* Call back function on receiving data */
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &processResponse);

        /* Writable pointer that is used by CURLOPT_WRITEFUNCTION callback */
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, response);

        /* Launch request */
        res = curl_easy_perform(curl);

        /* write http response code to response instance */
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &(response->code));
        curl_easy_cleanup(curl);
        return response;
    }
    else {
        printf("Curl is required. Please install libcurl");
        return NULL;
    }
}
