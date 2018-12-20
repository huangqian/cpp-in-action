//
// Created by huangqian on 2018-12-20.
//
#include <mysql++.h>
#include <ssqls.h>

sql_create_4(posts,
             1, 4,
             mysqlpp::sql_int_unsigned_null, id,
             mysqlpp::sql_character_varying, title,
             mysqlpp::sql_character_varying, body,
             mysqlpp::sql_int_unsigned_null, published)
