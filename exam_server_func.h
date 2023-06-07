#ifndef EXAM_SERVER_FUNC_H
#define EXAM_SERVER_FUNC_H
#include<QByteArray>
#include <QString>
QByteArray parsing(QString str, long desc);
QByteArray sort(QString step, QString piromide);
void heap_sort(double *A, int n,QString step);
void sift(double *A, int i, int m);
void swap(double *A,int f,int s);
#endif