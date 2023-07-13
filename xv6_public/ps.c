#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include <stdbool.h>


int main(int argc, char* argv[])
{
    int* arr = 0;

    int size = 1;
    int count = 1;
    for (int j = 0; j<count; j++)
    {
        int id = fork();
        if(id == 0)
        {
            arr = malloc(size*1000 * sizeof(int));
            while(true)
            {
                continue;
            }
            *arr = 2;
        }
    }
    proc_dump();
    exit();
}