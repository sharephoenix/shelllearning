#!/bin/bash
COUNT=0
while read LINES
do
USERNAME=`echo $LINES | cut -f1 -d ' '`
PASSWORD=`echo $LINES | cut -f2 -d ' '`
echo "USERNAME:$USERNAME PASSWORD:$PASSWORD"
let COUNT+=1
done < addusers.txt

echo ${COUNT}
