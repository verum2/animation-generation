//
//  main.c
//  animation-generation
//
//  Created by Alexander Morozov on 18.06.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{
    FILE* f;
    int i ;
    f=fopen("/animation-map.txt", "w");
    for(i=1;i<=10;i++)
    {
        fprintf(f, "<dict>\n<key>count</key>\n<integer>1</integer>\n<key>name</key>\n<string>play-menu-buttons-sound-select%.4d.png</string>\n</dict>\n",i);
    }
    fclose(f);
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

