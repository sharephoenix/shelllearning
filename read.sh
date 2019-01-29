#!/bin/bash
declare N
echo "12 bottles of beer in a box"
echo -n "how many box do you want:"
read N

echo "$((N * 12)) bottle in total"
