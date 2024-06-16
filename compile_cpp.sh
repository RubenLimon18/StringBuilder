#!/bin/bash
# Script universal para compilar proyectos C++ con clang++

# Verificar si se proporcionó el nombre del ejecutable
if [ "$#" -ne 1 ]; then
    echo "Uso: $0 <nombre_del_ejecutable>"
    exit 1
fi

EXECUTABLE=$1
CPP_FLAGS="-std=c++17"
INCLUDE_DIR="includes"
SOURCE_DIR="src"

echo "Iniciando compilación..."

# Añadir el directorio de includes si existe
if [ -d "$INCLUDE_DIR" ]; then
    CPP_FLAGS+=" -I$INCLUDE_DIR"
fi

# Determinar el directorio de los archivos fuente
if [ -d "$SOURCE_DIR" ]; then
    SOURCE_FILES="$SOURCE_DIR/*.cpp"
else
    SOURCE_FILES="*.cpp"
fi

# Compilar los archivos fuente encontrados
clang++ $CPP_FLAGS $SOURCE_FILES -o $EXECUTABLE

echo "Compilación completada. Ejecutable generado: $EXECUTABLE"

