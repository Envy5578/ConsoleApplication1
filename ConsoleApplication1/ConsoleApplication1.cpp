// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//VECTOR 
// ERASE - УДАЛИТЬ НЕНУЖНЫЙ ЭЛЕМЕНТ
//
#include <iostream> // стандартная библиотека с функциями
#include <iomanip> /*Манипуляция вводами данных, ввод консоли*/
#include <string> // объявлять переменную строкой
#include <stdlib.h> //содержаться классы (тренеры, векторы)
#include <cmath> //Возведение в степень
#include <windows.h> //доступ к API
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <vector>
#include <sstream>
using namespace std; // рабочее пространство, чтобы не писать каждый раз std
int countBub{};
int countSel{};
void print(vector<int> array) {
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";
    cout << endl;
}
//void print(int* array, int size, string change) {
//    for (int i = 0; i < size ; i++)
//        cout << array[i] << " ";
//}
void print(int* array, int size) {
    for (int i = 0; i < size; i++)
        cout << *(array + i) << " ";
}

vector<int> low(vector<int>array) {
    vector<int> arr ;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == 2 || array[i] == 3) {
            arr.push_back(array[i]);
        }
        else if (array[i] % 2 != 0 && array[i] % 3 != 0) {
            arr.push_back(array[i]);
        }
    }
    return arr;
}
int propiska(int lol);
vector<int> sortUp(vector<int> array) {
    int temp;
    
    for (int i = 0; i < array.size(); i++)
        for (int j = 0; j < array.size(); j++) {
            if (array[i] < array[j]) {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    
    return array;
}
vector<int> sortDown(vector<int> array) {
    int temp;
    for (int i = 0; i < array.size(); i++)
        for (int j = 0; j < array.size(); j++) {
            if (array[i] > array[j]) {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    
    return array;
}
vector<int> minMax(vector<int> array) {
    int max = INT_MIN, min = INT_MAX;
    vector<int>minMax;
    for (int i = 0; i < array.size(); i++) {
        if (max < array[i]) {
            max = array[i];
        }if (min > array[i]) {
            min = array[i];
        }
    }
    minMax.push_back(min);
    minMax.push_back(max);
    
    return minMax;
}
int factorial(int array) {  
    int a;
    cin >> a;
    if (array == 0)
        return 1;
    if (array > 0) {        
        return array * factorial(array-1);
    }    
}
int outIn(int n, int b) {
    cout << n << " ";
    n++;
    if (n <= b) {
        return outIn(n, b);
    }
    else
        return -1;        
}
int sumNumb(int a, int sum) {
    int temp = 0;
    temp += a % 10;
    a /= 10;
    sum += temp;
    if (a > 0) {
        return sumNumb(a, sum);
    }
    else {
        return sum;
    }
}
int smallPos(int list[], int startPosition, int listLength)
{
    int smallestPosition = startPosition;

    for (int i = startPosition; i < listLength; i++)
    {
        if (list[i] < list[smallestPosition])
            smallestPosition = i;
    }
    return smallestPosition;
}

void sortSel(int list[], int listLength)
{
    countSel = 0;
    for (int i = 0; i < listLength; i++)
    {
        int smallestPosition = smallPos(list, i, listLength);
        swap(list[i], list[smallestPosition]);
        countSel++;
    }
    return;
}
int* sortBubble(int array[], int size) {
    countBub = 0;
    int temp;
    for(int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                countBub++;
            }
        }
    return array;
}
//int* filling(int array[], int size) {
//    for (int i = 0; i < size; i++)
//        array[i] = rand() % 50;
//    return array;
//}
vector <int> filling(vector <int> array) {    
    for (int i = 0; i < array.size(); i++) 
        array[i] = rand() % 1000;   
    return array;
}

vector <int> lockGame(vector<int> wheel, vector<int> cirle, vector<int> updown) {
    
    for (size_t i = 0; i < 4; i++) {
        if (updown[i] != 0) {
            wheel[i] += cirle[i];
            if (wheel[i] > 9) {
                wheel[i] %= 10;
            }
        }
        else {
            wheel[i] -= cirle[i];
            if (wheel[i] < 0) {
                wheel[i] += 10;
            }
        }
    }
    return wheel;
}
int longNum(double array, int sum) {
    sum++;
    array /= 10;
    if (array > 0)
        return longNum(array, sum);
    else
        return sum;
}
double longNum(int array, double sum) {
    sum++;
    array /= 10;
    if (array > 0)
        return longNum(array, sum);
    else
        return sum;
}
vector <int> lineSearch(vector<int> array, int key) {
 
    vector <int> help;
    int h = 0;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == key) {
            help.push_back(i + 1);
        }
    }
    return help;
}
int binarSearch(vector <int> array, int size, int key) {
    bool flag = false;
    int l = 0, r = size, mid, count = 0;
    while ((l <= r) && (flag != true)) {
        mid = (l + r) / 2; // считываем срединный индекс отрезка [l,r]

        if (array[mid] == key) flag = true; //проверяем ключ со серединным элементом
        if (array[mid] > key) r = mid - 1; // проверяем, какую часть нужно отбросить
        else l = mid + 1;
    } return mid;
}
int trans(int array) {
    int sum = 0;
    int power = 0;
    do {
        if (array % 10 == 1) {
            sum += pow(2, power);
        }
        power++;
        array /= 10;
    } while (array > 0);

    return sum;
}
int rate(int array, int ex) {
    array = pow(array, ex);
    return array;
}
int sumDia(int a, int b) {
    int sum = 0;
    for (int i = a; i < b; i++) {
        sum += i;
    }
    return sum;
}
void change(int &a, int &b) {
    a ^= b ^= a ^= b;
}
void filling(int *array, int size) {
    for (int i = 0; i < size; i++) {
        *(array + i) = rand() % 100;
    }    
}
int sumLuck(int *array) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += *(array + i);
    }
    return sum;
}

enum menuItems
{
    ENTER_DATA = 1,
    OUTPUT_DATA = 2,
    SORT_BY_MOBILE_NUM = 3,
    SORT_BY_TEL_NUM = 4,
    QUIT = 5
};
int main() // главная функция
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));   
#pragma region Задача с замком и колесиками
 /*   vector <int> wheel(4), cirle(4), updown(4), temp;
    for (size_t i = 0; i < 4; i++) {
        cout << "Введите положение " << i + 1 << " колесика\n", cin >> wheel[i];
        cout << "\nВведите сколько раз крутить " << i + 1 << " колесика\n", cin >> cirle[i];
        cout << "\nВведите в какую сторону крутить " << i + 1 << " колесико\n0 - вниз\n1 - вверх\n", cin >> updown[i];
    }
    printVect(lockGame(wheel, cirle, updown));*/
#pragma endregion

#pragma region Указатели
    //int a = rand()%10, b=rand()%10;
    //int* ptr = &a;
    //int* ptr1 = &b;
    //cout << a << " &&?? " << b << endl;
    //if (*ptr > *ptr1)
    //    cout << *ptr;
    //else
    //    cout << *ptr1;

 /*   int a = -10 + rand() % (10 - (-10) + 1), g = 0;
        int* x = &a;
        cout << a << endl;
    int* f = &g;
    if (*f <= *x)
        cout << " + ";
    else
        cout << " - ";*/
    //int a = rand() % 10, b = rand() % 10;
    //int* ptr = &a;
    //int* ptr1 = &b;
    //cout << *ptr << " < - > " << *ptr1 << endl;
    //ptr = &b;
    //ptr1 = &a;
    //cout << *ptr << " < - > " << *ptr1 << endl;
    //int a, b, x;
    //int* ptr = &a, * ptr1 = &b, *ptr3 = &x;

    //cout << "Введите первое число - ", cin >> *ptr;
    //cout << "Введите второе число - ", cin >> *ptr1;
    //cout << "Выберите действие\n1. Сложение\n2. Умножение\n3. Деление\n4. Вычитание\n", cin >> *ptr3;
    //while (*ptr3 > 0 && *ptr3 < 5) {
    //    switch (*ptr3)
    //    {
    //    case 1: {
    //        cout << *ptr << " + " << *ptr1 << " = " << *ptr + *ptr1;
    //        exit(0);
    //    }
    //    case 2: {
    //        cout << *ptr << " * " << *ptr1 << " = " << *ptr * *ptr1;
    //        exit(0);
    //    }
    //    case 3: {
    //        cout << *ptr << " : " << *ptr1 << " = " << *ptr / *ptr1;
    //        exit(0);
    //    }
    //    case 4: {
    //        cout << *ptr << " - " << *ptr1 << " = " << *ptr - *ptr1;
    //        exit(0);
    //    }
    //    }
    //}
    //int a = 5, b = 10;
    //int* ptr, * ptr1;
    //cout << a << " <-> " << b << endl;
    //change(a, b);
    //cout << a << " <-> " << b;
    int size, x, g = 0;
    cin >> size;
    int* mass = new int[size];
    int* ssam = new int[size - 1];
    filling(mass, size);
    print(mass, size);
    cout << "\nВыберите элемент\n", cin >> x;
    size--;
    for (int i = 0; i < size; i++) {
        if (*(mass + i) != x) {
            *(ssam + i) = *(mass + i);
            g++;
        }
        else {
            swap(*(ssam + i), *(ssam + size));
            *(ssam + i) = *(mass + i);
        }
    }
    cout << endl;
    print(ssam, size);
    delete[] mass;
    /*cout << "\n" <<sumLuck(mass);*/


#pragma endregion
#pragma region 09.02 DZ
   /* const int n = 5;
    int userChoice, mobTel[n], tel[n], temp;
        bool isDataEntered = false;
    do {
        cout << "Your choice:\n";
        cout << "1 — enter data\n";
        cout << "2 — output data\n";
        cout << "3 — sort by mobile number\n";
        cout << "4 — sort by tel.number\n";
        cout << "5 — quit\n";
        cin >> userChoice;
        switch (userChoice) {
        case ENTER_DATA:
        {
            cout << "Please, enter data for each "
                "customer\n";
            isDataEntered = true;
            for (int i = 0; i < n; i++)
            {
                cout << "Input mobile number for ";
                cout << i + 1 << " customer:\n";
                cin >> mobTel[i];
                cout << "Input tel. number for ";
                cout << i + 1 << " customer:\n";
                cin >> tel[i];
            }

            break;
        }
        case OUTPUT_DATA:
        {
            if (isDataEntered)
            {
              
                    cout << "Customer's data:\n";
                cout << "Cust.ID\tMobile number\tTel."
                    "number\n";
                for (int i = 0; i < n; i++)
                {
                    cout << i + 1 << " " << mobTel[i];
                    cout << " " << tel[i] << "\n";
                }
            }
            else
            {
                cout << "There is no data!" << "\n";
                cout << "Please, enter data for each "
                    "customer at first\n";
            }

            break;
        }
        case SORT_BY_MOBILE_NUM:
        {
            if (isDataEntered)
            {
                cout << "Sorting data by mobile "
                    "number ....\n";
                for (int i = 1; i < n; ++i)
                {
                    for (int r = 0; r < n - i; r++)
                    {
                        if (mobTel[r] < mobTel[r + 1])
                        {
                            temp = mobTel[r];
                            mobTel[r] = mobTel[r + 1];
                            mobTel[r + 1] = temp;
                          
                                temp = tel[r];
                            tel[r] = tel[r + 1];
                            tel[r + 1] = temp;
                        }
                    }
                }
            }
            else
            {
                cout << "There is no data!" << "\n";
                cout << "Please, enter data for "
                    "each customer at first\n";
            }
            break;
        }
        case SORT_BY_TEL_NUM:
        {
            if (isDataEntered)
            {
                cout << "Sorting data by tek. "
                    "number ....\n";
                for (int i = 1; i < n; ++i)
                {
                    for (int r = 0; r < n - i; r++)
                    {
                        if (tel[r] < tel[r + 1])
                        {
                            temp = tel[r];
                            tel[r] = tel[r + 1];
                            tel[r + 1] = temp;

                            temp = mobTel[r];
                                                          
                                mobTel[r] = mobTel[r + 1];
                            mobTel[r + 1] = temp;
                        }
                    }
                }
            }
            else
            {
                cout << "There is no data!" << "\n";
                cout << "Please, enter data for each "
                    "customer at first\n";
            }
            break;
        }
        case QUIT:
        {
            cout << "See you!";
            break;
        }
        default:
            cout << "Wrong menu item!";
        }
    } while (userChoice != 5);*/



