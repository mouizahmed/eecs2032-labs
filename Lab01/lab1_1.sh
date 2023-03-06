#!/bin/bash
read b
echo "Hello, this is $0"
if [[ $1 = $b ]]
then
echo "Identical"
else
echo "Not Identical"
fi
