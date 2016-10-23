#include "lib/net.c"
#include "lib/draw.c"

int main(){
    printBanner();
    char * saraya = getUrl("http://saraya.io");
    char * google = getUrl("google.com");
    printf("--------------[ Google ]-------------\n%s", google);
    return 0;
}
