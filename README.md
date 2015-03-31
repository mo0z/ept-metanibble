metanibble (2003 school project)
================================

  Xlib nibble game, supports multiplayer via TCP/IP.

  Rely on select() for multiplexing client connections *and* the X
connection in a single process.

  Maps are written as simple ASCII files, example:

    wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
    w.................ww...................w
    w.....2...........ww...............1...w
    w..................9...................w
    w.................ww...................w
    w.................ww...................w
    w.................ww...................w
    w.................ww...................w
    w.................ww...................w
    w.................ww...................w
    w.................ww...................w
    w..................8..............3....w
    w.................ww...................w
    w..4..............ww...................w
    w.................ww...................w
    wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww


Project status in 2015:

* Build with warnings.
* Imlib was vendored in the past as it become less and less packaged
  on new platforms. However I was not even to rebuild it last time I
  tried.
