#!/bin/bash

# コンパイルされた実行ファイルを格納するディレクトリ
OUT_DIR=./bin

# 出力ディレクトリが存在しない場合は作成
[ ! -d "$OUT_DIR" ] && mkdir -p "$OUT_DIR"

# コンパイルされた実行ファイルの名前
EXEC_NAME=my_program

# srcディレクトリとそのサブディレクトリ内の全ての.cppファイルを検索し、
# それらを一つの実行可能ファイルにコンパイルするためのファイルリストを作成する
FILES=$(find src -type f -name "*.cpp")

# コンパイルコマンド
g++-13 -std=c++20 $FILES -o "$OUT_DIR/$EXEC_NAME"

echo "コンパイルが完了しました。"
