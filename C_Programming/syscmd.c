#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void resetSys(){
    printf("WARNING: RESETING SYSTEM....");
}

bool verifyUser() {
    char* user=getenv("USER");
    if(strcmp(user,"semere")==0)
        return true;
    else
        return false;
}


int main(void) {
    system("ls -l");
    system("showName");

    bool val = verifyUser();
    if(val==1){
        resetSys()
    }
    else {
        printf("Permission Denied\n");
    }

    return 0;
}
