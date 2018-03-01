#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const char PATH[] = "C:\\destination\\";

//writes struct to file by overwriting it.
void writeStructToFile(struct STRUCT structure) {
    FILE *fileContainingData = 0;
    char destinationPath[1024];
    snprintf(destinationPath, sizeof destinationPath, "%s%s", PATH, structure.name);
    fileContainingData = fopen(destinationPath, "wb");
    if (fileContainingData != NULL) {
        fwrite(&account, sizeof (struct STRUCT), 1, fileContainingData);
        fclose(fileContainingData);
    }
    return;
}

//reads struct from file as struct and returns it.
struct STRUCT readStructFromFile(char *fileName) {
    FILE *fileContainingData = 0;
    struct STRUCT structToRead;
    char destinationPath[1024];
    snprintf(destinationPath, sizeof destinationPath, "%s%s", PATH, fileName);
    fileContainingData = fopen(destinationPath, "rb");
    fread(&structToRead, sizeof (structToRead), 1, fileContainingData);
    if (fileContainingData) {
        fclose(fileContainingData);
    }
    return structToRead;
}

//deletes the file containing the account !!!DOES NOT PERFRORM ANY CHECKS
int deleteFile(char *fileName) { 
    char destinationPath[1024];
    snprintf(destinationPath, sizeof destinationPath, "%s%s", PATH, fileName);
    return remove(destinationPath);
}

//Checks if the file exists using the file name
bool accountExist(const char *path, char *filename) {
    char destinationPath[1024];
    snprintf(destinationPath, sizeof destinationPath, "%s%s", path, filename);
    bool result = false;
    FILE *file;
    if ((file = fopen(destinationPath, "r")) != NULL) {
        result = true;
        fclose(file);
    } else {
        result = false;
    }
    return result;
}
