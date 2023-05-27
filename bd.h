//
// Created by Admin on 27.05.2023.
//

#ifndef BD_BD_H
#define BD_BD_H
#include <iostream>
#include <string>
#include <assert.h>
#include "sqlite3.h"

void testBd();


bool openBd(const char* bdName);
bool closeBd();
bool request_insert_create(const char* sqlString);
int getLastRowId();
bool request_select(const char* sqlSting);

#endif //BD_BD_H
