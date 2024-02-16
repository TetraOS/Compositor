#ifndef COMPOSITOR_H
#define COMPOSITOR_H

#include <QObject>
#include <QWaylandCompositor>
#include <QWaylandShell>
#include <QWaylandShellSurface>
#include <QWaylandOutput>
#include <QWaylandSeat>

class Compositor : public QObject {
    Q_OBJECT

public:
    Compositor(QObject *parent = nullptr);
    ~Compositor();

private slots:
    void onSurfaceCreated(QWaylandSurface *surface);
    void onShellCreated(QWaylandShell *shell);
    void onSurfaceDestroyed(QWaylandSurface *surface);
    void onSurfaceMapped(QWaylandSurface *surface);
    void onSurfaceUnmapped(QWaylandSurface *surface);
    void onShellDestroyed(QWaylandShell *shell);
    void onShellSurfaceCreated(QWaylandShellSurface *shellSurface);
    void onShellSurfaceDestroyed(QWaylandShellSurface *shellSurface);
    void onShellSurfaceMapped(QWaylandShellSurface *shellSurface);
    void onShellSurfaceUnmapped(QWaylandShellSurface *shellSurface);

private:
    QWaylandCompositor *m_compositor;
};

#endif // COMPOSITOR_H
