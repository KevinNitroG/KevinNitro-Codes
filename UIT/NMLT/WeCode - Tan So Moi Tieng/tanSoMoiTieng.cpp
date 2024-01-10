#include <iostream>
#include <string>
using namespace std;

// bool checkIfWordAlreadyInArrayOfWords(string myString, string myStringArray[], int numberOfElement)
// {
//     for (int i = 0; i < numberOfElement; i++)
//         if (myString == myStringArray[i])
//             return true;
//     return false;
// }

int returnIndexWhenAlreadyInArray(string myString, string myStringArray[], int numberOfElement)
{
    for (int i = 0; i < numberOfElement; i++)
        if (myString == myStringArray[i])
            return i;
    return -1;
}

int main()
{
    string myString;
    getline(cin, myString);

    string countOfWords[100];
    int indexCountOfWords = 0;

    int countOfEachWord[100];

    int myStringLength = myString.length();
    int startIndexOfCurrentWord = 0;
    for (int i = 0; i < myStringLength; i++)
        if (myString[i] == ' ' || i == myStringLength - 1)
        {
            string currentWord = myString.substr(startIndexOfCurrentWord, i - startIndexOfCurrentWord);
            int currentIndex = returnIndexWhenAlreadyInArray(currentWord, countOfWords, indexCountOfWords);
            if (currentIndex == -1)
            {
                countOfWords[indexCountOfWords] = currentWord;
                countOfEachWord[indexCountOfWords++]++;
                startIndexOfCurrentWord = i;
            }
            else
                countOfEachWord[currentIndex]++;
            i++;
        }
    for (int i = 0; i < indexCountOfWords; i++)
        cout << countOfWords[i] << ": " << countOfEachWord[i] << endl;
}