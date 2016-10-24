#include "lib/net.h"
#include "lib/draw.h"
#include <stdio.h>

int main(){
    printBanner();
    char * google = getUrl("http://saraya.io");
    printf("\n--------------[ Google Response ]-------------\n%s", google);
    return 0;
}
