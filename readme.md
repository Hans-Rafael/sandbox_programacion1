# Recordatorio al equipo
Estructura final:
```
sandbox_programacion1/
├── main.cpp
├── tarea_1.h  ← nuevo
├── tarea_1.cpp
├── tarea_2.h  ← nuevo
└── tarea_2.cpp
```
### Para compilar todo a la vez desde la raiz del proyecto
 **En una linea compila y guarda los archivos en el directorio build y corre todos los archivos que terminan en .cpp`**
* mkdir -p build
g++ *.cpp -o build/programa
./build/programa


### Para correr el programa
* ./programa

#### Para escalar en el futuro, solo se necesita:
1. Crear tarea_N.h y tarea_N.cpp siguiendo el mismo patrón. ej. Crear tarea_3.h y tarea_3.cpp
2. Agregar #include "tarea_N.h" en main.cpp. ej. "tarea_3.h" en main.cpp
3. Agregar un case 'N': en el switch. ej. Agregar case '3': ejecutarTarea3(); break;
4. Añadir tarea_N.cpp al comando de compilación. Ej. g++ main.cpp tarea_1.cpp tarea_2.cpp tarea_3.cpp -o build/programa