//const size_t size = 10;
//int temp, mass[size], count;
//for (int i = 0; i < size; i++)
//    mass[i] = rand() % 10;
//for (int i = 1; i < size; i++) {
//    count = 0;
//    for (int j = 0; j < size - 1; j++) {
//        if (mass[j] > mass[j + 1]) {
//            temp = mass[j];
//            mass[j] = mass[j + 1];
//            mass[j + 1] = temp;
//            count++;
//        }
//    }
//    if (count == 0) {
//        cout << "Сортировка закончена\n";
//        cout << i << " - количество шагов\n";
//        break;
//    }
//}
//for (int i = 0; i < size; i++)
//    cout << mass[i] << " ";

//const size_t size = 1000;
//int bubble[size], sel[size];
//filling(bubble, size);
//filling(sel, size);
//
//printMass(bubble, size);
//cout << endl;
//printMass(sel, size);
//
//sortBubble(bubble, size);
//sortSel(sel, size);
//cout << endl;
//printMass(bubble, size);
//cout << endl;
//printMass(sel, size);
//cout << endl;
//cout << countSel << " - счетчик выбора\n" << countBub << " - счетчик пузырьком\n";




#pragma endregion

#pragma region Поиски
//const size_t size = 1000;
//vector <int> lock(size), help;
//int key, a;
//for (int i = 0; i < lock.size(); i++)
//    lock[i] = rand() % 1000;
//print(lock);
//
//help = sortUp(lock);
//print(help);
//cin >> key;
//a = binarSearch(lock, size, key);
//cout << a;
//int temp;
//cin >> temp; 
//cout << trans(temp);

#pragma endregion

#pragma region Лексический анализатор

//vector<string> words;
//stringstream stringStream("int x = 0");
//string word;
//while (getline(stringStream, word, ' '))
//{
//    words.push_back(word);
//}



#pragma endregion
#pragma region Перегрузка

//int a,b;
//a = 10;
//b = 30;
//cout << rate(a, 2)<<endl;
//cout << sumDia(10, 30);

        
    
#pragma endregion
#pragma region ДЗ

    //cout << "Melody!\n";
    //cout << "I hear a kind of harmony!\n";
    //cout << "And i don't to lose it\n";
    //cout << "Now i'm free!\n";
    //cout << "And I am happy like the wind!\n";
    //cout << "But i know that is not true\n";

 /*   cout << "Every\n";
        cout << "\thunter\n";
        cout << "\t\twants\n";
        cout << "\t\t\tto know\n";
        cout << "\t\t\t\twhere\n";
        cout << "\t\t\t\t\tpheasant does\n";
        cout << "\t\t\t\t\t\t\t sit.\n";*/

        //cout << "\t\t\tПродам душу\n";
        //cout << "\t\t\tПорода: русский\n";
        //cout << "\t\t\t---\n";
        //cout << "\t\t\tТел: 88005553535\n";
        //cout << "\t\tКрасивый, молодой\n";
        //cout << "\t\t\tПлейбой, супергерой\n";
        //cout << "\t\t\t\tАртист, юморист\n";
        //cout << "\t\tЧеловек-прямоходящий\n";
        //cout << "\t\t\t\tИ если хочешь? позвони...";

       /* double r1, r2, r3, r0;
        cout << "R1 = ", cin >> r1;
        cout << "R2 = ", cin >> r2;
        cout << "R3 = ", cin >> r3;
        r1 = 1 / r1; r2 = 1 / r2; r3 = 1 / r3;
        r0 = (r1 + r2 + r3);
        cout << "R0 = " << 1/r0;*/
        /*  const double pi = 3.14;
          double s, r, l;
          cout << "L = ", cin >> l;
            r = ( pi * 2 ) / l;
            r = 1 / r;
            s = pi * r * r;
            cout << "S = " << s;*/
            //double s, v, t, a;
            //cout << "v = ", cin >> v;
            //cout << "t = ", cin >> t;
            //cout << "a = ", cin >> a;
            //s = (v * t) + ((a * t * t) / 2);
            //    cout << "S = " << s;


         /*   float s, t, v,t1;
            cout << "Введите время в минутах: ", cin >> t;
            cout << "Введите расстояние в километрах: ", cin >> s;
            t1 = t / 60;
            v = s / t1;
            cout << "Вам нужно ехать со скоростью: " << v << "км/ч" << endl;*/

            /*float c,c1,s1, m, s, g;
            cout << "Введите часы: ", cin >> c;
            cout << "Введите минуты: ", cin >> m;
            cout << "Введите секунды: ", cin >> s;
            c1 = c / 60;
            s1 = s * 60;
            m = s1 + c1 + m;
            g = m * 2;
            cout << "Стоимость составляет: " << g << endl;*/

            /* float s, r,r1, g1, g2, g3;
             cout << "Введите растояние: ", cin >> s;
             cout << "Введите расход на 100 км: ", cin >> r;
             cout << "Стоимость 98 бензина: ", cin>> g1;
             cout << "Стоимость 95 бензина: ", cin >> g2;
             cout << "Стоимость 92 бензина: ", cin >> g3;
             r1 = (s * r) / 100;
             g1 = g1 * r1;
             g2 = g2 * r1;
             g3 = g3 * r1;
             cout << "---------------------------------------------------\n";
             cout << "Бензин\t\t98\t\t95\t\t92\n";
             cout << "Стоимость\t" << g1 << "\t\t" << g2 << "\t\t" << g3 << endl;
             cout << "---------------------------------------------------\n";*/

             /*int c, m, s;
             cout << "Введите время в секундах: ", cin >> s;
             m = s /60 % 60;
             c = s / 3600;
             s = s % 60;
             cout << "Часы: " << c << endl;
             cout << "Минуты: " << m << endl;
             cout << "Секунды: " << s << endl;*/
             //2 задание (Правда тут гривны, я надеюсь такое подойдет)
             //double griv, cop1;
         //int  cop, griv1;
         //cout << "Введите гривны: ", cin >> griv;
         //cout << "Введите копейки: ", cin >> cop;
         //
         //    if (cop > 99 && cop < 1000) {
         //        griv1 = cop / 100;
         //        cop1 = cop % 100;
         //
         //        cout << griv + griv1 << "грн. " << cop1 << "коп" << endl;
         //    }
         //    else if (cop > 999 && cop < 10000) {
         //        griv1 = cop / 100;
         //        cop1 = cop /100 % 100;
         //        cout << griv + griv1 << "грн. " << cop1 << "коп" << endl;
         //    }
         //    else if (cop > 9999 && cop < 100000) {
         //        griv1 = cop / 100;
         //        cop1 = cop / 1000 % 100;
         //        cout << griv + griv1 << "грн. " << cop1 << "коп" << endl;
         //    }
         //    else {
         //        cout << "eror" << endl;
         //    }

         //float number;
         //int dollar, cent;
         //cout << "Введите сумму: ", cin >> number;
         //if (number > 0 && number < 10) {
         //    
         //    dollar = number * 100 / 100;
         //    number = number * 100;
         //    cent = (int)number % 100;
         //    cout << dollar <<" Долларов " << cent << " Центов\n";
         //}
         //else if (number > 9 && number < 100) {
         //    dollar = number * 100 / 100;
         //    number = number * 100;
         //    cent = (int)number % 100;
         //    cout << dollar << " Долларов " << cent << " Центов\n";
         //}
         //else if (number > 99 && number < 999) {
         //    dollar = number * 100 / 100;
         //    number = number * 100;
         //    cent = (int)number % 100;
         //    cout << dollar << " Долларов " << cent << " Центов\n";
         //}
         //else {
         //    cout << "Eror\n";
         //}

         //3 задание
         //int week, day;
         //cout << "Введите количество дней: ", cin >> day;
         //week = day / 7;
         //day = day % 7;
         //cout <<"Недель: " << week << endl;
         //cout <<"Дней: " << day << endl;

         //int dis, time1, time2;
         //float v,v1, time,sec;
         //cout << "Вычисление скорости бега\n";
         //cout << "Введите длину дистанции (метров) = ", cin >> dis;
         //cout << "Введите время (мин.сек) = ", cin >> time;
         //cout << "Дистанция: " << dis << " м\n";
         //time1 = time * 100 / 100;
         //cout << "Время: " << time1 << " мин ";
         //time = time * 100;
         //time2 = (int)time % 100;
         //sec = (time1 * 60) + time2;
         //cout << time2 << " сек" << " = " << sec << " сек\n";
         //v = dis / sec;
         //v1 = v * 3.6;
         //cout << "Вы бежали со скоростью " << v1 << " км/ч\n";

         //int sum;
         //float percent, income;
         //cout << "Введите сумму вклада в евро: ", cin >> sum;
         //cout << "Введите процент годовых по вкладу: ", cin >> percent;
         //income = sum / 100 * percent / 365 * 31;
         //
         //cout << "Ваш ежемесячный доход составляет: " << income;

         //const double day = 24;
              //double extime;
              //
              //while (cout << "Enter time: ", cin >> extime)
              //{
              //    if (extime < 86400 && extime != 0) {
              //        int hour, min, sec, exhour, exmin, exsec;
              //        hour = (int)extime / 3600; min = (int)extime / 60 % 60; sec = (int)extime % 60;
              //        extime = (day * 3600) - extime;
              //        cout << "Time: " << hour << ":" << min << ":" << sec << endl;
              //        cout << "Left until midnight: " << 23 - hour << ":" << 60 - min << ":" << 60 - sec;
              //        break;
              //    }
              //    else {
              //        cout << "No correct time\n";
              //    }
              //}

         //int sec, work=8*3600, ostwork;
         //cout << "Введите время в секундах: ", cin >> sec;
         //if (work >= sec) {
         //    ostwork = work - sec;
         //    ostwork = ostwork / 3600;
         //    
         //    cout << "Оставшееся время: " << ostwork << endl;;
         //}
         //else {
         //    cout << "Eror\n";
         //}

         /*int num, one, two, three, four, five, six, third, sixth;
         cout << "Введите счастливое число: ", cin >> num;
         if (num < 1000000 && num > 99999) {
             one = num / 100000;
             two = num / 10000 % 10;
             three = num / 1000 % 10;
             four = num / 100 % 10;
             five = num / 10 % 10;
             six = num % 10;
             third = one + three + two;
             sixth = four + five + six;
             if (sixth == third) {
                 cout << "Ваше число счастливое! Congratulation)\n";
             }
             else {
                 cout << "Ваше число не счастливое((( Попробуйте ещё раз \n";
             }
         }
         else {
             cout << "Eror\n";
         }*/

         /*int num, one, two, three, four;
         cout << "Введите четырехзначное число: ", cin >> num;
         
             if (num < 10000 && num > 999) {
                 one = num / 1000;
                 two = num / 100 % 10;
                 three = num / 10 % 10;
                 four = num % 10;
                 cout << "Мы тут все понапутали, извините - " << two << one << four << three << endl;
             }
             else {
                 cout << "Eror\n";
             }*/

    /*const size_t size = 7;
    int num[size], temp;
    cout << "Введите семь чисел:\n";
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
    int max = num[0];
    for (int i = 0; i < size; i++) {
        if (max < num[i]){
            max = num[i];
            }
    }
    cout << "\n" << max << endl;*/
