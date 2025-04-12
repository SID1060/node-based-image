# Design Document

## Architecture
- **Node System**: Abstract `Node` class with derived classes for each node type. Uses polymorphism for processing.
- **Graph**: `NodeGraph` manages nodes and connections, inherits from `QGraphicsScene` for visualization.
- **UI**: `MainWindow` uses Qt for canvas and properties panel.
- **Image Processing**: OpenCV handles all image operations for efficiency.

## Decisions
- Chose Qt for cross-platform GUI support.
- Used OpenCV for robust image processing capabilities.
- Implemented simple node execution without caching for initial version.
- Focused on modularity to allow easy addition of new nodes.

## Libraries
- **Qt5**: For GUI and event handling.
- **OpenCV**: For image processing operations.

## Challenges
- Node connection UI is basic; needs graphical representation.
- Real-time preview not fully implemented due to time constraints.

