#include "lib/net.h"
#include "lib/draw.h"
#include <stdio.h>

int main(){
    printBanner();
    HttpResponse * google = getUrl("http://saraya.io");
    printf("\n--------------[ Google Response ]-------------\n%s\nCode:%d\n", google->content, google->code);
}
