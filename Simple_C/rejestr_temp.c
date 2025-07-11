#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#define BUFFER_SIZE 8

typedef struct 
{
    float value;
    uint32_t timestamp;
} TempRecord ;

typedef struct 
{
    TempRecord records[BUFFER_SIZE];
    size_t save_idx;
    size_t count;
} TempBuffer;

TempRecord* dynamicMem(int n)
{
    TempRecord* str = malloc(sizeof(TempRecord)*n);
    if (str == NULL) return NULL;
    return str;
}

void addRecord(TempRecord* records, int idx, float temp, uint32_t timest)
{
    records[idx].value = temp;
    records[idx].timestamp = timest;
}

void addRecord2(TempBuffer* buf, float temp, uint32_t timest)
{
    buf->records[buf->save_idx].value = temp;
    buf->records[buf->save_idx].timestamp = timest;
    buf->save_idx = (buf->save_idx + 1 ) % BUFFER_SIZE;
    if (buf->count < BUFFER_SIZE) buf->count++;
}

void printRecord(TempRecord* str, int idx)
{
    printf("Record %d: %.2f %u\n",idx, str[idx].value, str[idx].timestamp);
}

// zapis pomiaru poprzez callback 
void regCallback(void (*func)(TempRecord));

int main()
{
    int n = 3;
    TempRecord* rec = dynamicMem(n);

    addRecord(rec, 0, 23.5, 100);
    addRecord(rec, 1, 26.3, 101);
    addRecord(rec, 2, 29.7, 102);

    for (int i = 0; i<n; i++ )
    {
        printRecord(rec, i);
    }
    free(rec);
    return 0;
}