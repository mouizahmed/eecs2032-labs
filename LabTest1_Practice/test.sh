#!/bin/bash
c=0
for i in *
do
 if [ -f $i ]; then c=$((c+1)); fi
done
echo $c

