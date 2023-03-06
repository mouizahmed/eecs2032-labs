#!/bin/bash
if [ $# -ne 3 ]
then
echo "Just three numbers please"
elif  [ $1 -eq $2 ] || [ $1 -eq $3 ] || [ $2 -eq $3 ] 
then
echo "Sorry median here does not mean anything"
else
if [[ (($1 -gt $2) && ($1 -lt $3)) || (( $1 -lt $2 ) && ( $1 -gt $3 )) ]]
then
echo $1
elif [[ (($2 -gt $1) && ($2 -lt $3)) ||  (($2 -lt $1) && ($2 -gt $3)) ]]
then
echo $2
elif [[ (($3 -gt $1) && ($3 -lt $2)) || (($3 -lt $1) && ($3 -gt $2)) ]]
then
echo $3
fi
fi

# ex. $1 = 3, $2 = 1, $3 = 2 
# ex. Median = 2 (middle)

# 1 2 3 ==> $2 > $1 && $2 < $3
# 1 3 2 ==> $3 > $1 && $3 < $2 
# 2 1 3 ==> $1 > $2 && $1 < $3
# 2 3 1 ==> $1 < $2 && $1 > $3
# 3 2 1 ==> $2 < $1 && $1 > $3
# 3 1 2 ==> $3 < $1 && $3 > $2

# $1 > $2 && $1 < $3
# $1 < $2 && $1 > $3
# $2 > $1 && $2 < $3
# $2 < $1 && $1 > $3
# $3 > $1 && $3 < $2 
# $3 < $1 && $3 > $2




