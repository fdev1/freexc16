
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_DatabaseMetaData__
#define __java_sql_DatabaseMetaData__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace sql
    {
        class Connection;
        class DatabaseMetaData;
        class ResultSet;
    }
  }
}

class java::sql::DatabaseMetaData : public ::java::lang::Object
{

public:
  virtual jboolean allProceduresAreCallable() = 0;
  virtual jboolean allTablesAreSelectable() = 0;
  virtual ::java::lang::String * getURL() = 0;
  virtual ::java::lang::String * getUserName() = 0;
  virtual jboolean isReadOnly() = 0;
  virtual jboolean nullsAreSortedHigh() = 0;
  virtual jboolean nullsAreSortedLow() = 0;
  virtual jboolean nullsAreSortedAtStart() = 0;
  virtual jboolean nullsAreSortedAtEnd() = 0;
  virtual ::java::lang::String * getDatabaseProductName() = 0;
  virtual ::java::lang::String * getDatabaseProductVersion() = 0;
  virtual ::java::lang::String * getDriverName() = 0;
  virtual ::java::lang::String * getDriverVersion() = 0;
  virtual jint getDriverMajorVersion() = 0;
  virtual jint getDriverMinorVersion() = 0;
  virtual jboolean usesLocalFiles() = 0;
  virtual jboolean usesLocalFilePerTable() = 0;
  virtual jboolean supportsMixedCaseIdentifiers() = 0;
  virtual jboolean storesUpperCaseIdentifiers() = 0;
  virtual jboolean storesLowerCaseIdentifiers() = 0;
  virtual jboolean storesMixedCaseIdentifiers() = 0;
  virtual jboolean supportsMixedCaseQuotedIdentifiers() = 0;
  virtual jboolean storesUpperCaseQuotedIdentifiers() = 0;
  virtual jboolean storesLowerCaseQuotedIdentifiers() = 0;
  virtual jboolean storesMixedCaseQuotedIdentifiers() = 0;
  virtual ::java::lang::String * getIdentifierQuoteString() = 0;
  virtual ::java::lang::String * getSQLKeywords() = 0;
  virtual ::java::lang::String * getNumericFunctions() = 0;
  virtual ::java::lang::String * getStringFunctions() = 0;
  virtual ::java::lang::String * getSystemFunctions() = 0;
  virtual ::java::lang::String * getTimeDateFunctions() = 0;
  virtual ::java::lang::String * getSearchStringEscape() = 0;
  virtual ::java::lang::String * getExtraNameCharacters() = 0;
  virtual jboolean supportsAlterTableWithAddColumn() = 0;
  virtual jboolean supportsAlterTableWithDropColumn() = 0;
  virtual jboolean supportsColumnAliasing() = 0;
  virtual jboolean nullPlusNonNullIsNull() = 0;
  virtual jboolean supportsConvert() = 0;
  virtual jboolean supportsConvert(jint, jint) = 0;
  virtual jboolean supportsTableCorrelationNames() = 0;
  virtual jboolean supportsDifferentTableCorrelationNames() = 0;
  virtual jboolean supportsExpressionsInOrderBy() = 0;
  virtual jboolean supportsOrderByUnrelated() = 0;
  virtual jboolean supportsGroupBy() = 0;
  virtual jboolean supportsGroupByUnrelated() = 0;
  virtual jboolean supportsGroupByBeyondSelect() = 0;
  virtual jboolean supportsLikeEscapeClause() = 0;
  virtual jboolean supportsMultipleResultSets() = 0;
  virtual jboolean supportsMultipleTransactions() = 0;
  virtual jboolean supportsNonNullableColumns() = 0;
  virtual jboolean supportsMinimumSQLGrammar() = 0;
  virtual jboolean supportsCoreSQLGrammar() = 0;
  virtual jboolean supportsExtendedSQLGrammar() = 0;
  virtual jboolean supportsANSI92EntryLevelSQL() = 0;
  virtual jboolean supportsANSI92IntermediateSQL() = 0;
  virtual jboolean supportsANSI92FullSQL() = 0;
  virtual jboolean supportsIntegrityEnhancementFacility() = 0;
  virtual jboolean supportsOuterJoins() = 0;
  virtual jboolean supportsFullOuterJoins() = 0;
  virtual jboolean supportsLimitedOuterJoins() = 0;
  virtual ::java::lang::String * getSchemaTerm() = 0;
  virtual ::java::lang::String * getProcedureTerm() = 0;
  virtual ::java::lang::String * getCatalogTerm() = 0;
  virtual jboolean isCatalogAtStart() = 0;
  virtual ::java::lang::String * getCatalogSeparator() = 0;
  virtual jboolean supportsSchemasInDataManipulation() = 0;
  virtual jboolean supportsSchemasInProcedureCalls() = 0;
  virtual jboolean supportsSchemasInTableDefinitions() = 0;
  virtual jboolean supportsSchemasInIndexDefinitions() = 0;
  virtual jboolean supportsSchemasInPrivilegeDefinitions() = 0;
  virtual jboolean supportsCatalogsInDataManipulation() = 0;
  virtual jboolean supportsCatalogsInProcedureCalls() = 0;
  virtual jboolean supportsCatalogsInTableDefinitions() = 0;
  virtual jboolean supportsCatalogsInIndexDefinitions() = 0;
  virtual jboolean supportsCatalogsInPrivilegeDefinitions() = 0;
  virtual jboolean supportsPositionedDelete() = 0;
  virtual jboolean supportsPositionedUpdate() = 0;
  virtual jboolean supportsSelectForUpdate() = 0;
  virtual jboolean supportsStoredProcedures() = 0;
  virtual jboolean supportsSubqueriesInComparisons() = 0;
  virtual jboolean supportsSubqueriesInExists() = 0;
  virtual jboolean supportsSubqueriesInIns() = 0;
  virtual jboolean supportsSubqueriesInQuantifieds() = 0;
  virtual jboolean supportsCorrelatedSubqueries() = 0;
  virtual jboolean supportsUnion() = 0;
  virtual jboolean supportsUnionAll() = 0;
  virtual jboolean supportsOpenCursorsAcrossCommit() = 0;
  virtual jboolean supportsOpenCursorsAcrossRollback() = 0;
  virtual jboolean supportsOpenStatementsAcrossCommit() = 0;
  virtual jboolean supportsOpenStatementsAcrossRollback() = 0;
  virtual jint getMaxBinaryLiteralLength() = 0;
  virtual jint getMaxCharLiteralLength() = 0;
  virtual jint getMaxColumnNameLength() = 0;
  virtual jint getMaxColumnsInGroupBy() = 0;
  virtual jint getMaxColumnsInIndex() = 0;
  virtual jint getMaxColumnsInOrderBy() = 0;
  virtual jint getMaxColumnsInSelect() = 0;
  virtual jint getMaxColumnsInTable() = 0;
  virtual jint getMaxConnections() = 0;
  virtual jint getMaxCursorNameLength() = 0;
  virtual jint getMaxIndexLength() = 0;
  virtual jint getMaxSchemaNameLength() = 0;
  virtual jint getMaxProcedureNameLength() = 0;
  virtual jint getMaxCatalogNameLength() = 0;
  virtual jint getMaxRowSize() = 0;
  virtual jboolean doesMaxRowSizeIncludeBlobs() = 0;
  virtual jint getMaxStatementLength() = 0;
  virtual jint getMaxStatements() = 0;
  virtual jint getMaxTableNameLength() = 0;
  virtual jint getMaxTablesInSelect() = 0;
  virtual jint getMaxUserNameLength() = 0;
  virtual jint getDefaultTransactionIsolation() = 0;
  virtual jboolean supportsTransactions() = 0;
  virtual jboolean supportsTransactionIsolationLevel(jint) = 0;
  virtual jboolean supportsDataDefinitionAndDataManipulationTransactions() = 0;
  virtual jboolean supportsDataManipulationTransactionsOnly() = 0;
  virtual jboolean dataDefinitionCausesTransactionCommit() = 0;
  virtual jboolean dataDefinitionIgnoredInTransactions() = 0;
  virtual ::java::sql::ResultSet * getProcedures(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getProcedureColumns(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getTables(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::String * > *) = 0;
  virtual ::java::sql::ResultSet * getSchemas() = 0;
  virtual ::java::sql::ResultSet * getCatalogs() = 0;
  virtual ::java::sql::ResultSet * getTableTypes() = 0;
  virtual ::java::sql::ResultSet * getColumns(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getColumnPrivileges(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getTablePrivileges(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getBestRowIdentifier(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jint, jboolean) = 0;
  virtual ::java::sql::ResultSet * getVersionColumns(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getPrimaryKeys(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getImportedKeys(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getExportedKeys(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getCrossReference(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getTypeInfo() = 0;
  virtual ::java::sql::ResultSet * getIndexInfo(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jboolean, jboolean) = 0;
  virtual jboolean supportsResultSetType(jint) = 0;
  virtual jboolean supportsResultSetConcurrency(jint, jint) = 0;
  virtual jboolean ownUpdatesAreVisible(jint) = 0;
  virtual jboolean ownDeletesAreVisible(jint) = 0;
  virtual jboolean ownInsertsAreVisible(jint) = 0;
  virtual jboolean othersUpdatesAreVisible(jint) = 0;
  virtual jboolean othersDeletesAreVisible(jint) = 0;
  virtual jboolean othersInsertsAreVisible(jint) = 0;
  virtual jboolean updatesAreDetected(jint) = 0;
  virtual jboolean deletesAreDetected(jint) = 0;
  virtual jboolean insertsAreDetected(jint) = 0;
  virtual jboolean supportsBatchUpdates() = 0;
  virtual ::java::sql::ResultSet * getUDTs(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, JArray< jint > *) = 0;
  virtual ::java::sql::Connection * getConnection() = 0;
  virtual jboolean supportsSavepoints() = 0;
  virtual jboolean supportsNamedParameters() = 0;
  virtual jboolean supportsMultipleOpenResults() = 0;
  virtual jboolean supportsGetGeneratedKeys() = 0;
  virtual ::java::sql::ResultSet * getSuperTypes(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getSuperTables(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::sql::ResultSet * getAttributes(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual jboolean supportsResultSetHoldability(jint) = 0;
  virtual jint getResultSetHoldability() = 0;
  virtual jint getDatabaseMajorVersion() = 0;
  virtual jint getDatabaseMinorVersion() = 0;
  virtual jint getJDBCMajorVersion() = 0;
  virtual jint getJDBCMinorVersion() = 0;
  virtual jint getSQLStateType() = 0;
  virtual jboolean locatorsUpdateCopy() = 0;
  virtual jboolean supportsStatementPooling() = 0;
  static const jint procedureResultUnknown = 0;
  static const jint procedureNoResult = 1;
  static const jint procedureReturnsResult = 2;
  static const jint procedureColumnUnknown = 0;
  static const jint procedureColumnIn = 1;
  static const jint procedureColumnInOut = 2;
  static const jint procedureColumnOut = 4;
  static const jint procedureColumnReturn = 5;
  static const jint procedureColumnResult = 3;
  static const jint procedureNoNulls = 0;
  static const jint procedureNullable = 1;
  static const jint procedureNullableUnknown = 2;
  static const jint columnNoNulls = 0;
  static const jint columnNullable = 1;
  static const jint columnNullableUnknown = 2;
  static const jint bestRowTemporary = 0;
  static const jint bestRowTransaction = 1;
  static const jint bestRowSession = 2;
  static const jint bestRowUnknown = 0;
  static const jint bestRowNotPseudo = 1;
  static const jint bestRowPseudo = 2;
  static const jint versionColumnUnknown = 0;
  static const jint versionColumnNotPseudo = 1;
  static const jint versionColumnPseudo = 2;
  static const jint importedKeyCascade = 0;
  static const jint importedKeyRestrict = 1;
  static const jint importedKeySetNull = 2;
  static const jint importedKeyNoAction = 3;
  static const jint importedKeySetDefault = 4;
  static const jint importedKeyInitiallyDeferred = 5;
  static const jint importedKeyInitiallyImmediate = 6;
  static const jint importedKeyNotDeferrable = 7;
  static const jint typeNoNulls = 0;
  static const jint typeNullable = 1;
  static const jint typeNullableUnknown = 2;
  static const jint typePredNone = 0;
  static const jint typePredChar = 1;
  static const jint typePredBasic = 2;
  static const jint typeSearchable = 3;
  static const jshort tableIndexStatistic = 0;
  static const jshort tableIndexClustered = 1;
  static const jshort tableIndexHashed = 2;
  static const jshort tableIndexOther = 3;
  static const jshort attributeNoNulls = 0;
  static const jshort attributeNullable = 1;
  static const jshort attributeNullableUnknown = 2;
  static const jint sqlStateXOpen = 1;
  static const jint sqlStateSQL99 = 2;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_sql_DatabaseMetaData__