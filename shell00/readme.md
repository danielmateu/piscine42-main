# Enunciados Ejercicios

1. Crea un archivo z que, cuando se ejecute un cat sobre él, muestre “Z” seguido de un salto de línea.

Para crear un archivo llamado "z" en el que cuando se ejecute el comando cat, muestre "Z" seguido de una nueva linea, podemos usar los siguientes comandos en la terminal

```
echo "Z" > z
```

Esto creará un archivo llamado "z" con la letra "Z" de contenido. El operador > redirecciona la salida de del comando echo al archivo llamado "z"

Para verificar que el archivo ha sido creado, podemos usar el comando ls para listar los archivos en el directorio actual y entonces usar el comando cat para mostrar el archivo "z".


2. Para mostrar la lista de archivos en el directorio actual con el formato especificado, podemos utilizar el siguiente comando en la terminal:

```
head -c 40 /dev/zero > testShell00 -> Para crear un archivo nuevo con un tamaño en particular
chmod 455 testShell00 -> Para cambiar permisos del archivo
touch -t 202106012342.00 testShell00 -> Para cambiar la fecha


ls -l -> Para mostrar la lista  su informacion
```

Una vez completados los pasos anteriores, ejecuta el siguiente comando para crear el archivo que debe ser entregado: 

```
tar -cf testShell00.tar testShell00. -> Crea un archivo comprimido que contiene el ejercicio
tar -xf testShell00.tar -> Para extraer 
```

3. Crea los siguientes archivos y directorios. Haz lo que sea necesario para que la ejecución de un ls -l en tu directorio muestre algo que se parezca a esto:

```
total XX
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxrwxrwx 1 XX XX 5 Jun 1 22:20 test6 -> test0
```

Para crear los archivos y los directorios especificados y mostrar la lista de archivos en el directorio actual con el formato especificado, podemos utilizar los siguientes comandos en la terminal

```
mkdir test0
chmod 715 test0
touch -t 202306012041.00 test0

mkdir test2
chmod 504 test2
touch -t 202306012245.00 test2

head -c 4 /dev/zero > test1
chmod 714 test1
touch -t 202306012146.00 test1

head -c 1 /dev/zero > test3
chmod 404 test3
touch -t 202306012344.00 test3

head -c 2 /dev/zero > test4
chmod 641 test4
touch -t 202306012343.00 test4

head -c 1 /dev/zero > test5
chmod 404 test5
touch -t 202306012344.00 test5

ln -s test0 test6
chmod -h 777 test6
touch -h -t 202201011230.00 test6
# Para cambiar la fecha y hora

ls -l
```

Estos comandos crean los archivos y directorios especificados, establecen los permisos de archivo y directorio según el formato y se utiliza el comando ls para mostrar la lista de archivos en el directorio actual con el formato especificado

3. La expresión chmod se utiliza para establecer los permisos de archivo y directorio. 
-  El primer dígito especifica los permisos del propietario
-  El segundo dígito especifica los permisos del grupo
-  El tercer dígito especifica los permisos de otros usuarios

4. Los permisos se especifican como una combinación de los siguientes valores:

    4: Lectura
    2: Escritura
    1: Ejecución


# Una vez resuelto el ejercicio, ejecuta el comando tar -cf exo2.tar * para crear el archivo que tendrás que entregar.

```
tar -cf exo2.tar testShell00. -> Crea un archivo comprimido que contiene el ejercicio
tar -xpf exo2.tar -> Para extraer 
```


