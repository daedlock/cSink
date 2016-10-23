#include "lib/net.h"
#include "lib/draw.h"
#include <stdio.h>

int main(){
    printBanner();
    char * saraya = getUrl("http://saraya.io");
    char * google = getUrl("google.com");
    printf("--------------[ Google ]-------------\n%s", google);
    return 0;
}
