Проект генерации PPDL описания виртуальной машины для заданного узла онтологического дерева

Структура файлов и каталогов
  Каталог build_ppdl - каталог, содержащий исполняемые файлы и файлы проекта для Visual Studio 2017 генератора PPDL описания. 
  Каталог onto-basics - каталог тестового дерева онтологий
  Файл build_vm.bat - скрипт для запуска генератора и тестирования результирующего PPDL описания
  
Сборка проекта
  Для сборки проекта необходима среда разработки Visual Studio 2017, можно использовать бесплатную версию VS.
  Для сборки проекта необходимо перейти в каталог build_ppdl, открыть в Visual Studio решение build_ppdl.sln и выполнить сборку проекта.
  В результате в корневой директории данного проекта появится исполняемый файл build_ppdl.exe
  
Запуск проекта
  Перейдите в один из подкаталогов каталога onto-basics\federal_level (можно спуститься на несколько уровней вложенности). 
  Из каталога запустить скрипт build_vm.bat, первым параметром скрипта укажите абсолютный путь к каталогоу onto-basics. 
  Например, если проект располагается в каталоге d:\git\kant1-pvmcore, то необходимо указать путь d:\git\kant1-pvmcore\onto-basics 
  Скрипт выполнит генерацию PPDL описания в файл res_vm.hdl и проверит сгенерированное описание посредством запуска компилятора PPDL. 
  В случае успеха в каталоге появятся три новых файла  res_vm.hdl, res-sim.cpp и res-sim.h. Последние два файла - С код симулятора виртуальной машины
  
  
  
    
