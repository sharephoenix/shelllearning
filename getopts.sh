#!/bin/bash

while getopts 'd:Dm:f:t:' OPT; do
	case $OPT in
		d)
			DEL_DAYS="$OPTARG"
			echo $DEL_DAYS
			;;
		D)
			DEL_ORIGINAL='yes'
			echo $DEL_ORIGINAL	
			;;
		f)
			DIR_FROM="$OPTARG"	
			echo $DIR_FROM	
			;;
		m)
			MAILDIR_NAME="$OPTARG"
			echo $MAILDIR_NAME
			;;	
		t)
			DIR_TO="$OPTARG"
			echo $DIR_TO
			;;	
		?)
			echo "Usage: `basename $0` [options] filename"
	esac
done

#echo "$DEL_DAYS $DEL_ORIGINAL $DIR_FROM $MAILDIR_NAME $DIR_TO"

shift $(($OPTIND - 1))
