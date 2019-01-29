#!/bin/bash
function fun_01 
{
return 1
}
function fun_02
{
return 44
}
fun_01
fun_02
# 返回之前函数的返回值
echo $?
fun_01
count=$?
echo "this is count $count"
