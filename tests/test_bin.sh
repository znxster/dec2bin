#!/bin/sh

../src/dec2bin bin 1111011 | grep -E '^1111011 -> 123$'
