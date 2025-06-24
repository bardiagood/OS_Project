#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "custom_logger.h"
// custom logger function 
void log_message(int level, char *message)
{
    char *log_level;
    switch (level) // adding log level string
    {
    case 0:
        log_level = "\"INFO- ";
        break;
    case 1:
        log_level = "\"WARNING- ";
        break;
    case 2:
        log_level = "\"ERROR- ";
        break;
    default:
        log_level = "\"UNKNOWN- ";
        break;
    }
    printf(log_level); // printing log level
    printf(message); // printing the log message
    printf("\"\n"); // going to the next line
}