//int dis, dis1, fulldis, wei, fuel = 300, refueling;
//cout << "Введите расстояние между пунктами А и В - ", cin >> dis;
//cout << "Введите расстояние между пунктами B и С - ", cin >> dis1;
//cout << "Введие вес груза - ", cin >> wei;
//fulldis = dis + dis1;
//if (fulldis < 601 && dis < 301 && dis1 < 301) {
//    if (wei < 500 && wei >= 0) {
//        fuel = fuel - dis;
//        if (dis1 > fuel) {
//            refueling = dis1 - fuel;
//            cout << "Необходимо дозаправиться. Требуемое количество топлива - " << refueling;
//        }
//        else {
//            cout << "Топлива хватит долететь до пункта С\n";
//        }
//    }
//    else if (wei < 1000 && wei > 499) {
//        dis1 *= 4;
//        dis *= 4;
//        if (dis1 < 301 && dis < 301) {
//            fuel = fuel - dis;
//            if (dis1 > fuel) {
//                refueling = dis1 - fuel;
//                cout << "Необходимо дозаправиться. Требуемое количество топлива - " << refueling;
//            }
//            else {
//                cout << "Топлива хватит долететь до пункта С\n";
//            }
//        }
//        else {
//            cout << "Не хватит топлива!";
//        }
//
//    }
//    else if (wei < 1500 && wei > 999) {
//        dis *= 7;
//        dis1 *= 7;
//        if (dis1 < 301 && dis < 301) {
//            fuel = fuel - dis;
//            if (dis1 > fuel) {
//                refueling = dis1 - fuel;
//                cout << "Необходимо дозаправиться. Требуемое количество топлива - " << refueling;
//            }
//            else {
//                cout << "Топлива хватит долететь до пункта С\n";
//            }
//        }
//        else {
//            cout << "Не хватит топлива!";
//        }
//    }
//    else if (wei < 2000 && wei > 1499) {
//        dis *= 9;
//        dis1 *= 9;
//        if (dis1 < 301 && dis < 301) {
//            fuel = fuel - dis;
//            if (dis1 > fuel) {
//                refueling = dis1 - fuel;
//                cout << "Необходимо дозаправиться. Требуемое количество топлива - " << refueling;
//            }
//            else {
//                cout << "Топлива хватит долететь до пункта С\n";
//            }
//        }
//        else {
//            cout << "Не хватит топлива!";
//        }
//    }
//    else {
//        cout << "Самолёт не взлетит!\n";
//    }
//}
//else {
//    cout << "Не хватит топлива!\n";
//}
//    
    
#pragma endregion

#pragma region ДЗ 2
//const size_t size = 4;
//const size_t bag = 3;
//double pizza[size]{ 4,5,4.5,5.5 }, drink[bag]{ 2,1.5,4 };
//double sellSum = 0.8, sellDrink = 0.85, sumPizza=0, sumDrink=0, sum=0;
//int input = 1, pizzaCount=1, drinkCount=1, howMuch, x=0;
//string tavern[7]{"Маргарита        ","Сюзанна          ","Изабелла         ","Мадонна          ","Молочный коктейль","Фильтр-кофе      ","Фреш             "};
////-------------------------------------------- Массив для чека. Узнал об этом от Мавлюда, сам долго додумывал бы
//string check[15]; 
//int check_how[15]; 
//double check_price[15]; 
//double check_sum[15];
////--------------------------------------------
//cout << "<3\t\t\t     ПИЦЦЕРИНА     \t\t\t<3\n";
//cout << "|---------------------------------------------------------------|\n";
//cout << "| \t\t*Каждая  5-ая пицца в ПОДАРОК!*\t\t\t|\n";
//cout << "|   Маргарита\t   Сюзанна\tИзабелла\tМадонна\t\t|\n";
//cout << "| \t*Более 3-ех напитков от 2$ буду со скидкой в 15%!*\t|\n";
//cout << "| \tМолочный коктейль\tФильтр-кофе\tФреш\t\t|\n";
//cout << "| *Скидка 20% от суммы заказа, если общая сумма больше 50$!!!*\t|\n";
//cout << "|---------------------------------------------------------------|\n";
//while (input != -1) {
//    if (drinkCount > 2) {
//        sumDrink *= 0.85;
//    }
//    if (sum + sumDrink > 50) {
//        sum = (sumPizza + sumDrink) * 0.8;
//    }
//    else {
//        sum = sumPizza + sumDrink;
//    }
//    if (pizzaCount > 4 || pizzaCount > 9) {
//        check[x] = tavern[rand()%4];
//        check_how[x] = 1;
//        check_price[x] = 0;
//        check_sum[x] = 0;
//        x++;
//    }
//    cout << "Выберите заказ\n1 - Пицца\t2 - Напиток\t0 - Перейти к оплате\n";
//    cin >> input;
//    if (input == 1) {
//        cout << "Маргарита - томатная куртизантка!\n";
//        cout << "Сюзанна - увлажнит твои печали!\n";
//        cout << "Изабелла - нежная и хрупкая!\n";
//        cout << "Мадонна - жаркая, жгучая и ненасытная!\n";
//        cout << "\nМаргарита - 4$ (#01)\tСюзанна - 5$ (#02)\nИзабелла - 4.5$ (#03)\tМадонна - 5.5$ (#04)\nВведите код продукта (Без решетки): ";
//        cin >> input;
//        switch (input) {
//        case 01: {
//            cout << "Состав: 2 вида томата и 3 вида сыра (Розовые томаты, Черри, Маасдам, Моцарелла, Тильзитер)\nВыберите количество: ", cin >> howMuch;
//            pizzaCount *= howMuch;
//            sumPizza += pizza[0]*howMuch;
//            cout << "\nТекущая сумма составляет: " << sumPizza << "$" << endl;
//            check[x] = tavern[0]; 
//            check_how[x] = howMuch; 
//            check_price[x] = pizza[0]; 
//            check_sum[x] = pizza[0] * howMuch; 
//            x++;
//            break;
//        }case 02: {
//            cout << "Состав: 2 вида мяса и овощи гриль (Бекон, Ветчина, Болгарский перец, Черри, Цукини, Сельдерей, Моцарелла)\nВыберите количество: ", cin >> howMuch;
//            pizzaCount *= howMuch;
//            sumPizza += pizza[1]*howMuch;
//            cout << "\nТекущая сумма составляет: " << sumPizza << "$" << endl;
//            check[x] = tavern[1];
//            check_how[x] = howMuch;
//            check_price[x] = pizza[1];
//            check_sum[x] = pizza[1] * howMuch;
//            x++;
//            break;
//        }case 03: {
//            cout << "Состав: Овощное ассорти, пряный сыр и любовь (Мариннованые огурчики, Оливки, Авокадо, Нори, Сыр с Пажитныком, Сливочный крем)\nВыберите количество : ", cin >> howMuch;
//            pizzaCount *= howMuch;
//            sumPizza += pizza[2] * howMuch;
//            cout << "\nТекущая сумма составляет: " << sumPizza << "$" << endl;
//            check[x] = tavern[2];
//            check_how[x] = howMuch;
//            check_price[x] = pizza[2];
//            check_sum[x] = pizza[2] * howMuch;
//            x++;
//            break;
//        }case 04: {
//            cout << "Состав: Мяссное ассорти с остринкой (Курица, Говядина, Бекон, Чили, Маринованные перчики, Красный лук, Кисло-сладкий соус, Моцарелла)\nВыберите количество: ", cin >> howMuch;
//            pizzaCount *= howMuch;
//            sumPizza += pizza[3]*howMuch;
//            cout << "\nТекущая сумма составляет: " << sumPizza <<"$" << endl;
//            check[x] = tavern[3];
//            check_how[x] = howMuch;
//            check_price[x] = pizza[3];
//            check_sum[x] = pizza[3] * howMuch;
//            x++;
//            break;
//        }
//        }
//    }
//    else if (input == 2) {
//        cout << "\nМолочный коктейль - 2$ (#10)\tФильтр-кофе - 1.5$ (#20)\tФреш - 4$ (#30)\nВведите код продукта (Без решетки): \n";
//        cin >> input;
//        switch (input) {
//        case 10: {
//            cout << "В сочетании с Изабеллой станет приятным времяпрепровождением!\nВыберите количество:\n", cin >> howMuch;
//            drinkCount += howMuch;
//            sumDrink += drink[0] * howMuch;
//            cout << "\nТекущая сумма составляет: " << sumPizza +sumDrink << "$" << endl;
//            check[x] = tavern[4];
//            check_how[x] = howMuch;
//            check_price[x] = drink[0];
//            check_sum[x] = drink[0] * howMuch;
//            x++;
//            break;
//        }case 20: {
//            cout << "Сюзанна готова разделить с тобой эту трапезу!\nВыберите количество:\n", cin >> howMuch;
//            drinkCount += howMuch;
//            sumDrink += drink[1] * howMuch;
//            cout << "\nТекущая сумма составляет: " << sumPizza + sumDrink << "$" << endl;
//            check[x] = tavern[5];
//            check_how[x] = howMuch;
//            check_price[x] = drink[1];
//            check_sum[x] = drink[1] * howMuch;
//            x++;
//            break;
//        }case 30: {
//            cout << "Маргарита и Мадонна идеально подходят к этому выбору!\nВыберите количество:\n", cin >> howMuch;
//            drinkCount += howMuch;
//            sumDrink += drink[2] * howMuch;
//            cout << "\nТекущая сумма составляет: " << sumPizza + sumDrink << "$" << endl;
//            check[x] = tavern[6];
//            check_how[x] = howMuch;
//            check_price[x] = drink[2];
//            check_sum[x] = drink[2] * howMuch;
//            x++;
//            break;
//        }
//        }
//    }
//    else if (input < 0 && input > 2) {
//        cout << "Eror\n";
//    }
//    else if (input == 0) {
//        
//        for (int i = 0; i < x; i++) {
//            cout << i + 1 << ". " << check[i] << "\t-\t" << check_how[i] << "\t-\t" << check_price[i] << " $\t-\t" << check_sum[i] << " $\n";
//        }
//        cout << "______________________________________________________________________\n";
//        cout << "К оплате: " << sum << " $\nСпасибо за покупку! Ждем вас снова!\n";
//        
//    }  
//
//}
#pragma endregion
#pragma region ДЗ 2.0

//string manager[3]{ "Йохан   ","Торбьорн","Лилит   " };
//double level[3];
//int sum[3];
//int prem[3]{ 0,0,0 };
//int zp = 200, temp;
//for (int i = 0; i <= 2; i++) {
//    cout << manager[i] << "\nВведите уровень продаж сотрудника\n", cin >> sum[i];
//    if (sum[i] < 500 && sum[i] >  0) {
//        level[i] = 0.03;
//    }
//    else if (sum[i] > 499 && sum[i] < 1000) {
//        level[i] = 0.05;
//    }
//    else {
//        level[i] = 0.08;
//    }
//}
//if (sum[0] > sum[1]) {
//    temp = sum[0];
//    prem[0] += 200;
//}
//else {
//    prem[1] += 200;
//    temp = sum[1];
//    prem[0] *= 0;
//}
//if (sum[2] > temp) {
//    prem[2] += 200;
//    prem[0] *= 0;
//    prem[1] *= 0;
//}
//for (int i = 0; i <= 2; i++) {
//    
//    cout << manager[i] << " зарплата - " << (zp + sum[i] * level[i]) + prem[i]<< " $" << endl;
//}

#pragma endregion
#pragma region Работа с текстом
  //      sheep += myint; тоже самое что и sheep = sheep + myint;
  // cout <<"To be, or nit ti be: that is the question:\nWheather \'tis nobler in the mind to suffer\nThe slings and arrows of outrageous fortune,\nOr to take arms against a sea of trouble,\nAnd by opposing end them?\nWilliam Shakespeare\n\n";
  ///*Можно писать в строку*/
  // cout << "To be, or not to be: that is the question:\n";
  // cout << "Whether \'tis nobler in the mind to suffer\n";
  // cout << "The slings and arrows of outrageous fortune,\n";
  // cout << "Or to take arms against a sea of troubles,\n";
  // cout << "And by opposing end them?\n";
  // cout << "William Shakespeare\n";
  // /*Можно писать в столбик, каждый раз добавляя cout*/
  // cout << "name\t   : \"the war and the peace\"\n";
  // cout << "avtor\t   : l.n. tolstoj\n";
  // cout << "izdatelstvo: piter\n";
  // cout << "pages\t   : 500.\n";
  // /*Подключение библиотеки << std::setw(22) мы используем определееное количество символов*/
