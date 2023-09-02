#ifndef MAIN_H
#define MAIN_H

void generateBillHeader(char name[50],char date[30]);
void generateBillBody(char item[30],int qty, float price);
void generateBillFooter(float total);
#endif
