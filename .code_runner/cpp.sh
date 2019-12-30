#!/bin/sh
SCRIPT_DIR=$(cd $(dirname $0); pwd)
g++ -std=gnu++1y -O2 -o out $1
./out < ${SCRIPT_DIR}/input.txt
rm out