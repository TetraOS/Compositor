import QtQuick 2.12
import QtWayland 1.0

WaylandCompositor {
    id: comp
    WaylandOutput {
        compositor: comp
        sizeFollowWindow: true
        window: Window {
            visible: true
            width: 700
            height: 700
            }
        }
    }
}
