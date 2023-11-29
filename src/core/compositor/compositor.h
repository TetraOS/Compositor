// This is currently a base file content, and more code will be later

#pragma once

#include <QObject>

class Compositor : public QObject
{
    Q_OBJECT

public:
    explicit Compositor(QObject *parent = nullptr);

    // Add any public functions or variables here

signals:
    // Add any signals here

public slots:
    // Add any public slots here

private:
    // Add any private functions or variables here
};