#pragma endregion
#pragma region Таблица
  // cout << "ID" << setw(20) << "Name" << setw(10) << endl;
 /*  cout << "=================================================================" << endl;
   cout << "=" << setw(64) << "=" << endl;
   cout << setw(39) << "Vremena goda" <<endl;
   cout << "=" << setw(64) << "=" << endl;
   cout << "=================================================================" << endl;
   cout << "=" << setw(64) << "=" << endl;
   cout << "=\t" << "Zima\t" << "=\t" << "Vesna\t" << "=\t" << "Leto\t" << "=\t" << "Osen\t" << "=" << endl;
   cout << "=" << setw(64) << "=" << endl;
   cout << "=================================================================" << endl;*/
#pragma endregion
#pragma region Вычисление объема
   /* cout << "длина (см) = 9;\nширина (см) = 7,5;\nвысота (см) = 5;\nнайдите объем.\n";
    float a;
    float b;
    float h;
    float v;
    cin >> a; cin >> b; cin >> h;
    v = a * b * h;
    cout << "v= " << v;*/
#pragma endregion
#pragma region Вычисление количества дней в году
    /*  int age;
    cout << "Какой сейчас год?\n";
    cin >> age;
    if (age % 4 == 0) { cout << "В этом году 366 дней" << endl; }
    else { cout << "В этом году 365 дней" << endl; }*/

    /*int age;
    int hight;
    cout << "Какой сейчас год?\n";
    cin >> age;
    hight = age % 4;
    if (hight == 0) { cout << "В этом году 366 дней" << endl; }
    else { cout << "В этом году 365 дней" << endl; }*/
#pragma endregion
#pragma region Вывод различных операций с числами
    /* double float a, b;
     float mid;
     float sum;
     float ex;
     cin >> a; cin >> b;
     mid = (a + b) / 2;
     sum = a + b;
     ex = a * b;
     cout << "Среднее Арифметическое: " << mid << endl;
     cout << "Сумма: " << sum << endl;
     cout << "Произведение: " << ex << endl; */
#pragma endregion
#pragma region Задание 3 (вычисление  процента скидки)
     //float sum;
     //float count;
     //float sell;
     //float price;
     //cout << "Стоимость ноутбука = "; cin >> sum;
     //cout << "Количество ноутбуков = "; cin >> count;
     //cout << "Процент скидки = "; cin >> sell;
     //price = (sum * count) - ((sum * sell) / 100);
     //    cout << "Цена: " << price;



#pragma endregion
#pragma region Задание 5 
   /* long long file, bits, hour1, min1, sec1;
    int hour, min, sec;
    cout << "Размер файла: "; cin >> file;
    cout << "Скорость интернет-соединения: "; cin >> bits;
    file = 8589934592 * file;
    sec = file / bits;
    min = sec / 60;
    sec = (file - hour - min);*/



    /* double time = 9000;
     int second = (int)time % 60;
     int hours = (int)time / 3600;
     int minute = (int)time / 60 % 60;*/

#pragma endregion
#pragma region Задание На время до и после
     //const double day = 24;
     //double extime;
     //
     //while (cout << "Enter time: ", cin >> extime)
     //{
     //    if (extime < 86400 && extime != 0) {
     //        int hour, min, sec, exhour, exmin, exsec;
     //        hour = (int)extime / 3600; min = (int)extime / 60 % 60; sec = (int)extime % 60;
     //        extime = (day * 3600) - extime;
     //        cout << "Time: " << hour << ":" << min << ":" << sec << endl;
     //        cout << "Left until midnight: " << 23 - hour << ":" << 60 - min << ":" << 60 - sec;
     //        break;
     //    }
     //    else {
     //        cout << "No correct time\n";
     //    }
     //}
     //
     //


#pragma endregion
#pragma region Окончание, тут про КОРОВ
//
//    int one, two, three, four, five, six, seven, eight, nine, ten;
//    string one1, two1, three1, four1, five1, six1, seven1, eight1, nine1, ten1;
//    one = 1, two = 2, three = 3; four = 4, five = 5, six = 6, seven = 7, eight = 8, nine = 9;
//    one1 = "одна тысяча "; two1 = "две тысячи ", three1 = "три тысячи ", four1 = "четыре тысячи ", five1 = "пять тысяч ", six1 = "шесть тысяч ", seven1 = "семь тысяч ", eight1 = "восемь тысяч ", nine1 = "девять тысяч ";
//    string one2, two2, three2, four2, five2, six2, seven2, eight2, nine2;
//    one2 = "сто ", two2 = "двести ", three2 = "триста ", four2 = "четыреста ", five2 = "пятьсот ", six2 = "шестьсот ", seven2 = "семьсот ", eight2 = "восемьсот ", nine2 = "девятьсот ";
//    string one3, two3, three3, four3, five3, six3, seven3, eight3, nine3;
//    one3 = "десять ", two3 = "двадцать ", three3 = "тридцать ", four3 = "сорок ", five3 = "пятьдесят ", six3 = "шестьдесят ", seven3 = "семьдесят ", eight3 = "восемьдесят ", nine3 = "девяносто ";
//    string one11, one12, one13, one14, one15, one16, one17, one18, one19;
//    one11 = "одинадцать рублей\n", one12 = "двенадцать рублей\n", one13 = "тринадцать рублей\n", one14 = "четырнадцать рублей\n", one15 = "пятнадцать рублей\n", one16 = "шестандцать рублей\n", one17 = "семнадцать рублей\n", one18 = "восемнадцать рублей\n", one19 = "девятнадцать рублей\n";
//    string one4, two4, three4, four4, five4, six4, seven4, eight4, nine4;
//    one4 = "один рубль\n", two4 = "два рубля\n", three4 = "три рубля\n", four4 = "четыре рубля\n", five4 = "пять рублей\n", six4 = "шесть рублей\n", seven4 = "семь рублей\n", eight4 = "восемь рублей\n", nine4 = "девять рублей\n";
//    int low;
//    int first, second, third, fourth;
//    string rub1, rub2, rub3;
//    rub1 = "рубль", rub2 = "рубля", rub3 = "рублей";
//    while (cout << "Введите число от 1 до 9999 - ", cin >> low) {
//        if (low > 0 && low < 9999) {
//            cout << low << " - ";
//            first = low / 1000;
//            second = low / 100 % 10;
//            third = low / 10 % 10;
//            fourth = low % 10;
//            if (first != 0) {
//                if (first == 1) {
//                    cout << one1;
//                }
//                else if (first == 2) {
//                    cout << two1;
//                }
//                else if (first == 3) {
//                    cout << three1;
//                }
//                else if (first == 4) {
//                    cout << four1;
//                }
//                else if (first == 5) {
//                    cout << five1;
//                }
//                else if (first == 6) {
//                    cout << six1;
//                }
//                else if (first == 7) {
//                    cout << seven1;
//                }
//                else if (first == 8) {
//                    cout << eight1;
//                }
//                else if (first == 9) {
//                    cout << nine1;
//                }
//            }
//
//            if (second != 0) {
//                if (second == 1) {
//                    cout << one2;
//                }
//                else if (second == 2) {
//                    cout << two2;
//                }
//                else if (second == 3) {
//                    cout << three2;
//                }
//                else if (second == 4) {
//                    cout << four2;
//                }
//                else if (second == 5) {
//                    cout << five2;
//                }
//                else if (second == 6) {
//                    cout << six2;
//                }
//                else if (second == 7) {
//                    cout << seven2;
//                }
//                else if (second == 8) {
//                    cout << eight2;
//                }
//                else if (second == 9) {
//                    cout << nine2;
//                }
//            }
//
//
//            if (third == 1 && fourth != 0) {
//                if (third == 0 && fourth == 0) {
//                    cout << one11;
//                }
//                else if (third == 1 && fourth == 2) {
//                    cout << one12;
//                }
//                else if (third == 1 && fourth == 2) {
//                    cout << one12;
//                }
//                else if (third == 1 && fourth == 3) {
//                    cout << one13;
//                }
//                else if (third == 1 && fourth == 4) {
//                    cout << one14;
//                }
//                else if (third == 1 && fourth == 5) {
//                    cout << one15;
//                }
//                else if (third == 1 && fourth == 6) {
//                    cout << one16;
//                }
//                else if (third == 1 && fourth == 7) {
//                    cout << one17;
//                }
//                else if (third == 1 && fourth == 8) {
//                    cout << one18;
//                }
//                else if (third == 1 && fourth == 9) {
//                    cout << one19;
//                }
//            } else if (third != 0) {
//                if (third == 1 && fourth == 0) {
//                    cout << one3;
//                }
//                else if (third == 2) {
//                    cout << two3;
//                }
//                else if (third == 3) {
//                    cout << three3;
//                }
//                else if (third == 4) {
//                    cout << four3;
//                }
//                else if (third == 5) {
//                    cout << five3;
//                }
//                else if (third == 6) {
//                    cout << six3;
//                }
//                else if (third == 7) {
//                    cout << seven3;
//                }
//                else if (third == 8) {
//                    cout << eight3;
//                }
//                else if (third == 9) {
//                    cout << nine3;
//                }
//            }
//
//            if (fourth != 0) {
//                if (fourth == 1) {
//                    cout << one4;
//                }
//                else if (fourth == 2) {
//                    cout << two4;
//                }
//                else if (fourth == 3) {
//                    cout << three4;
//                }
//                else if (fourth == 4) {
//                    cout << four4;
//                }
//                else if (fourth == 5) {
//                    cout << five4;
//                }
//                else if (fourth == 6) {
//                    cout << six4;
//                }
//                else if (fourth == 7) {
//                    cout << seven4;
//                }
//                else if (fourth == 8) {
//                    cout << eight4;
//                }
//                else if (fourth == 9) {
//                    cout << nine4;
//                }
//            }
//            /*  if (first == 1 || first == 2 || first == 3 || first == 4 || first == 5 || first == 6 || first == 7 || first == 8 || first == 9 || second == 0 && third == 0 && fourth == 0) {
//                  cout << rub3 << endl;
//              }
//              else if (second == 1 || second == 2 || second == 3 || second == 4 || second == 5 || second == 6 || second == 7 || second == 8 || second == 9 || first == 0 && third == 0 && fourth == 0) {
//                  cout << rub3 << endl;
//              }
//              else if (third == 1 || third == 2 || third == 3 || third == 4 || third == 5 || third == 6 || third == 7 || third == 8 || third == 9 || first == 0 && second == 0 && fourth == 0) {
//
//              }
//              if (fourth == 1)
//                  cout << rub1 << endl;
//          }
//          else if (fourth == 2 || fourth == 3 || fourth == 4) {
//              cout << rub2 << endl;
//          }
//          else if (fourth == 5 || fourth == 6 || fourth == 7 || fourth == 8 || fourth == 9) {
//              cout << rub3 << endl;
//          }
//          if (third == 1 && fourth == 1 || third == 1 && fourth == 2 || third == 1 && fourth == 3 || third == 1 && fourth == 4 || third == 1 && fourth == 5 || third == 1 && fourth == 6 || third == 1 && fourth == 7 || third == 1 && fourth == 8 || third == 1 && fourth == 9) {
//              cout << rub3 << endl;
//          }*/
//        }
//    }
//
//        
//    
//    
//

#pragma endregion
#pragma region Сравнение чисел и вывод
//double num1, num2;
//int max = (num1 > num2) ? num1 : num2;
//
//while (
//cout << "Введите число 1: \n", cin >> num1,
//cout << "Введите число 2: \n", cin >> num2
//)
//if (num1 == num2) {
//    cout << num1 << "=" << num2;
//    break;
//}
//else if (num1 > num2) {
//    cout << num1 << ">" << num2;
//    break;
//}
//else {
//    cout << num1 << "<" << num2;
//    break;
//}
#pragma endregion

#pragma region Изменение окончания в зависимости от количества
//        {
//            if (n == 1 || n == 21 || n == 31 || n == 41 || n == 51 || n == 61 || n == 81 || n == 91) {
//                cout << "На лугу пасется " << n << " корова";
//                break;
//            }
//            else if (n > 1 && n < 5 || n>21 && n < 25 || n>31 && n < 35 || n>41 && n < 45 || n>51 && n < 55 || n>61 && n < 65 || n>71 && n < 75 || n>81 && n < 85 || n>91 && n < 95) {
//                cout << "На лугу пасется " << n << " коровы";
//                break;
//            }
//            else {
//                cout << "На лугу пасется " << n << " коров";
//                break;
//            }
//
//        }
//    }
//    else {
//        cout << "eror\n";
//    }
//}
#pragma endregion

