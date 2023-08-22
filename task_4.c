#include "main.h"
/**
 * 
 * 
 * 
*/

typedef struct {
    char data[BUFFER];
    size_t position;
} BufferedWriter;

void buf_write(BufferedWriter *writer) {
    (*writer).position = 0;
}

void writeToBuffer(BufferedWriter *writer, const char *str) {
    size_t len = strlen(str);

    if (writer->position + len > BUFFER) {
        
        write(STDOUT_FILE, (*writer).data, (*writer).position);
        (*writer).position = 0;
    }

    
    strncpy((*writer).data + (*writer).position, str, len);
    (*writer).position += len;
}

void flushBufferedWriter(BufferedWriter *writer) {
    if ((*writer).position > 0) {
        write(STDOUT_FILE, (*writer).data, (*writer).position);
        (*writer).position = 0;
    }
}
