#include <iostream>
#include <libpq-fe.h>
#include <stdlib.h>
int main() {
  PGconn *conn = PQconnectdb("user=user password=password dbname=mydb "
                             "hostaddr=172.26.0.2 port=5432");

  if (PQstatus(conn) == CONNECTION_BAD) {
    std::cerr << "Connection to database failed: " << PQerrorMessage(conn)
              << std::endl;
    PQfinish(conn);
    exit(1);
  }
  std::cout << "Connected to database: " << PQdb(conn) << std::endl;
  /* Your database operations go here */

  PQfinish(conn);
  return 0;
}
