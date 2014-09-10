#!/bin/sh

cat $1 $2 >$3
echo "File one:"
cat $1
echo "\nFile two:"
cat $2
echo "\nOutput:"
cat $3
