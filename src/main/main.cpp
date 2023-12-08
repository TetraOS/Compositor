#include <QApplication>
#include <QDebug>
#include <QThread>
#include <QWaylandCompositor>
#include <QWaylandShellSurface>

#include "compositor.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create a QWaylandCompositor
    QWaylandCompositor compositor;

    // Connect to the shell surface created signal
    QObject::connect(&compositor, &QWaylandCompositor::shellSurfaceCreated,
                     [&](QWaylandShellSurface *shellSurface) {
        // Listen for surface state changes
        QObject::connect(shellSurface, &QWaylandShellSurface::stateChanged,
                         [shellSurface] {
            qDebug() << "Shell surface" << shellSurface << "state changed to"
                     << shellSurface->state();
        });
    });

    // Start the compositor in a new thread
    QThread compositorThread;
    compositor.moveToThread(&compositorThread);
    compositorThread.start();

    // Run the Qt application event loop
    return app.exec();
}
