# Simple SFML Hello World Project

Just a small Visual Studio solution set up with a single project that's
configured to use the SFML library in both Debug and Release mode already.

Additional lib's need to be linked by adding the appropriate pragma within
`main.cpp`.

## Build Instructions

Building should be straight-forward.

The first time you open the solution you should be presented with a dialog that
looks like the following:

![](img/SolutionActions.png)

Simply clone the repo, select a Windows 10 SDK and ensure that you do NOT
upgrade the platform toolset.

Current version of SFML being using in this project is for VS2017 so platform
toolset v141 needs to be installed before this project may run.
