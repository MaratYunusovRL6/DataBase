#include <iostream>
#include <stdio.h>
#include "sqlite3.h"
#include "bd.h"

int main() {
    openBd("tempDataBase.bd\0");
//    request_insert_create("CREATE TABLE IF NOT EXISTS temp(id integer primary key autoincrement, name varchar(32));");
//    request_insert_create("INSERT INTO temp(name) VALUES ('test'),('test1'),('test2'),('test3');");
//
//    request_select("SELECT count() FROM temp;");
    //request_select("SELECT * FROM files;");
    //request_select("SELECT * FROM dirs;");
    request_select("SELECT id FROM files GROUP BY hash HAVING COUNT(hash)>1 ORDER BY id ASC;");
    request_select("DELETE FROM dirs WHERE fixed=1;");
    request_select("SELECT * FROM dirs;");

    closeBd();
    return 0;



















//    char *zErrMsg = 0;
//    int rc;
//    char *sql;
//    const char* data = "Callback function called";
//
//    /* Open database */
//    rc = sqlite3_open("tempDataBase.db", &db);
//
//    if( rc ) {
//        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
//        return(0);
//    } else {
//        fprintf(stderr, "Opened database successfully\n");
//    }
//
//    /* Create SQL statement */
//    sql = "SELECT * from files";
//
//    /* Execute SQL statement */
//    rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
//
//    if( rc != SQLITE_OK ) {
//        fprintf(stderr, "SQL error: %s\n", zErrMsg);
//        sqlite3_free(zErrMsg);
//    } else {
//        fprintf(stdout, "Operation done successfully\n");
//    }
//    sqlite3_close(db);

}
