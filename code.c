#include <stdlib.h>
#include <omp.h>
#include <iostream>
#include <string>
#include <fstream>
#include <dirent.h>
using namespace std;
string substring(int start, int length, string strword) {
 string a = "";
 for (int i = start; i < length; i++) {
 a += strword[i];
 }
 return a;
}
12
int find_all(string sen, string word) {
 int wordLen = word.length();
 int start = 0;
 int endword = wordLen;
 int finLength = sen.length();
 int count = 0;
 string senWord = "";
 for (int i = 0; i <= sen.length(); i++) {
 if (endword > finLength) {
 break;

}
 senWord = substring(start, endword, sen);
 if ((senWord.compare(word)) == 0) {
 count++;
 if (endword > finLength) {
 break;

}

}
 start += 1;
 endword += 1;
