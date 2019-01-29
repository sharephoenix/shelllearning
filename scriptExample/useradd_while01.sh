#!/bin/bash
COUNT=0
while read LINES
do
echo $LINES
let COUNT+=1
done < addusers.txt

echo ${COUNT}
