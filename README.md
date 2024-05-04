# C

1. Инкапсуляция и принципы сокрытия:
#### Car
```zsh
# скомпилируем исходный код в объектные файлы
gcc -c book.c -o private.o
gcc -c main.c -o main.o

# скомпонуем объектные файлы
gcc main.o private.o -o exe.out

# запуск скомпонованного файла
./exe.out
```
#### Book
```zsh
# скомпилируем исходный код в объектные файлы
gcc -c book.c -o private.o 
gcc -c main.c -o main.o

# скомпонуем объектные файлы
gcc main.o private.o -o exe.out

# запуск скомпонованного файла
./exe.out
```

2. Композиция и агрегация
#### Motorcycle
```zsh
# скомпилируем исходный код в объектные файлы
gcc -c engine.c -o engine.o 
gcc -c motorcycle.c -o motorcycle.o 
gcc -c main.c -o main.o

# скомпонуем объектные файлы
gcc engine.o motorcycle.o main.o -o exe.out

# запуск скомпонованного файла
./exe.out
```
#### Bus
```zsh
# скомпилируем исходный код в объектные файлы
gcc -c bus.c -o bus.o 
gcc -c person.c -o person.o 
gcc -c main.c -o main.o

# скомпонуем объектные файлы
gcc bus.o person.o main.o -o exe.out

# запуск скомпонованного файла
./exe.out
```
3. Наследование и полиморфизм
#### User
```zsh
# скомпилируем исходный код в объектные файлы
gcc -c person.c -o person.o 
gcc -c student.c -o student.o 
gcc -c main.c -o main.o

# скомпонуем объектные файлы
gcc person.o student.o main.o -o exe.out

# запуск скомпонованного файла
./exe.out
```