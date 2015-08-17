#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>



#define CORYRIGTH_STRING "Copyright (C) NFS, Inc. All Rights Reserved."
#define VERSION  "1.0.0"  
#define FINISH_DATA "2015/03/09"

#define DROP_A_COPYRIGHT_NOTICE     \
    const char *                        \
drop_a_copyright_notice(void) {     \
    return CORYRIGTH_STRING;        \
}

void print_usage( const char *server_name ) {  
    printf("%s %s(%s)\n", server_name, VERSION, FINISH_DATA);  
    printf("This is a message push server.\n");  
}

void print_version( const char *server_name ) { 
    printf( "%s version : %s ", server_name, VERSION );

}

const char *short_opts = "hv";  
const struct option long_opts[] = {  
    {"help", no_argument, NULL, 'h'},  
    {"version", no_argument, NULL, 'v'},  
};  

    static int 
parse_args(int argc, char *argv[])
{
    int hflag = 0;  
    int vflag = 0;  

    int c;  
    while ( (c = getopt_long(argc, argv, short_opts, long_opts, NULL)) != -1 )
    {
        switch ( c ) {  
            case 'h' :  
                hflag = 1;  
                break;  
            case 'v' :
                vflag = 1;
                break;
            case '?' :  
                if ( optopt == 'f' || optopt == 'o' || optopt == 'c' || optopt == 'k' )  
                    printf("Error: option -%c requires an argument\n", optopt);  
                else  
                    printf("Error: unknown option character '\\x%x'\n", optopt);  
                return 1;
            default :  
                abort();  
        } 
    }
    if ( hflag == 1 ) {  
        print_usage(argv[0]);  
        exit(0);  
    }  
    if ( vflag == 1 ) {
        print_version(argv[0]);
        exit(0);
    }

    return 0; 
}

/*
 * Main entry point -
 */
int main(int argc, char** argv)
{
    parse_args(argc, argv);
    printf("progress is starting!!!\n");
    return 0;
}
