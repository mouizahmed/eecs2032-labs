#!/bin/bash

if [ -f "$2" ]
then
if grep -q $1 "$2"
then
echo "$1 does exist in $2"
else
echo "$1 does not exist in $2"
fi
else
echo "$2 does not exist"
fi
