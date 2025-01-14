#pragma once
#include "config.h"

#if USE_MYSQL
#include <Interpreters/Context_fwd.h>
#include <Storages/StorageMySQL.h>

namespace mysqlxx { class PoolWithFailover; }

namespace DB
{

mysqlxx::PoolWithFailover createMySQLPoolWithFailover(const StorageMySQL::Configuration & configuration, const MySQLSettings & mysql_settings);

}

#endif
