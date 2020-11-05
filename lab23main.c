/** lab23main.c
 * ===========================================================
 * Name: Cowie, 19 Oct 2020
 * Section: T1/2
 * Project: Lab 23
 * ===========================================================
 */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "lab23functs.h"

int main (void) {
    CadetInfoStructType*cadetRecords = NULL;
    int numCadets;
    printf("Reading number of records in the data file.\n");
    numCadets=getNumRecs("lab23Data.txt");
    printf("%d records in the data file.\n",numCadets);
    cadetRecords=(CadetInfoStructType*)malloc(numCadets*sizeof(CadetInfoStructType));
    
    getDataText(cadetRecords,numCadets,"lab23Data.txt");
    printf("The first cadet is:\nCadet name = %s\n", cadetRecords[0].name);
    printf("Cadet age = %d\n",cadetRecords[0].age);
    printf("Cadet squad = %d\n",cadetRecords[0].squad);
    printf("Cadet year = %d\n",cadetRecords[0].year);
    printf("The last cadet is:\nCadet name = %s\n",cadetRecords[numCadets-1].name);
    printf("Cadet age = %d\n",cadetRecords[numCadets-1].age);
    printf("Cadet squad = %d\n",cadetRecords[numCadets-1].squad);
    printf("Cadet year = %d\n",cadetRecords[numCadets-1].year);
    free(cadetRecords);
    
    system("pause");

    return 0;
}