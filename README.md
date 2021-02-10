# RPGFeaturesSandbox
Proof of concept project for RPG feature ideas and experiments.

## Current Features
- Player party functionalities like recruiting, disposing and selecting active party members.
- Command Queue that stores incoming commands and puts them into an execution queue while completing them in order.
- Example Move command.
- Path Visualizer actor that uses navigation/spline/spline meshes to always show the current path of the character in the order of Command Queue items.
- Self made basemesh to practice human body topology and rigging. ~10k tris

## Controls
- Right click to give instant move command that clears the queue.
- Shift+Right Click to add move command to the queue.

This is a BP prototype for testing and trying out methods and ideas inside UE4. Should not be taken for production quality.
