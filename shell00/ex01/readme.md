# Encuentra la manera de que tu pantalla muestre lo siguiente (excepto por la línea de “total 1”):
```
%> ls -l
total XX
-r--r-xr-x 1 user staff 40 Jun 1 23:42 testShell00
%>
```

1. Para crear el archivo desde la terminal unix -> touch nombre_archivo



2. Para mostrar la lista de archivos en el directorio actual con el formato especificado, podemos utilizar el siguiente comando en la terminal:

```
head -c 40 /dev/zero > testShell00 -> Para crear un archivo nuevo con un tamaño en particular
chmod 455 testShell00 -> Para cambiar permisos del archivo
touch -t 202106012342.00 testShell00 -> Para cambiar la fecha


ls -l -> Para mostrar la lista  su informacion
```

3. Una vez completados los pasos anteriores, ejecuta el siguiente comando para crear el archivo que debe ser entregado: 

```
tar -cf testShell00.tar testShell00. -> Crea un archivo comprimido que contiene el ejercicio
tar -xf testShell00.tar -> Para extraer 
```