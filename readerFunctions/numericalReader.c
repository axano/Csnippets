
const char INTEGER_READER_INVALID[] = "The number you entered is invalid, try again.";
const char DOUBLE_READER_INVALID[] = "The number you entered is invalid, try again.";
int MAX_ALLOWED_STRING_LENGTH = 512;

//asks the user to enter an integer
//reads an integer while checking if it is between the given limits
//returns the integer as a value
int readInteger(const char* message, int lowerLimit, int upperLimit) {
    int intToRead = 0;
    char temp[MAX_ALLOWED_STRING_LENGTH];
    do {
        puts(message);
        fflush(stdout);
        fgets(temp, sizeof (temp), stdin);
        intToRead = atoi(temp);
        fflush(stdin);
        if (intToRead < lowerLimit || intToRead > upperLimit) {
            puts(INTEGER_READER_INVALID);
        }
    } while (intToRead < lowerLimit || intToRead > upperLimit);

    return intToRead;
}

//asks the user to enter a double
//reads a double while checking if it is between the given limits
//returns the double as a value
double readDouble(const char* message, double lowerLimit, double upperLimit) {
    double doubleToRead = 0;
    char temp[MAX_ALLOWED_STRING_LENGTH];
    do {
        puts(message);
        fflush(stdout);
        fgets(temp, sizeof (temp), stdin);
        doubleToRead = atof(temp);
        fflush(stdin);
        if (doubleToRead < lowerLimit || doubleToRead > upperLimit) {
            puts(DOUBLE_READER_INVALID);
        }
    } while (doubleToRead < lowerLimit || doubleToRead > upperLimit);
    return doubleToRead;
}
