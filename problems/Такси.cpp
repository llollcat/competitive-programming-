/*ограничение по времени на тест
3 seconds
ограничение по памяти на тест
256 megabytes
ввод
стандартный ввод
вывод
стандартный вывод

После окончания уроков n групп школьников вышли на улицу и собрались ехать домой к Поликарпу на празднование его дня рождения. Известно, что i-ая группа состоит из si друзей (1 ≤ si ≤ 4), которые не хотят расставаться по пути к Поликарпу. Решено ехать на такси. Каждая машина может вместить не более четырех пассажиров. Какое минимальное количество машин потребуется школьникам, если каждая группа должна целиком находиться в одной из машин такси (но одна машина может вмещать более чем одну группу)?
Входные данные

В первой строке записано целое число n (1 ≤ n ≤ 105) — количество групп школьников. Вторая строка содержит последовательность целых чисел s1, s2, ..., sn (1 ≤ si ≤ 4). Числа записаны через пробел, si — количество ребят в i-ой группе.
Выходные данные

Выведите единственное число — минимальное необходимое количество такси, чтобы отвезти всех ребят к Поликарпу.
Примеры
Входные данные
Скопировать

5
1 2 4 3 3

Выходные данные
Скопировать

4

Входные данные
Скопировать

8
2 3 4 4 2 1 3 1

Выходные данные
Скопировать

5

Примечание

В первом тесте возможно следующее распределение по четырем машинам:

    третья группа (из четырех школьников),
    четвертая группа (из трех школьников),
    пятая группа (из трех школьников),
    первая и вторая группы (из одного и двух школьников соответственно). 

Существуют и другие способы расположиться в четырех машинах.*/

#include <bits/stdc++.h>

using namespace std;


int main() {
    long long counter[5];
    fill(counter, counter+5, 0);
    long long n; cin >> n;

    for (long long i = 0; i<n; ++i){

        long long input; cin >> input;
        ++counter[input];

    }
    long long out = counter[4];
    counter[4] =0;


    out+= counter[3];
    counter[1] -= counter[3];
    if (counter[1]<0)
        counter[1]=0;

    out+= counter[2]/2;

    if (counter[2] % 2){
        ++out;
        counter[1]-=2;
    };
    if (counter[1]<0)
        counter[1]=0;

    out += counter[1]/4 + !!(counter[1]%4);


    cout << out;







    return 0;
}
