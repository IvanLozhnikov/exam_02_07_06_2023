#include "exam_server_func.h"
#include <QDebug>
#include <QCoreApplication>
#include <queue>
#include <math.h>

QByteArray parsing(QString str, long desc)
{
QByteArray ansv;//создание масива для ответа на сервер
QStringList args = str.split(" ");//создание списка копирующего строку ввода разделяя её по пробелу
	str = args.front();//оставляет в строке первое слова из неё 
	args.pop_front();//удаляет слово команду (первое) из списка
    if(str=="sort")
    {
    return sort(args[0],args[1]);
    }
	return "check is this thing work \r\n";
	//it speaks for itself
}
QByteArray sort(QString step, QString piromide)
{
QByteArray ansv;
int x,n,copy;
bool flag=true;
copy=piromide.toInt();
std::queue <int> am;
while(flag==true) 
{
    if(copy%10!=NULL)
    {
    am.push(copy%10);
    copy=copy/10;
        n++;
    }
    else {
    flag=false;
    }

 }
    double A[1000];
    for(int i=0;i<=n;i++)
    {
        A[i]=am.front();
        am.pop();
    }
    heap_sort(A,n,step);
     for(int i=0;i<=n;i++)
    {
      step=step+" "+QString::number(A[i]);
    }
    ansv= ("Step "+step+"\r\n").toUtf8();
    return ansv;
}
void heap_sort(double *A, int n,QString step) 
{
int it1=step.toInt(),it2=0;
  int i, m;
  // построение пирамиды
  for (i = n/2; i >= 0; i--) 
    sift(A, i, n-1);
  // сортировка массива
  m = n-1;
  while (m >= 1)
  {
  if(it2<=it1)
    {
        swap(A, 0, m);
        sift(A, 0, m-1);
        m--;
        it2++;
    }
    else break;
  }
}
void sift(double *A, int i, int m) 
{
  int j = i, k = i*2+1;	 // левый сын
  while (k <= m) 
  {
    if (k<m && A[k]<A[k+1]) k++; // больший сын
    if (A[j] < A[k])
    { swap(A, j,k); j = k; k = k*2+1; }
    else break;
  }
}
void swap(double *A,int f,int s)
  {
  double X;
  X=A[f];
  A[f]=A[s];
  A[s]=X;
  }
