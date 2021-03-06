#ifndef ODBC_FORWARDS_H_INCLUDED
#define ODBC_FORWARDS_H_INCLUDED
//------------------------------------------------------------------------------
#include <odbc/RefCounted.h>
//------------------------------------------------------------------------------
namespace odbc {
//------------------------------------------------------------------------------
class Connection;
class DatabaseMetaData;
class Environment;
class Exception;
class ParameterMetaData;
class PreparedStatement;
class ResultSet;
class ResultSetMetaData;
class StatementBase;
class Statement;
class ValueBuffer;
//------------------------------------------------------------------------------
typedef Reference<Connection> ConnectionRef;
typedef Reference<DatabaseMetaData> DatabaseMetaDataRef;
typedef Reference<Environment> EnvironmentRef;
typedef Reference<ParameterMetaData> ParameterMetaDataRef;
typedef Reference<PreparedStatement> PreparedStatementRef;
typedef Reference<ResultSet> ResultSetRef;
typedef Reference<ResultSetMetaData> ResultSetMetaDataRef;
typedef Reference<StatementBase> StatementBaseRef;
typedef Reference<Statement> StatementRef;
typedef Reference<ValueBuffer> ValueBufferRef;
//------------------------------------------------------------------------------
} // namespace odbc
//------------------------------------------------------------------------------
#endif
