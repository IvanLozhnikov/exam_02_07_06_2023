QT += testlib network sql
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_exam_server_func_test.cpp 
    exam_server_func.cpp 
    mytcpserver_ex.cpp

HEADERS += 
    exam_server_func.h 
    mytcpserver_ex.h

DISTFILES += 
    Dockerfile 
    README.md 