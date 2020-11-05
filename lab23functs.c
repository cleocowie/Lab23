/** lab23functs.c
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
#include <string.h>
#include "lab23functs.h"

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * ----------------------------------------------------------
 */

int getNumRecs(char dataFile[]) {

    int numCadets = 0;

    FILE * datum = fopen(dataFile,"r");
    if (datum == NULL) {
        printf("Error.\n");
        return -1;
    }

    fscanf(datum,"%d",&numCadets);


    return numCadets;
}

/** ----------------------------------------------------------
 * Reads CadetInfoStructType  records from a text file
 * @param cadetRecords is the array of cadet records
 * @param numRecs is the number of records in the file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * ----------------------------------------------------------
 */

void getDataText(CadetInfoStructType cadetRecords[],int numOfRecs,char dataFile[]) {
     FILE * datum = fopen(dataFile,"r");
    if (datum == NULL) {
        printf("Error.\n"); 
        return;
    }
   
    char firstName[50];
    char ignore[1000];
    char lastName[50];
    fgets(ignore,sizeof(ignore),datum);
     
    int i;

   for  (i = 0; i<numOfRecs; ++i) {
        fscanf(datum, "%s %s %d %d %d", lastName, firstName, &cadetRecords[i].age,&cadetRecords[i].squad,&cadetRecords[i].year);
        
        strcat(firstName, " ");
        strcpy(cadetRecords[i].name, strcat(firstName, lastName));
    
    }
    fclose(datum);

}


    

