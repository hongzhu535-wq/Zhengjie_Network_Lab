#!/bin/bash

# 1. 获取用户输入的第一个参数（例如输入 ./r.sh task1，那 $1 就是 task1）
NAME=$1

# 如果用户没输入名字，默认跑 hello
if [ -z "$NAME" ]; then
    NAME="hello"
fi

FILE="${NAME}.cpp"
OUT="${NAME}.out"

echo "=== 🚀 正在处理项目: $NAME ==="

# 2. 编译并运行
g++ $FILE -o $OUT

if [ $? -eq 0 ]; then
    echo "✅ 编译成功！运行结果如下："
    echo "---------------------------------"
    ./$OUT
    echo "---------------------------------"
else
    echo "❌ 编译失败，请检查代码错误。"
fi
