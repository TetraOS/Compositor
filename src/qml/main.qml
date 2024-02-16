import QtQuick 2.12
import QtWayland 1.0

Item {
    id: root
    width: 800
    height: 600

    WaylandCompositor {
        id: compositor
        anchors.fill: parent
    }

    WaylandShell {
        id: shell
        compositor: compositor
    }

    WaylandSurface {
        id: surface
        shell: shell
        x: 100
        y: 100
        width: 200
        height: 200
        color: "red"
    }
}