#pragma region Сравнение чисел из 3
//double a, b, c;
//while
//(cout << "Введите число 1: ", cin >> a,
//    cout << "Введите число 2: ", cin >> b,
//    cout << "Введите число 3: ", cin >> c) {
//    if (a == b && b == c) {
//        cout << "Числа равны\n";
//        break;
//    }
//    else if (a > b && b > c) {
//        cout << a << ">" << b << ">" << c;
//        break;
//    }
//    else if (a > c && b < c) {
//        cout << a << ">" << c << ">" << b;
//        break;
//    }
//    else if (b > a && a > c) {
//        cout << b << ">" << a << ">" << c;
//        break;
//    }
//    else if (b > c && a < c) {
//        cout << b << ">" << c << ">" << a;
//        break;
//    }
//    else if (c > a && a > b) {
//        cout << c << ">" << a << ">" << b;
//        break;
//    }
//    else if (a == b && a < c) {
//        cout << a << "=" << b << ">" << c;
//        break;
//    }
//    else if (a == c && a > b) {
//        cout << a << "=" << c << ">" << b;
//        break;
//    }
//    else if (c == b && c > a) {
//        cout << c << ">" << a << ">" << b;
//        break;
//    }
//    else {
//        cout << c << ">" << b << ">" << a;
//        break;
//    }
//}
#pragma endregion

#pragma region вывод чисел слева направо
//int n, one, two, three, four, five, six;
//while (cout << "Введите число: ", cin >> n, one = n / 100000,
//two = n / 10000 % 10,
//three = n / 1000 % 10,
//four = n / 100 % 10,
//five = n / 10 % 10,
//six = n % 10) {
//    if (n > 0 && n < 1000000) {
//        if (n < 1000000 && n > 99999) {
//           
//            cout << one << ", " << two << ", " << three << ", " << four << ", " << five << ", " << six;
//            break;
//        }
//        else if (n < 100000 && n > 9999) {
//            cout << two << ", " << three << ", " << four << ", " << five << ", " << six;
//            break;
//        }
//        else if (n < 10000 && n > 999) {
//            cout << three << ", " << four << ", " << five << ", " << six;
//            break;
//        }
//        else if (n < 1000 && n > 99) {
//            cout << four << ", " << five << ", " << six;
//            break;
//        }
//        else if (n < 100 && n > 0) {
//            cout << five << ", " << six;
//            break;
//        }
//    }
//    else {
//        cout << "eror\n";
//    }
//}
#pragma endregion

#pragma region вывод чисел справа налево
//int a, b;
//cin >> a;
//while (a > 0) {
//    b = a % 10;
//    cout << b << endl;
//    a = a / 10;
//} 
#pragma endregion
#pragma region САМОПОДГОТОВКА
//double griv, cop1;
//int  cop, griv1;
//cout << "Введите гривны: ", cin >> griv;
//cout << "Введите копейки: ", cin >> cop;
//
//    if (cop > 99 && cop < 1000) {
//        griv1 = cop / 100;
//        cop1 = cop % 100;
//
//        cout << griv + griv1 << "грн. " << cop1 << "коп" << endl;
//    }
//    else if (cop > 999 && cop < 10000) {
//        griv1 = cop / 100;
//        cop1 = cop /100 % 100;
//        cout << griv + griv1 << "грн. " << cop1 << "коп" << endl;
//    }
//    else if (cop > 9999 && cop < 100000) {
//        griv1 = cop / 100;
//        cop1 = cop / 1000 % 100;
//        cout << griv + griv1 << "грн. " << cop1 << "коп" << endl;
//    }
//    else {
//        cout << "eror" << endl;
//    }

//float a, b, c, v;
//cout << "\t\tВычисления объема параллепипеда\n\t\tВведите исходные данные: \n";
//cout << "\t\tДлина (см) -> 9 Введите: ", cin >> b; 
//cout << "\n\t\tШирина(см) -> 7.5 Введите: ", cin >> a;
//cout << "\t\tВысота(см) -> 5 Введие: ", cin >> c;
//v = a * b * c;
//cout <<"\t\tV= " << v << endl;
//cout << "\t\tОбъем: 337.50 куб.см.\n";
// 
//float d,s,r,c;
//const float pi = 3.14;
//
//cout << "Диаметр окружности: \n", cin >> d;
//
//r = d / 2;
//c = 2 * pi * r;
//s = pi * r * r;
//cout << "Площадь равна: " << s << endl;
//cout << "Периметр равен: " << c << endl;

//const int avanc = 100;
//double sum;
//cout << "Выручка за месяц: ", cin >> sum;
//if (sum > 0) {
//    cout << "Зарплата менеджера: " << ((sum * 5) / 100) + avanc << "$" << endl;
//}
//else {
//    cout << "eror";
//}


//string num;
//double rev;
//int num1, num2;
//cout << "введите число: ", cin >> num;
//reverse(num.begin(), num.end());
//num1 = stoi(num);
//while (num1 > 0) {
//    num2 = num1 % 10;
//    cout << num2 << " ";
//    num1 = num1 / 10;
//}



//int a = -2;  BAD ИЗ-ЗА РЕВЕРСА
//if (!a)
//cout << "good" << endl;
//else
//cout << "bad" << endl;


//int sum = 0; РАВНО ДВУМ НЕ ЗНАЮ ПОЧЕМУ
//switch (3 / 2)
//{
//case 1:sum += 5;
//case 2:sum -= 3; break;
//case 3:sum += 2;
//case 4:sum -= 7; break;
//default: sum++;
//}
//cout << sum << endl;


//int a = -2; GOOD
//if (a)
//cout << "good" << endl;
//else
//cout << "bad" << endl;

//if (5 = 5)  ОШИБКА НА ЭТАПЕ ИЛИ КОМПИЛЯЦИИ ИЛИ ВЫПОЛНЕНИЯ
//cout << "Yes";
//else
//cout << "No";


//int num = 200; ТУТ ИЗИ
//
//if (num < 750)
//{
//    cout << "num < 750";
//}
//else if (num < 450)
//{
//    cout << "num < 450";
//}
//else
//{
//    cout << "num < 150";
//}

//double num = 2; ВРОДЕ ТОЖЕ НА ЭТАПЕ КОМПИЛЯЦИИ
//
//switch (num)
//{
//case 1: cout << "One";
//    break;
//case 2: cout << "Two";
//    break;
//case 3: cout << "Three";
//}

//int a = 10; ДУМАЛ ОШИБКА ИЗ-ЗА ОТСУТСВИЯ СРАВНЕНИЯ, НО НЕТ, ПРАВИЛЬНЫЙ ОТВЕТ YES
//if (a = 5)
//cout << "Yes";
//else
//cout << "No";

//int i = 1, j = 2;
//cout << (i > j ? i : j) << " is greater." << endl;

//int i;
//int j;
//(false ? i : j) = 45;

//int q, w, e;
//
//
//cout << "Введите 1 число: ", cin >> q;
//cout << "Введите  2 число: ", cin >> w;
//cout << "Введите 3 число: ", cin >> e;
//cout << (q > w  ? q <e ? q :  q  : w) << " - ПРОВЕРЯЙ" << endl;
//
// cout << ((q > w) && (q < e) ? q : w) << endl;
//int a;
//cin >> a;
//for (int i = 0; i < 8; i++) {
//    cout << pow(a, i) << " ";
//}

//HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
//SetConsoleTextAttribute(hwnd, 2);
//cout << "ПРИВЕТИКИ ПИСТОЛЕТИКИ";
//int a;
//cin >> a;
//for (int i = 0; i <= a; i++) {
//    cout << i;
//}
//int a = 0,b,c;
//float dol, euro, rub;
//while (a != 10) {
//    cout << "Выберите валюту которую будете менять\n1 - Dollar\n2 - Euro\n3 - Рубли\n0 - Закончить конвертирование\n";
//    cin >> a;
//    if (a > 0 && a < 4) {
//        switch (a) {
//        case 1: {
//            cout << "Выберите валюту на которую будете менять\n1 - Euro\n2 - Рубли\n";
//            cin >> b;
//            if (b > 0 && b < 3) {
//                cout << "Укажите сумму для конвертации: ", cin >> c;
//                switch (b) {
//                case 1: {
//                    euro = c * 35 / 40;
//                    cout << "Ваша сумма составляет - " << euro << endl;
//                  
//                }case 2: {
//                    rub = c * 35;
//                    cout << "Ваша сумма составляет - " << rub << endl;
//                    
//                }default :{
//                    cout << endl;
//                }
//                }
//            }
//            else {
//                cout << "Eror\n";
//            }
//                break;
//        } case 2: {
//            cout << "Выберите валюту на которую будете менять\n1 - Dollar\n2 - Рубли\n";
//            cin >> b;
//            if (b > 0 && b < 3) {
//                cout << "Укажите сумму для конвертации: ", cin >> c;
//                switch (b) {
//                case 1: {
//                    dol = c * 40 / 35;
//                    cout << "Ваша сумма составляет - " << dol << endl;
//                    
//                }case 2: {
//                    rub = c * 40;
//                    cout << "Ваша сумма составляет - " << rub << endl;
//                    
//                }default: {
//                    cout << endl;
//                }
//                }
//            }
//            else {
//                cout << "Eror\n";
//            }
//            break;
//        }case 3: {
//            cout << "Выберите валюту на которую будете менять\n1 - Dollar\n2 - Euro\n";
//            cin >> b;
//            if (b > 0 && b < 3) {
//                cout << "Укажите сумму для конвертации: ", cin >> c;
//                switch (b) {
//                case 1: {
//                    dol = c / 35;
//                    cout << "Ваша сумма составляет - " << dol << endl;
//                    
//                }case 2: {
//                    euro = c / 40;
//                    cout << "Ваша сумма составляет - " << euro << endl;
//                    
//                }default: {
//                    cout << endl;
//                }
//                }
//            }
//            else {
//                cout << "Eror\n";
//            }
//            break;
//        }
//        }
//    }
//    else if (a == 0) {
//        exit(0);
//    }
//    else {
//        cout << "Выбранной валюты не существует!\n";
//    }
//}



#pragma endregion

#pragma region 28.12 Работа на паре
//int myNumber = 1234;
//int countNumbers = 0;
//int oldNumber = 1234, currentNumber, countOddNumbers = 0;
//for (int i = 0; i < countNumbers; i++) {
//    currentNumber = oldNumber % 10;
//    if (currentNumber % 2 == 0) {
//        countOddNumbers++;
//    }
//    oldNumber /= 10;
//}
//cout << "\nВ вашем числе " << countNumbers << " четных цифр";


//for (;;) {
//    cout << "\n Введите число или 0 для окончания цикла: ";
//    cin >> myNumber;
//    cout << myNumber;
//    if (!myNumber) break;
//}

//int num, num1 = 9;
//cin >> num;
//for (int i = 1; i <= num1; i++) {
//    if (num % i == 0) {
//        cout << i << " ";
//    }
//}
//int one, two;
//cin >> one;
//int sum = 0;
//while (one > 0) {
//    two = one % 10;
//    one /= 10;
//    sum += two;
//
//}
//cout << sum;


#pragma endregion 


#pragma region 9 ЗАДАНИЕ 30.12
//int a, b;
//cin >> a;
//while (a > 0) {
//    b = a % 10;
//    cout << b;
//    a = a / 10;
//}

//int r = 10 + rand() % 100;
//while(r != 10) {
//    r = 10 + rand() % 100;
//    cout << "\nНовое число - " << r;
//}

//int r = 1 + rand() % 500; //загаданное число
//int ans, count = 1; // ответ пользователя + счетчик
//    cout << "Какое число загадно? от 1 до 500: ";
//    while (cin >> ans) {
//        if (ans <= 0) {
//             cout << "Как скажешь друг\n";
//             break;
//        }
//        else if (ans < r) {
//            cout << "Больше(\n";
//            count++;
//
//        }
//        else if (ans > r) {
//            cout << "Меньше)\n";
//            count++;
//        }
//        else if (ans == r) {
//            cout << "Моё почтение. Ты сделал(-а) " << count << "попыток\n";
//            break;
//        }        
//    }

