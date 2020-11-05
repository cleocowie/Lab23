/** lab23functs.h
 * ===========================================================
 * Name: Cowie, 19 Oct 2020
 * Section: T1/2
 * Project: Lab 23
 * ===========================================================
 */
#ifndef LAB23_FUNCTS_H
#define LAB23_FUNCTS_H


//define our cadet info type for later use
typedef struct CadetInfoStruct {
    char name[50];
    int age;
    int squad;
    int year;
} CadetInfoStructType;

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * ----------------------------------------------------------
 */
int getNumRecs(char dataFile[]);
void getDataText(CadetInfoStructType cadetRecords[],int numOfRecs,char dataFile[]);



#endif //LAB23_FUNCTS_H