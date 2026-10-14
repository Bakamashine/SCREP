#ifndef SCREP_H
#define SCREP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #include <Windows.h>
    #define СЛАВА_РОССИИ SetConsoleOutputCP(CP_UTF8);
#else
    #define СЛАВА_РОССИИ
#endif

#define ВЕЛИЧИЕ            int main
#define ЧИСЛО              int
#define ПУСТОТА            void
#define СИМВОЛ             char
#define КОРОТКОЕ           short
#define ДЛИННОЕ            long
#define БЕЗ_ЗНАКА          unsigned
#define РАЗМЕР             size_t
#define САМОВЫДЕЛЕНИЕ      auto

#define НАША_ПРАВДА        1
#define ИХ_ЛОЖЬ            0

#define ОТКЛИК             printf
#define ОТКЛИК_СТРОКА      puts
#define СЛУШАТЬ            scanf

#define ВОЗВРАТ            return
#define ЕСЛИ               if
#define ИНАЧЕ              else
#define ДРУГОЙ_ПУТЬ        else if
#define ЦИКЛ               for
#define ПОКА_НЕ            while
#define ДЕЛАТЬ             do
#define ПЕРЕКЛЮЧИТЬ        switch
#define СЛУЧАЙ             case
#define ПО_УМОЛЧАНИЮ       default
#define ПРЕРВАТЬ           break
#define ПРОДОЛЖИТЬ         continue
#define ИДТИ_НА            goto

#define ПЛЮС               +
#define МИНУС              -
#define УМНОЖИТЬ           *
#define ДЕЛИТЬ             /
#define ОСТАТОК            %
#define ВЕЛИЧИНА           sizeof

#define ВЫДЕЛЕНИЕ          malloc
#define ПЕРЕВЫДЕЛИТЬ       realloc
#define СВОБОДНЫЙ          free
#define ВЫТЕРЕТЬ           memset
#define СКОПИРОВАТЬ        memcpy

#define СКРЕПА             struct
#define ОБЪЕДИНИТЬ         union
#define ПЕРЕЧИСЛИТЬ        enum
#define ПОСТОЯННО          const
#define ОБЫЧНО             static
#define ВНЕШНЕ             extern
#define ЗАРЕГИСТРИРОВАТЬ   register
#define БЕЗ_ИЗМЕНЕНИЙ      volatile
#define ПСЕВДОНИМ          typedef

#define ХОХЛЫ              0
#define РУССКИЕ            1

#define НЕУДОВЛЕТВОРИТЕЛЬНО 2
#define УДОВЛЕТВОРИТЕЛЬНО   3
#define ХОРОШО              4
#define ОТЛИЧНО             5

#define ОДИН_ОДИН_СЕМЬ     exit(0)

#ifdef __cplusplus
    #include <iostream>
    #include <sstream>
    #include <string>
    #include <vector>
    #include <map>
    #include <thread>
    #include <chrono>
    #include <stdexcept>

    #define ПОПЫТКА            try
    #define БЕДА               throw
    #define ПОНЯЛ              catch
    #define ВСЁ_ПОНЯЛ          catch(...)
    #define НАША_БЕДА          std::runtime_error
    #define ЛОГИЧЕСКАЯ_БЕДА    std::logic_error
    #define ПЛОХОЙ_ДОСТУП      std::out_of_range
    #define СТРАШНАЯ_БЕДА      std::exception

    #define ПЕРЕПИСЬ_НАСЕЛЕНИЯ std::map
    #define СПИСОК_ГРАЖДАН     std::vector
    #define ПАРТИЙНАЯ_КАРТОТЕКА std::map
    #define ОЧЕРЕДЬ_ЗА_ГРЕЧКОЙ  std::deque
    #define ПОТОК              std::stringstream
    #define КОМПЬЮТЕР_ПОТОК     std::thread

    #define ПЛЮС_ОТКЛИК        std::cout
    #define ПЛЮС_ЗАКОНЧИТЬ_СТРОКУ std::endl
    #define ПЛЮС_ВЫВОД_ОШИБКИ  std::cerr
    #define ПЛЮС_СТРОКА     std::string
    #define ТЕРПЕТЬ(секунды) \
        std::this_thread::sleep_for(std::chrono::seconds(секунды));

    #define ОБЫЧНО_ОБЕРНУТЬ    static_cast
    #define ПОСТОЯННО_ОБОРАЧИВАТЬ dynamic_cast
    #define КРУТО_ОБЕРНУТЬ     reinterpret_cast
    #define ОПЕРАТОР           operator
    #define ИМПОРТОЗАМЕЩЕНИЕ   new
    #define ПЛЮС_СВОБОДНЫЙ     delete
    #define РАБОЧИЙ_ДОМ        class
    #define СЕМЬЯ              class
    #define ДОЧЬ               class
    #define СЫН                class
    #define ЖЕНА               class
    #define ТАДЖИК             class
    #define ВООБРАЖЕНИЕ        virtual
    #define ПЕРЕПИСАТЬ         override
    #define ТОВАРИЩ             friend
    #define СХЕМА              template
#endif /* __cplusplus */

#endif /* SCREP_H */
