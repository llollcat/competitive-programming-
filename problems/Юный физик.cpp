/*
 *ограничение по времени на тест
2 seconds
ограничение по памяти на тест
256 megabytes
ввод
стандартный ввод
вывод
стандартный вывод

В одной школе в 11 классе учится мальчик Вася. Как-то раз Вася решил посмотреть матч своей любимой хоккейной команды. А поскольку мальчик очень любит хоккей, даже больше, чем физику, он забыл сделать уроки. В частности, забыл сделать задачки по физике. На следующий день учитель очень разозлился на Васю, и решил его проучить. Он дал нерадивому ученику, казалось бы, простую задачку: дано покоящееся тело в пространстве, и даны силы, действующие на него. Тело можно считать материальной точкой с координатами (0; 0; 0). Васе нужно было ответить, находится ли оно в равновесии. «Ерунда!» — подумал Вася, нужно лишь проверить, что сумма всех векторов равна 0, и принялся решать задачу. Но впоследствии оказалось, что этих сил может быть очень-очень много, и Вася не справится без вашей помощи. Помогите ему. Напишите программу, которая определяет по заданным векторам сил, покоится тело или движется.
Входные данные

В первой строке задано натуральное число n (1 ≤ n ≤ 100), далее следует n строк по три целых числа в каждой: координата xi, координата yi и координата zi вектора силы, приложенной к телу ( - 100 ≤ xi, yi, zi ≤ 100).
Выходные данные

Выведите слово "YES" если тело находится в равновесии, или слово "NO" если не находится.
Примеры
Входные данные
Скопировать

3
4 1 7
-2 4 -1
1 -5 -3

Выходные данные
Скопировать

NO

Входные данные
Скопировать

3
3 -1 7
-5 2 -4
2 -1 -3

Выходные данные
Скопировать

YES

*/
#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, x=0, y=0, z=0; cin >> n;
    for(int i =0; i<n; ++i){
        int temp;
        cin >> temp;
        x+=temp;
        cin >> temp;
        y+=temp;
        cin >> temp;
        z+=temp;


    }
    cout << ((!x&&!y&&!z) ? "YES": "NO");

    return 0;
}
