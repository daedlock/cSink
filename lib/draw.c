#include "draw.h"

void * printBanner() {
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "\n __      __    _                      _     _      ");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "\n \\ \\    / /   | |                    | |   | |     ");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "\n  \\ \\  / /   _| |_ __   ___ _ __ __ _| |__ | | ___ ");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "\n   \\ \\/ / | | | | '_ \\ / _ \\ '__/ _\\` | '_ \\| |/ _ \\");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "\n    \\  /| |_| | | | | |  __/ |\\ | (_| | |_) | |  __/");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "\n     \\/  \\__,_|_|_| |_|\\___|_|  \\__,_|_.__/|_|\\___|");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "\n                                                   \n");
}

void * printBanner2(){
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "\n__________   ___ .______    __        ______    __  .___________.\n");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "|   ____\\  \\ /  / |   _  \\  |  |      /  __  \\  |  | |           |\n");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "|  |__   \\  V  /  |  |_)  | |  |     |  |  |  | |  | `---|  |----`\n");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "|   __|   >   <   |   ___/  |  |     |  |  |  | |  |     |  |     \n");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "|  |____ /  .  \\  |  |      |  `----.|  `--'  | |  |     |  |     \n");
    cc_fprintf(CC_FG_DARK_RED, stdout, "%s", "|_______/__/ \\__\\ | _|      |_______| \\______/  |__|     |__|  \n\n");
}

