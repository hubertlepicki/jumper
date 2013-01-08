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
lines of C++ code fix the issue for me :).

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

License
-------

This is ~10 lines of source code, seriously, dude? Okay, it's MIT.

Copyright (C) 2013 Hubert Łępicki <hubert.lepicki@amberbit.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

