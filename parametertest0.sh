#!/bin/bash

#echo $@
 
#-o或--options选项后面接可接受的短选项，如ab:c::，表示可接受的短选项为-a -b -c，其中-a选项不接参数，-b选项后必须接参数，-c选项的参数为可选的
#-l或--long选项后面接可接受的长选项，用逗号分开，冒号的意义同短选项。
#-n选项后接选项解析错误时提示的脚本名字

ARGS=`getopt -o ab:c:: --long along,blong:,clong:: -n 'example.sh' -- "$@"`
if [ $? != 0 ]; then
	echo "Terminating......"
	exit 1
fi

#echo "test0===${ARGS}"

eval set -- "${ARGS}"

#echo "test1===${ARGS}" 

echo "\$1===$1"
echo "\$2===$2"
echo "\$3===$3"
echo "\$4===$4"

case "$1" in
 -a)
  echo "enter getting parameters"
  name0=$2
  name1=$3
 ;;
esac

echo "${name0}++++${name1}"
