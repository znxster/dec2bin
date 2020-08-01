#!/bin/sh

srcdir=`dirname $0`
test -z "$srcdir" && srcdir=.

if [ ! -f "$srcdir/configure.ac" ]; then
	echo "$srcdir missing configure.ac?" >&2
	exit 1
fi

autoreconf --install