//int min, max, per, sum = 0, zero = 0;
//cout << "Мин: ", cin >> min;
//cout << "Макс: ", cin >> max;
//per = max - min;
//for (int i = min; i < max; i++) {
//
//    sum += i;
//}
//cout << sum;

//int min, max,per, sum=0, zero = 0;
//cout << "Мин: ", cin >> min;
//cout << "Макс: ", cin >> max;
//per = max - min;
//for (int i = max; i > min; i--) {
//    sum += per;
//    per--;
//       
//}
//cout << sum;

//int a = 5, sum = 0;
//while (a != 0) {
//    cin >> a;
//    sum += a;
//    
//}
//cout << sum;


//int min, max, min1, max1, min2, min3, min7;
//cout << "1 число - ", cin >> min1;
//cout << "2 число - ", cin >> max1;
//if (min1 > max1) {
//    max = min1;
//    min = max1;
//}
//else {
//    max = max1;
//    min = min1;
//}
//min2 = min;
//min3 = min;
//min7 = min;
//while (min2 <= max) {
//
//    if (min2 % 2 == 0) {
//        cout << min2 << " ";
//    }  min2++;
//}cout << endl;
//while (min3 <= max) {
//    if (min3 % 2 != 0) {
//        cout << min3 << " ";
//    } min3++;
//}cout << endl;
//while (min7 <= max) {
//    if (min7 % 7 == 0) {
//        cout << min7 << " ";
//    } min7++;
//}

//for (int i = first; i <= second; i++) {
//    if (i % 2 == 0) {
//        cout << i;
//    }
//}



#pragma region Task 14
//int a, b, n;
//int user, l = 0;
//
//cout << "Контрольный тест по таблице умножения. Выберите сложность.\n"
//<< "1 - легко " << "2 - нормально " << "3 - сложно\n";
//cin >> n;
//for (int i = 0; i < 5; i++)
//{
//    switch (n)
//    {
//    case 1:
//    {
//        a = 1 + rand() % 10;
//        b = 1 + rand() % 10;
//        break;
//    }
//    case 2:
//    {
//        a = 10 + rand() % 100;
//        b = 10 + rand() % 100;
//        break;
//    }
//    case 3:
//    {
//        a = 100 + rand() % 1000;
//        b = 100 + rand() % 1000;
//        break;
//    }
//    }
//    cout << a << "*" << b << "=", cin >> user;
//    if (user == a * b)
//    {
//        cout << "Верно!\n";
//        l++;
//    }
//    else
//    {
//        cout << "Ошибка!\n";
//    }
//}
//cout << "Ваш результат: " << l << "/5";
#pragma endregion
#pragma region Task 15
//Написать имитацию кассового аппарата для магазина, торгующего новогодними товарами, Кассир должен выбрать товар из списка, ввести его количество затем выбрать следующий товар.
//По завершению ввода вывести на экран всю сумму покупки. Предусмотреть наличие скидки. В писке товаров должно быть не меньше 4-ех товаров, должна отображаться их цена. Предусмотреть неправильно вводимые данные.
//string promokod = "SELL", promo, stop = "STOP";
//int sum,sumend = 0,  pos = 1, amount;
//float sell = 0.9, sell1=0.1;
//int pos1 = 70, pos2 = 30, pos3 = 50, pos4 = 80, pos5 = 90, pos6 = 35;
//int countPos1 = 0, countPos2 = 0, countPos3 = 0, countPos4 = 0, countPos5 = 0, countPos6 = 0;
//cout << "-----------------------------------------------------\n";
//cout << "Выберите товар:\n";
//cout << "Елка - 1\t\tГирлянды - 2\t\tФейрверки - 3\nМягкая игрушка - 4\tМишура  -  5\tЕлочные украшения - 6\n";
//cout << "-----------------------------------------------------\n";
//cout << "Для того чтобы закончить покупки выберите - 0\n";
// while (pos != 10) {
//    cin >> pos;    
//    if (pos >=0 && pos<=6) {
//        cout << "Вы выбрали - " << pos << endl;
//        if (pos >= 1 && pos <= 6) {
//            cout << "Введите количество - ", cin >> amount;
//            switch (pos) {
//            case 1: {
//                sum = amount * pos1;
//                sumend += sum;
//                cout << "\nТекущая сумма: " << sumend << endl;
//                countPos1++;
//                countPos1 *= amount;
//                break; }
//            case 2: {
//                sum = amount * pos2;
//                sumend += sum;
//                cout << "\nТекущая сумма: " << sumend << endl;
//                countPos2++;
//                countPos2 *=amount;
//                break; }
//            case 3: {
//                sum = amount * pos3;
//                sumend += sum;
//                cout << "\nТекущая сумма: " << sumend << endl;
//                countPos3++;
//                countPos3 *= amount;
//                break; }
//            case 4: {
//                sum = amount * pos4;
//                sumend += sum;
//                cout << "\nТекущая сумма: " << sumend << endl;
//                countPos4++;
//                countPos4 *= amount;
//                break; }
//            case 5: {
//                sum = amount * pos5;
//                sumend += sum;
//                cout << "\nТекущая сумма: " << sumend << endl;
//                countPos5++;
//                countPos5 *= amount;
//                break; }
//
//            case 6: {
//                sum = amount * pos6;
//                sumend += sum;
//                cout << "\nТекущая сумма: " << sumend << endl;
//                countPos6++;
//                countPos6 *= amount;
//                break; }
//
//            default: {
//                cout << "Eror\n";
//                break;
//            }
//            }
//        }
//        else if (pos <= -1 && pos >= 7) {
//            cout << "Eror\n";
//        }
//        else if (pos == 0) {
//            cout << "Введите промокод: ", cin >> promo;
//            if (promo == promokod) {
//                sumend *= sell;
//                cout << "\n-----------------------------------------------------\n";
//                cout << "Елка\t\t\t\t\t" << countPos1 <<" x "<<countPos1*pos1<<" (-"<< countPos1 * pos1*sell1 <<")" << endl;
//                cout << "Гирлянда\t\t\t\t" << countPos2 << " x " << countPos2 * pos2 << " (-" << countPos2 * pos2 * sell1 << ")" << endl;
//                cout << "Фейрверки\t\t\t\t" << countPos3 << " x " << countPos3 * pos3 << " (-" << countPos3 * pos3 * sell1 << ")" << endl;
//                cout << "Мягкая игрушка\t\t\t\t" << countPos4 << " x " << countPos4 * pos4 << " (-" << countPos4 * pos4 * sell1 << ")" << endl;
//                cout << "Мишура\t\t\t\t\t" << countPos5 << " x " << countPos5 * pos5 << " (-" << countPos5 * pos5 * sell1 << ")" << endl;
//                cout << "Елочные украшения\t\t\t" << countPos6 << " x " << countPos6 * pos6 << " (-" << countPos6 * pos6 * sell1 << ")" << endl;
//                cout << "-----------------------------------------------------\n";
//                cout << "Сумма к оплате с учетом скидки: " << sumend << endl;
//                exit(0);
//            }
//            else if (promo == stop) {
//                cout << "Сумма к оплате: " << sumend << endl;
//                exit(0);
//            }
//            else {
//                cout << "Промокод несуществет!\n";
//            }
//        }
//    }
//    else {
//        cout << "Такой позиции нет!\n";
//    }
//}

#pragma endregion

#pragma region TASK 16






#pragma endregion




#pragma endregion



#pragma region
////Объявление массива
//const size_t size = 5;
//int values[size];
////Заполнение массива
//values[0] = 1;
//values[1] = 2;
//values[2] = 3;
////заполнение при создании
//int newValues[size]{ 1, 2, 3, 4, 5 };
////ввод массива
//for (int i = 0; i < size; i++) {
//    cin >> values[i];
//}
////вывод массива
//for (int i = 0; i < size; i++) {
//    cout << values[i];
//}cout << values;

//int money, sum = 0;
//const size_t size = 6;
//string values[size]{ "Январь","Февраль","Март","Апрель","Май","Июнь" };
//const size_t size1 = 6;
//int values1[size1];
//for (int i = 0; i < size1; i++) {
//    while (values1[i] < 0)
//    cout << "Введите прибыль за "<< values[i]<<" : ", cin >> values1[i];
//        sum += values1[i]; 
//    } cout << "Общая прибыль составляет: " << sum << endl;

//const size_t size = 5;
//int values[size] = { 0, 1, 2, 3, 4 };
//for (int i = 4; i >= 0; i--) {
//    cout << values[i];
//}

//int money, sum = 0, max = 0,min = 0;
//string min1, max1;
//const size_t size = 12;
//string values[size]{ "Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь" };
//const size_t size1 = 12;
//int values1[size1];
//for (int i = 0; i < size1; i++) {
//    while (values1[i] < 0)
//        cout << "Введите прибыль за "<< values[i]<<" : ", cin >> values1[i];
//    sum += values1[i]; 
//        if (values1[i] > max) {
//            max = values1[i];
//            min = max;
//            max1 = values[i];
//
//        }if (values1[i] < min) {
//            min = values1[i];
//            min1 = values[i];
//        }
//    } 
//cout << "Общая прибыль составляет: " << sum << endl;
//cout << "Максимальная прибыль за "<< max1<<": " << max << endl;
//cout << "минимальная прибыль за "<< min1<<": " << min << endl;


//const size_t size = 6;
//const size_t size1 = 6;
//const size_t ball = 12;
//int min[size], max[size1], full[ball];
//for (int i = 0; i < size; i++) {
//    min[i] = 1 + rand() % 100;
//    }
//
//int minSUP;
//for (int i = 0; i < size;i++){
//    for (int j = 0; j < size; j++) {
//
//        if (min[j] > min[i]) {
//            minSUP = min[j];
//            min[j] = min[i];
//            min[i] = minSUP;
//        }
//    }
//}
//for (int i = 0; i < size; i++)
//    full[i] = min[i];
//
//for (int i = 0; i < size; i++)
//    cout << min[i] << " ";
//
//cout << endl;
//for (int i = 0; i < size1; i++) {
//    max[i] = 1 + rand() % 100;
//}
//for (int i = size1; i >= 0; i--) {
//    for (int j = size1; j >= 0; j--) {
//
//        if (max[j] > max[i]) {
//            minSUP = max[i];
//            max[i] = max[j];
//            max[j] = minSUP;
//        }
//    }
//}
//for (int i = 0; i < size1; i++)
//    cout << max[i] << " ";
//for (int i = 0; i < size1; i++) {
//    full[i + size1] = max[i];
//}
//cout << endl;
//
//for (int i = 0; i < ball; i++) {
//    for (int j = 0; j < ball; j++) {
//
//        if (full[j] > full[i]) {
//            minSUP = full[j];
//            full[j] = full[i];
//            full[i] = minSUP;
//        }
//    }
//}
//for(int i = 0; i < ball;i++)
//cout << full[i] << " ";



//const size_t size = 30;
//const size_t plus = 30;
//int numb[size], minSUP, null=-1, all[plus];
//for (int i = 0; i < size; i++) {
//    numb[i] = rand() % 2;
//    cout << numb[i] << " ";
//    all[i] = rand() % 2;
//}
//for (int i = size; i >= 0; i--) {
//    for (int j = size; j >= 0; j--) {
//
//        if (numb[j] > numb[i]) {
//        minSUP = numb[i];
//        numb[i] = numb[j];
//        numb[j] = minSUP;
//        }
//    }
//}
//cout << endl;
//for (int i = 0; i < size; i++) {
//    if (numb[i] == 0) {
//        numb[i] = null;
//    }
//    cout << numb[i] << " ";
//}
//int size3 = 0;
//for (int i = 0; i < size; i++) {
//    if (numb[i] < 0) {
//        size3++;
//    }
//   
//}
//
//memcpy(all, numb, sizeof(numb - size3));
//cout << endl;
//for (int i = 0; i < plus; i++) {
//    cout << all[i] << " ";
//}
//int values =
//int values6 =
//memcpy(values, valuesб, sizeof(values6); ///КУДА КОПИРУЕМ, ОТКУДА БЕРЕМ, РАЗМЕР МАССИВА
#pragma endregion
#pragma region TASK 21 МАТРИЦА

