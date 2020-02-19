#include<cstdio>
#include"sqlite3.h"



static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;
    for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
  }


int main() {
  sqlite3 *db;
  char* chyba = 0;
  int str;
  const char* sql;

    /*  1- vytvoření tabulky  : "CREATE TABLE users (name TEXT, money INTEGER)"
                              : "CREATE TABLE zbozi (name TEXT, price INTEGER)" */
    /*  2- vložení dat        : "INSERT INTO users(name,money) VALUES ('Fero', -1200), ('Laco', 500), ('O''Neil', 2)"
                              : "INSERT INTO zbozi(name,money) VALUES ('Gaming mouse A4Tech Bloody 8000', 750), ('Mousepad NaVi Steelseries', 500), ('Notebook Lenovo', 35000)" */
    //  3- vypsání dat        : "SELECT rowid,* FROM users"
  
  
  printf ("Zadej ID zboží: ");
  scanf ("%d",str);
  if (str==0){
    printf(sql = "SELECT rowid,* FROM zbozi");

  else
  }




  sqlite3_open("test.db", &db);
  sqlite3_exec(db, sql, callback, 0, &chyba);
}