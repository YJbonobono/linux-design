#! /bin/sh
row=$1
col=$2
for i in $(seq 1 $row)
do
	for j in $(seq 1 $col)
	do
		gob=`expr $i \* $j`
		echo -n $i"*"$j"="$gob" "
	done
	echo "\n"
done
exit 0
