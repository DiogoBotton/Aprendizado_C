#!/bin/bash

# 1° Paramêtro: nome do arquivo
# Para compilar, apenas digitar na linha de comando:
# sh cpl.sh [nomeArquivo].c

mkdir -p outputs
gcc $1 -o "outputs/${1%.c}"