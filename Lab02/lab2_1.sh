#!/bin/bash
Result=$1

if [ $# -eq 0 ]
then
	echo "No numbers to add"
else
while [ X$1 != "X" ]
shift
do
	Result=$((Result+$1))
	echo $1
	shift
done
echo $Result
fi
