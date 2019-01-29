#!/bin/bash
ARGS=`getopt -o ab:c:: --long along,blong:,clong:: -n 'example.sh' -- "$@"`
if [ $? != 0 ]; then
	echo "Terminating......"
	exit 1
fi

# echo $ARGS	
# 将规范化后的命令参数费配置位置参数 （$1,$2,.....）
eval set -- "${ARGS}"
while true
do 
	case "$1" in
	 -a|--along)
	  echo "Option a";
	  shift 2
	  ;;
	 -b|-blong)
	  echo "Option b, argument $2";
	  shift 2
	  ;;
	 -c|-clong)
		  case "$2" in
		   "")
		    echo "Option c, no argument"
		    shift 2    
		    ;;
		   *)
		     echo "Option c, argument $2";
		     shift 2;
		     ;;
		   esac
	   ;;
	 --)
	  shift
	 break
	   ;;
	 *)
	  echo "Internal error"
	  exit 1
	  ;;
	esac
done
# 处理剩下的 参数
for arg in $@
do 
 echo "other processing $arg"
done