//const size_t size = 5;
//const size_t size2 = 5;
//int mass[size][size2];
//for (int i = 0; i < size; i++)
//{
//    for (int p = 0; p < size; p++)
//    {
//        mass[i][p] = rand() % 2;
//        if (i == p)
//        {
//            mass[i][p] = 0;
//        }
//    }
//}
//cout << "\n";
//cout << "\t";
///*string citys[5] {"a", ""}*/
//cout << "  A B C D E\n";
//for (int i = 0; i < size; i++)
//{
//    if (i == 0)
//    {
//        cout << "\tA";
//    }
//    else if (i == 1)
//    {
//        cout << "B";
//    }
//    else if (i == 2)
//    {
//        cout << "C";
//    }
//    else if (i == 3)
//    {
//        cout << "D";
//    }
//    else if (i == 4)
//    {
//        cout << "E";
//    }
//
//    for (int p = 0; p < size2; p++)
//    {
//
//        cout << " " << mass[i][p];
//    }
//    cout << endl;
//    cout << "\t";
//}
//cout << "Все доступные города\n";
//for (int i = 0; i < size; i++)
//{
//
//    for (int p = 0; p < size2; p++)
//    {
//        if (mass[i][p] == 1)
//        {
//            if (i == 0)
//            {
//                cout << "Из города А в ";
//                if (p == 0)
//                {
//                    cout << "A\n";
//                }
//                else if (p == 1)
//                {
//                    cout << "B\n";
//                }
//                else if (p == 2)
//                {
//                    cout << "C\n";
//                }
//                else if (p == 3)
//                {
//                    cout << "D\n";
//                }
//                else if (p == 4)
//                {
//                    cout << "E\n";
//                }
//            }
//            else if (i == 1)
//            {
//                cout << "Из города В в ";
//                if (p == 0)
//                {
//                    cout << "A\n";
//                }
//                else if (p == 1)
//                {
//                    cout << "B\n";
//                }
//                else if (p == 2)
//                {
//                    cout << "C\n";
//                }
//                else if (p == 3)
//                {
//                    cout << "D\n";
//                }
//                else if (p == 4)
//                {
//                    cout << "E\n";
//                }
//            }
//            else if (i == 2)
//            {
//                cout << "Из города С в ";
//                if (p == 0)
//                {
//                    cout << "A\n";
//                }
//                else if (p == 1)
//                {
//                    cout << "B\n";
//                }
//                else if (p == 2)
//                {
//                    cout << "C\n";
//                }
//                else if (p == 3)
//                {
//                    cout << "D\n";
//                }
//                else if (p == 4)
//                {
//                    cout << "E\n";
//                }
//            }
//            else if (i == 3)
//            {
//                cout << "Из города D в ";
//                if (p == 0)
//                {
//                    cout << "A\n";
//                }
//                else if (p == 1)
//                {
//                    cout << "B\n";
//                }
//                else if (p == 2)
//                {
//                    cout << "C\n";
//                }
//                else if (p == 3)
//                {
//                    cout << "D\n";
//                }
//                else if (p == 4)
//                {
//                    cout << "E\n";
//                }
//            }
//            else if (i == 4)
//            {
//                cout << "Из города Е в ";
//                if (p == 0)
//                {
//                    cout << "A\n";
//                }
//                else if (p == 1)
//                {
//                    cout << "B\n";
//                }
//                else if (p == 2)
//                {
//                    cout << "C\n";
//                }
//                else if (p == 3)
//                {
//                    cout << "D\n";
//                }
//                else if (p == 4)
//                {
//                    cout << "E\n";
//                }
//            }
//        }
//    }
//}


#pragma endregion НЕ ЗАКОНЧЕНО

#pragma region TASK 1.
//int sec, hour, day, min, help;
//cout << "Input time: ", cin >> sec;
//day = sec / 3600 / 24;
//hour = sec / 3600 % 24;
//min = sec / 60 % 60;
//sec = sec % 60;
//cout << day << " - day " << hour << " - hour " << min << " - min " << sec << " - sec\n";

//int sec, day, min, hour, help = 1;
//while (help != 0) {
//    cout << "Введите секунды: ", cin >> sec;
//    cout << "Во что их перевести?\n1. Дни\n2. Часы\n3. Минуты\n0. Закончить конвертацию\n*Введите номер варианта*\n", cin >> help;
//    if (help == 1) {
//        day = sec / 3600 / 24;
//        if (day == 1) {
//            cout << day << " день\n";
//        }else if (day % 10 > 1 && day % 10 < 5) {
//            cout << day << " дня\n";
//        }
//        else {
//            cout << day << " дней\n";
//        }
//    }if (help == 2) {
//        hour = sec / 3600;
//        if ( hour%10 == 1) {
//            cout << hour << " час\n";
//        }
//        else if (hour % 10 > 1 && hour % 10 < 5) {
//            cout << hour << " часа\n";
//        }
//        else {
//            cout << hour << " часов\n";
//        }
//    }if (help == 3) {
//        min = sec / 60;
//        if (min == 1) {
//            cout << min << " минута\n";
//        }
//        else if (min > 1 && min < 5) {
//            cout << min << " минуты\n";
//        }
//        else {
//            cout << min << " минут\n";
//        }
//    }if (help == 0) {
//        cout << "Пока пока";
//        exit(0);
//    }
//    if (help < 0 || help > 10000000) {
//        cout << "Eror\n";
//    }
//}
//
// 
// 
//const size_t size = 10;
//const size_t size1 = 10;
//int mass[size], end[size1], help = 1, min = 0, max = 0, temp;
//cout << "Массив. Выберите заполнение?\n1 - Вручную\n2 - Автоматически\n0 - Закончить заполнение\n";
//while (help != 0) {
//    cout<<"Введите - ", cin >> help;
//    if (help == 1) {
//        cout << "Заполните массив\n";
//        for (int i = 0; i < size; i++) {
//            cin >> mass[i];
//        }
//    }
//    else if (help == 2) {
//        for (int i = 0; i < size; i++) {
//            mass[i] = -100 + (rand() % (100 - (-100) + 1));
//           
//        }
//    }
//    else if (help >2 || help <0) {
//        cout << "Eror\n";
//    }
//}
//
////по убыванию чтобы нули в конец
////for (int i = size; i >= 0; i--) {
////    for (int j = size; j >= 0; j--) {
////        if (mass[j] > mass[i]) {
////            help = mass[i];
////            mass[i] = mass[j];
////            mass[j] = help;
////        }
////        if (mass[j] == 0) {
////            temp = mass[i];
////            mass[i] = mass[j];
////            mass[j] = temp;
////        }
////    }
////}
//for (int i = 0; i < size; i++) {
//
//    cout << mass[i] << " ";
//
//}
//// по возрастанию не учитывая нули
//for (int i = 0; i < size; i++) {
//    for (int j = 0; j < size; j++) {
//        
//        
//        if (mass[j] > mass[i]) {
//            help = mass[j];
//            mass[j] = mass[i];
//            mass[i] = help;
//        } if (mass[j] == 0) {
//            temp = mass[i];
//            mass[i] = mass[j];
//            mass[j] = temp;
//        }
//    }
//}
//
//min = INT_MAX;
//max = INT_MIN;
//for (int i = 0; i < size; i++) {
//    if (mass[i] != 0) {
//        if (mass[i] < min) {
//            min = mass[i];
//        } if (mass[i] > max) {
//            max = mass[i];
//        }
//    }
//}
//
//cout << endl << endl;
//    for (int i = 0; i < size; i++) {
//        
//            cout << mass[i] << " ";
//        
//    }
//
//cout << endl;
//cout << min << " - минимальное\n";
//cout << max << " - максимально\n";
//cout << "The END\n";
#pragma endregion

#pragma region TASK 10.02
//const size_t size = 10;
//int one[size], two[size], three[size], a = 1, temp[size];
//cout << "Вручную - 1\nАвтоматически - 2\n";
//while (a != 0) {
//    cout << "Введите - ", cin >> a;
//    if (a == 1) {
//        cout << "1 массив\n";
//        for (int i = 0; i < size; i++) {
//            cin >> one[i];
//        }
//        cout << "2 массив\n";
//        for (int i = 0; i < size; i++) {
//            cin >> two[i];
//        }
//    }
//    else if (a == 2) {
//        for (int i = 0; i < size; i++) {
//            one[i] = rand() % 10;
//            two[i] = rand() % 10;
//
//        }
//        for (int i = 0; i < size; i++) {
//            cout << one[i] << " ";
//        }
//        cout << endl;
//        for (int i = 0; i < size; i++) {
//            cout << two[i] << " ";
//        }
//    }
//    else {
//        cout << "Eror\n";
//    }
//}
//for (int i = 0; i < size; i++) {
//    for (int j = 0; j < size; j++) {
//        if (one[i] == two[j]) {
//            temp[j] = one[i];
//            cout << temp[j] << " ";
//        }
//    }
//}
//for (int i = 0; i < size; i++) {
//    for (int j = 0; j < size; j++) {
//        if (temp[i] != three[j]) {
//            three[i] = three[j];
//        }
//    }
//}
//for (int i = 0; i < size; i++) {
//    
//
//    if (three[i] > 0) {
//        
//        cout << three[i]<<" ";
//    }
//}
#pragma endregion

#pragma region 06.01

//int a, sum = 0;
//cout << "Введите нижний порог целых чисел, чтобы вычислить их сумму до 500\n", cin >> a;
//while (a > 501) 
//    cout << "Eror\n", cin >> a;
//
//for (int i = a; i < 501; i++)
//    sum += i;
//cout << "\nСумма целых чисел равна - " << sum;

//int x, y, work;
//cout << "Введите число, которое возведете в степень - ", cin >> x;
//while (x == 0)
//cout << "Eror\n", cin >> x;
//cout << "Введите число, которое будет степенью - ", cin >> y;
//
//cout <<"\n"<< pow(x, y) << " - Ваш ответ\n";

//double midleSum=0, temp;
//for (int i = 0; i < 1001; i++)
//    midleSum += i;
//cout << "Среднее арифметическое чисел от 1 до 1000 - " << midleSum / 1000;


//int a, work = 1;
//cout << "Введите нижний порог целых чисел, чтобы вычислить их произведение до 20\n", cin >> a;
//while (a < 1 || a >20) 
//    cout << "Eror\n", cin >> a;
//for (int i = a; i < 21; i++)
//    work *= i;
//cout << "\nПроизведение целых чисел равно : " << work;

//const size_t size = 10;
//int one[size], a, work;
//for (int i = 0; i < size; i++)
//    one[i] = i;
//cout << "Введите число, для таблицы умножения - ", cin >> a;
//while (a < 0 || a > 9)
//cout << "\nEror\n", cin >> a;
//for (int i = 1; i < size; i++)
//    cout << one[a] << " x " << i << " = " << one[a] * i << endl;

#pragma endregion

#pragma region TASK 05.01

//int det;
//char a;
//cout << "Введите символ - ", cin >> a;
//det = a;
//if (det >= 60 && det <= 90)
//cout << "Заглавная буква\n";
//else if (det >= 97 && det <= 122)
//cout << "Строчная буква\n";
//else if (det >= 48 && det <= 57)
//cout << "Цифра\n";
//else if (det >= 44 && det <= 46 || det == 33 || det == 58 || det == 59 || det == 63)
//cout << "Знак препинания\n";
//else
//cout << "Неизвестный знак\n";


