*This project has been created as part of the 42 curriculum by ksaotome.*

# ft_printf

# Description

`ft_printf` は C 標準ライブラリの `printf()` を再実装するプロジェクトです。 


### ft_printfで使用できる拡張子一覧
| 指定子 | 説明 |
|--------|------|
| `%c`   | 1文字を出力 |
| `%s`   | 文字列を出力 |
| `%p`   | ポインタを16進数で出力 |
| `%d`   | 10進数の整数を出力 |
| `%i`   | 10進数の整数を出力 |
| `%u`   | 符号なし10進数を出力 |
| `%x`   | 16進数（小文字）を出力 |
| `%X`   | 16進数（大文字）を出力 |
| `%%`   | `%` 記号を出力 |

# Instructions

```bash
make
```
`libftprintf.a` がリポジトリのルートに生成されます。

### Makefile ルール
 
| ルール    | 説明 |
|-----------|------|
| `make`    | ライブラリをビルド |
| `make all`| 同上 |
| `make clean` | オブジェクトファイルを削除 |
| `make fclean` | オブジェクトファイルと `libftprintf.a` を削除 |
| `make re` | リビルド |

# Resources
### 参考サイト
- https://github.com/Tripouille/printfTester
	- テスター（テスト作業用）
- https://github.com/xicodomingues/francinette
	- テスター（テスト作業用）
- https://www.sejuku.net/blog/24934
	- printfの挙動調査

### Used AI
- test, error箇所修正発見
- va_list関連の調査