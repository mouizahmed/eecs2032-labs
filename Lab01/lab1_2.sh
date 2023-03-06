if [[ $3 = $(($1 + $2)) ]]
then
echo "that is additions"
elif [[ $3 = $(($1 - $2)) ]]
then 
echo "that is subtraction"
elif [[ $3 = $(($1 * $2)) ]]
then
echo "that is multiplication"
fi
