#!/bin/sh

../src/dec2bin dec 123 | grep -E '^123 -> 1111011$'
