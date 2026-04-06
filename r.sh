#!/bin/bash

# 1. 定义变量 (Variables)
FILE="hello.cpp"
OUT="net_tool"

echo "=== 🚀 正杰的自动编译任务开始 ==="

# 2. 清理旧的程序 (Cleanup)
rm -f $OUT

# 3. 编译代码 (Compile)
echo "正在编译 $FILE..."
g++ $FILE -o $OUT

# 4. 判断是否编译成功 (Selection)
if [ $? -eq 0 ]; then
    echo "✅ 编译成功！正在启动程序..."
    echo "---------------------------------"
    ./$OUT
else
    echo "❌ 编译失败，请检查代码错误。"
fi