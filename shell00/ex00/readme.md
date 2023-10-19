# Crea un archivo z que, cuando se ejecute un cat sobre él, muestre “Z” seguido de un salto de línea.

1. Para crear un archivo llaado "z" en el que cuando se ejecute el comando cat, muestre "Z" seguido de una nueva linea, podemos usar los siguientes comandos en la terminal

```
echo "Z" > z
```

2. Esto creará un archivo llamado "z" con la letra "Z" de contenido. El operador > redirecciona la salida de del comando echo al archivo llamado "z"

3. Para verificar que el archivo ha sido creado, podemos usar el comando ls para listar los archivos en el directorio actual y entonces usar el comando cat para mostrar el archivo "z".