//int callMin, meg = 2, mtc = 2.5, yota = 3, one, two;
//cout << "С какого оператора будет звонок?\n1. - Мегафон\n2. - МТС\n3. - YOTA\n", cin >> one;
//cout << "\nНа какой оператор будет звонок?\n1. - Мегафон\n2. - МТС\n3. - YOTA\n", cin >> two;
//cout << "\nСколько минут будет длиться звонок?\n", cin >> callMin;
//if (one == two) {
//    cout << "Звонок бесплатный\n";
//}
//else if (one == 1) {
//    cout << "Стоимость звонка - " << callMin * meg << endl;
//}else if (one == 2) {
//    cout << "Стоимость звонка - " << callMin * mtc << endl;
//}else if (one == 3) {
//    cout << "Стоимость звонка - " << callMin * yota << endl;
//}
//else {
//    cout << "Eror\n";
//}


//int zp, string, out, change=1;
//cout << "Выберите одно из 3\n1. Желаемый доход Васи и количество опозданий. Узнать кол-во строк кода\n2. Сколько раз можно опоздать, в зависимости от строк кода и желаемого дохода" << endl;
//cout << "3. Введите кол-во строк и кол-во опозданий. Узнать зарплаты Васи\n0. Завершить операции\n";
//while (change != 0) {
//    cin >> change;
//    switch (change) {
//    case 1: {
//        cout << "\nВведите желаемый доход - ", cin >> zp;
//        cout << "\nВведите количество опозданий - ", cin >> out;
//        out /= 3 * 20;
//        string = (zp + out) * 2;
//        cout << "\nКоличество строк, которые нужно написать с учетом опозданий - " << string;
//    }case 2: {
//        cout << "\nСколько строк написал Вася? - ", cin >> string;
//        while (string != 0)
//            cin >> string;
//        cout << "\nЖелаемый доход Васи? - ", cin >> zp;
//        while (zp != 0)
//            cin >> zp;
//        string = string / 2;
//        if (string < zp) {
//            cout << "\nВасе нужно написать больше строк\n";
//            cout << (zp - string) * 2 << "\nСтолько нужно дописать! И чтобы без опозданий\n";
//        }
//        else if (string == zp) {
//            cout << "\nОпаздывать нельзя. Все ровно\n";
//        }
//        else if (string > zp) {
//            cout << "Вася может опоздать - " << (string - zp) / 20;
//        }
//
//    }case 3: {
//        cout << "\nВведите количество строк - ", cin >> string;
//        cout << "\nВведите количество опозданий - ", cin >> out;
//        out = (out / 3) * 20;
//        string /= 2;
//        if (string < out) {
//            cout << "\nУ Васи слишком много опозданий, ему нужно их оплатить - " << out - string;
//        }
//        else if (string == out) {
//            cout << "\nВася заработал ровно столько, сколько опоздал на работу";
//        }
//        else if (string > out) {
//            cout << "\nВася заработал - " << string - out;
//        }
//    }
//    }
//}

#pragma endregion

#pragma region ДЗ 08.02

//const size_t size = 10;
//int mass[size];
//
//for (int i = 0; i < size; i++) {
//    mass[i] = rand() % 10;
//}
//int min = mass[0], max = mass[0];
//
//for (int i = 0; i < size; i++) {
//    if (max < mass[i]) {
//        max = mass[i];
//    }
//    if (min > mass[i]) {
//        min = mass[i];
//    }
//}
//for (int i = 0; i < size; i++)
//    cout << mass[i] << " ";
//
//cout << "\n" << min << " - минимальное\n" << max << " - максимальное";

//const size_t size = 10;
//int mass[size], a=1, b, s = 0, level;
//while (a != 0) {
//    cout << "Введите диапазон,\nот - ", cin >> a;
//    cout << "до - ", cin >> b;
//    if (a > b) {
//        cout << "Eror\n";
//    }
//    if (a < b) {
//        
//        break;
//    }
//}
//
//for (int i = 0; i < size; i++) 
//    mass[i] = a + rand() % (b - a);
//for (int i = 0; i < size; i++)
//    cout << mass[i] << " ";
//cout << endl;
//cout << "Введите порог для суммирования - ", cin >> level;
//while (level < a) 
//    cout << "Введите порог для суммирования - ", cin >> level;
//
//for (int i = 0; i < size; i++) {
//    if (level > mass[i]) {
//        s += mass[i];
//    }
//}
//cout << s << " - сумма всех чисел, что меньше - " << level;
//for (int i = 0; i < size; i++)
//    cout << mass[i] << " ";


//int money, sum = 0;
//string min1, max1;
//const size_t size = 12;
//string values[size]{ "Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь" };
//const size_t size1 = 12;
//int values1[size1], a ,b;
//for (int i = 0; i < size1; i++) {
//    while (values1[i] < 0)
//        cout << "Введите прибыль за " << values[i] << " : ", cin >> values1[i];
//    sum += values1[i];   
//}
//int max = INT_MIN, min = INT_MAX;
//cout << "Введите диапазон,\nот - ",cin >> a;
//cout << "до - ", cin >> b;
//while (a > b) {
//    cout << "Введите диапазон,\nот - ", cin >> a;
//    cout << "до - ", cin >> b;
//}
//for (int i = a-1; i < b; i++) {
//    if (min > values1[i]) {
//        min = values1[i];
//        min1 = values[i];
//    }
//    if (max < values1[i]) {
//        max = values1[i];
//        max1 = values[i];
//    }
//}
//cout << "Общая прибыль составляет: " << sum << endl;
//cout << "Максимальная прибыль за " << max1 << ": " << max << endl;
//cout << "минимальная прибыль за " << min1 << ": " << min << endl;

//vector<int> num;
//int size, temp, sumNeg = 0, negSum = 0, workMM=1, workEven=1, j = 0;
//cout << "Введите величину массива - ", cin >> size;
//while (size == 0)
//    cout << "Введите величину массива - ", cin >> size;
//for (int i = 0; i < size; i++)
//    num.push_back(-50 + rand() % (50 - (-50))) ;
//for(int i = 0; i < size; i++)
//    for (int j = 0; j < size; j++) {
//        if (num[i] < num[j]) {
//            temp = num[j];
//            num[j] = num[i];
//            num[i] = temp;
//        }
//        
//    }
//for (int i = 0; i < num.size(); i++) {
//    cout << num[i] << " ";
//    if (num[i] < 0) {
//        sumNeg += num[i];
//        j++;
//    }
//    if (num[i] % 2 == 0 && num[i] != 0) {
//        workEven *= num[i];
//    }
//}
//for (int i = 1; i < num.size() - 1; i++) {
//    workMM *= num[i];
//}
//for (int i = 1; i < j - 1; i++) {
//    negSum += num[i];
//}
//cout <<"\nСумма отрицательных - "<< sumNeg;
//cout << "\nПроизведение чисел между MIN и MAX - " << workMM;
//cout << "\nПроизведение четных элементов - " << workEven;
//cout << "\nСумма элементов между первым и последним отрицательным числом - " << negSum;



#pragma endregion
#pragma region NEW INF
//vector<int> numbers = { 1, 2, 3 ,4 };

//for(int i = 0; i < 10; i++)            ЗАПОЛНЕНИЕ МАССИВА ЦИКЛОМ
//numbers.push_back(rand() % 100);


 
//cout << "\nОригинальный вектор: ";
//for (int i = 0; i < numbers.size(); i++)
//    cout << numbers[i] << " ";
//numbers.push_back(10); ВСТАВЛЯЕТ 10 В КОНЕЦ МАССИВА ПОСЛЕ 4
//numbers.push_back(15); ВСТАВЛЯЕТ 15 В КОНЕЦ МАССИВА ПОСЛЕ 10

// - удалить элемент из вектора
//int index = 0 // - Позиция элемента для удаления
//numbers.erase(numbers.begin() + index);


//vector<int> ultra, ultra1;
//int j = 0, size = 10, temp;
//for (int i = 0; i < size; i++) {
//    ultra.push_back(rand() % 10);
//    ultra1.push_back(rand() % 10);
//}
//for (int i = 0; i < ultra.size(); i++) {
//    cout << ultra[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < ultra.size(); i++) {
//    cout << ultra1[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < ultra1.size(); i++) {
//    ultra.push_back(ultra1[i]);
//    
//}
//for (int i = 0; i < ultra.size()-10; i++) {
//    ultra1.push_back(ultra[i]);
//}
//for (int i = 0; i < ultra.size(); i++) {
//    cout << ultra[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < ultra1.size(); i++) {
//    cout << ultra1[i] << " ";
//}
//cout << endl;
//for(int i = 0; i < ultra1.size(); i++)
//    for (int j = 0; j < ultra1.size(); j++) {
//        if (ultra[i] < ultra[j]) {
//            temp = ultra[j];
//            ultra[j] = ultra[i];
//            ultra[i] = temp;
//        }
//        if (ultra1[i] < ultra1[j]) {
//            temp = ultra1[j];
//            ultra1[j] = ultra1[i];
//            ultra1[i] = temp;
//        }
//        
//    }
//for (int i = 0; i < ultra.size(); i++) {
//    cout << ultra[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < ultra.size(); i++) {
//    cout << ultra1[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < ultra.size(); i++) 
//    for (int j = 0; j < ultra1.size(); j++) {
//        if (ultra[i] == ultra1[j]) {
//            ultra1.erase(ultra1.begin() + j);
//        }
//    }
//cout << "\n " << ultra1.size();
//for (int i = 0; i < ultra1.size(); i++)
//    cout << ultra1[i] << " ";
#pragma endregion

#pragma region 01.03.2023 CLASSWORK
//const size_t size = 5;
//int arr[size][size];
//int sumColumn[size], sumString[size], temp1=0, temp2=0;
//int sum = 0, midlWork = 0, count = 0, min = INT_MAX, max = INT_MIN, stringSum = 0, columnSum = 0;
//for(int i = 0; i < size; i++)
//    for (int j = 0; j < size; j++) {
//        arr[i][j] = rand() % 10;
//    }
//    for (int i = 0; i < size;i++)
//        for (int j = 0; j < size; j++) {
//            if (arr[i][j] > max)
//            max = arr[i][j];
//         if (arr[i][j] < min)
//            min = arr[i][j];
//        sum += arr[i][j];
//        midlWork += arr[i][j];
//        count++;
//    }
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            temp1 += arr[j][i];
//            if (j == size-1) {
//                sumColumn[i] = temp1;
//                columnSum += temp1;
//            }
//            temp2 += arr[i][j];
//            if (j == size-1) {
//                sumString[i] = temp2;
//                stringSum += temp2;
//            }
//        }
//        temp1 = 0, temp2 = 0;
//    }
//    cout << "СНАЧАЛО СТРОКА, А ПОТОМ КОЛОННА\n";
//    printMass(sumString, size);
//    cout << endl;
//    printMass(sumColumn, size);
//    cout << "\n---------------------------------\n";
//    cout << columnSum << " - сумма столбцов\n";
//    cout << stringSum << " - сумма строк\n";
//
//midlWork /= count;
//for (int i = 0; i < size; i++) {
//    for (int j = 0; j < size; j++) {
//        cout << arr[i][j] << " ";
//    }
//    cout << endl;
//}
//cout << "\n" << sum << " - сумма всех чисел";
//cout << "\n" << size * size << " - количество чисел в массиве";
//cout << "\n" << midlWork << " - среднее арифметическое";
//cout << "\n" << max << " - максимальное\n" << min << " - минимальное";

//const size_t size = 5;
//const size_t ezis = 10;
//
//int one[size][ezis], two[size][size], a = 0, b = 1;
//for (int i = 0; i < size; i++)
//    for (int j = 0; j < ezis; j++)
//        one[i][j] = 0 +(rand() % (50 - 0 + 1));
//
//
//
//    
//for (int i = 0; i < 5; i++) {
//    for (int j = 0; j < 5; j++,a++,b++) 
//        two[i][j] = one[i][j + a] + one[i][j + b];    
//    a = 0;
//    b = 1;
//}
//
//
//
//
//for (int i = 0; i < size; i++) {
//    for (int j = 0; j < ezis; j++) {
//        cout << one[i][j] << " ";
//    }
//    cout << endl;

//cout << " \n-----------------\n";
//for (int i = 0; i < size; i++) {
//    for (int j = 0; j < size; j++) {
//        cout << two[i][j] << " ";
//    }
//    cout << endl;
//}
#pragma endregion

#pragma region 03.03.2023 CLASSWORK

#pragma endregion


return 0;
}
