#ifndef JSONPOINTER_H
#define JSONPOINTER_H

#include <QtCore>

class JsonPointer
{
public:
  QStringList path;
  QJsonValue root;
  QJsonValue v;

public:
  explicit JsonPointer(const QJsonValue& root = QJsonValue());
  explicit JsonPointer(const QJsonValue& root, const QJsonValue& v, const QStringList& path);

  JsonPointer operator[](const QString& key) const;
  JsonPointer operator[](int index) const;

  bool isValid() const;
};

#endif // JSONPOINTER_H
