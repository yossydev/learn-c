#!/bin/bash

# コンパイルされた実行ファイルを格納するディレクトリ
OUT_DIR=./bin

# 出力ディレクトリが存在しない場合は作成
[ ! -d "$OUT_DIR" ] && mkdir -p "$OUT_DIR"

# srcディレクトリ内のすべての.cppファイルに対してコンパイルを実行
find src -type f -name "*.cpp" | while read file; do
    # ファイルのパスから基本名を取得（拡張子を除去）
    filename=$(basename "$file" .cpp)
    # ファイルのパスからサブディレクトリを取得し、それをファイル名の一部とする
    sub_dir=$(dirname "$file" | sed 's|src/||' | sed 's|/|_|g')
    # 実行可能ファイルの名前を生成（サブディレクトリ名を含む）
    exec_name="${sub_dir}_${filename}"
    # コンパイルコマンドを実行
    g++-13 -std=c++20 "$file" -o "$OUT_DIR/$exec_name"
done

echo "コンパイルが完了しました。"
