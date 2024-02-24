#!/bin/bash

# コンパイルされた実行ファイルを格納するディレクトリ
OUT_DIR=./bin

# 出力ディレクトリが存在しない場合は作成
[ ! -d "$OUT_DIR" ] && mkdir -p "$OUT_DIR"

# srcディレクトリとそのサブディレクトリ内の全ての.cppファイルに対して検索し、それぞれコンパイルする
find src -type f -name "*.cpp" | while read file; do
    # ファイルのパスから基本名を取得（ディレクトリ部分を削除）
    filename=$(basename "$file" .cpp)
    # サブディレクトリを含めたパスから、すべてのスラッシュをアンダースコアに置換して、
    # 一意の出力ファイル名を生成する
    unique_name=$(echo "$file" | sed 's/src\/\?\|\.cpp//g' | sed 's/\//_/g')
    # コンパイルコマンド
    g++-13 -std=c++20 "$file" -o "$OUT_DIR/$unique_name"
done

echo "コンパイルが完了しました。"

