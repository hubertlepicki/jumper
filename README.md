jumper -- move your cursor from command line
============================================

This program allows you to jump your cursor in X11 (Linux/BSD). It will
probably also work under MacOS X and Windows (untested).

Background
----------

I use dual monitor set up, but no tiling window manager (yet, I guess).
I don't use mouse, just keyboard with touchpad (Logitech K400 to be
precise). Dragging cursor around from one monitor to another is a
nightmare for me, especially in Ubuntu with it's sticky dock. These few
lines of C++ code fixe the issue for me :).

Usage
-----

Install Qt 4 and git, on Ubuntu with:

    $ sudo apt-get install libqt4-dev git

Get the sources with:

    $ git clone git://github.com/hubertlepicki/jumper.git

Compile the sources:

    $ qmake && make

You run the program with:

    $ ./jumper XPOS YPOS

for example:

    $ ./jumper 100 200

Pro tip: copy over binary somewhere to your $PATH and configure
shortcuts to jump from centre of your left monitor to the centre of your
right monitor.



