#ifndef JSONSCHEMANODEVALIDATOR_H
#define JSONSCHEMANODEVALIDATOR_H

#include <QtCore>
#include "../global.h"
#include "../pointer/jsonpointer.h"
#include "../error/jsonschemavalidationerror.h"

class JsonSchemaNodeValidator
{

public:
  virtual ~JsonSchemaNodeValidator() {}
  static JsonSchemaNodeValidator* getValidator(JsonSchemaVersion::Version version);

  virtual QList<JsonSchemaValidationError> validateNode(const JsonPointer& schemaPtr, const JsonPointer& instancePtr);

protected:
  JsonSchemaNodeValidator() {}

  virtual QList<JsonSchemaValidationError> typeClause(const JsonPointer& schemaPtr, const JsonPointer& instancePtr);
};

#endif // JSONSCHEMANODEVALIDATOR_H
