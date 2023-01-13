// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> // стандартная библиотека с функциями
#include <iomanip> /*Манипуляция вводами данных, ввод консоли*/
#include <string> // объявлять переменную строкой
#include <stdlib.h> //содержаться классы (тренеры, векторы)
using namespace std; // рабочее пространство, чтобы не писать каждый раз std

int main() // главная функция
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
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

         //int num, one, two, three, four, five, six, third, sixth;
         //cout << "Введите число счастливое число: ", cin >> num;
         //if (num < 1000000 && num > 99999) {
         //    one = num / 100000;
         //    two = num / 10000 % 10;
         //    three = num / 1000 % 10;
         //    four = num / 100 % 10;
         //    five = num / 10 % 10;
         //    six = num % 10;
         //    third = one + three + two;
         //    sixth = four + five + six;
         //    if (sixth == third) {
         //        cout << "Ваше число счастливое! Congratulation)\n";
         //    }
         //    else {
         //        cout << "Ваше число не счастливое((( Попробуйте ещё раз \n";
         //    }
         //}
         //else {
         //    cout << "Eror\n";
         //}

         //int num, one, two, three, four;
         //cout << "Введите четырехзначное число: ", cin >> num;
         //
         //    if (num < 10000 && num > 999) {
         //        one = num / 1000;
         //        two = num / 100 % 10;
         //        three = num / 10 % 10;
         //        four = num % 10;
         //        cout << "Мы тут все понапутали, извините - " << two << one << four << three << endl;
         //    }
         //    else {
         //        cout << "Eror\n";
         //    }

   /* int one, two, three, four, five, six, seven;
    cout << "Введите семь чисел:\n", cin >> one, cin >> two, cin >> three, cin >> four, cin >> five, cin >> six, cin >> seven;
    if (one == two && two == three && three == four && four == six && six == seven) {
        cout << "Победа, все числа равны!\n";
    }
    else if (one > 0) {
        if (one >= two) {
            if (one >= three) {
                if (one >= four) {
                    if (one >= five) {
                        if (one >= six) {
                            if (one >= seven) {
                                cout << one << " - Самое большое число\n";
                            }
                        }
                        else if (six >= seven) {
                            cout << six << " - Самое большое число\n";
                        }
                        else if (five >= six) {
                            if (five >= seven) {
                                cout << five << " - Самое большое число\n";
                            }
                        }
                    }
                    else if (five >= six) {
                        if (five >= seven) {
                            cout << five << " - Самое большое число\n";
                        }
                    }
                }
                else if (four >= five) {
                    if (four >= six) {
                        if (four >= seven) {
                            cout << four << " - Самое большое число\n";
                        }
                    }
                }
            }
            else if (three >= four) {
                if (three >= five) {
                    if (three >= six) {
                        if (three >= seven) {
                            cout << three << " - Самое большое число\n";
                        }
                    }
                }
            }
        }
            if (two >= three) {
                if (two >= four) {
                    if (two >= four) {
                        if (two >= five) {
                            if (two >= six) {
                                if (two > seven) {
                                    cout << two << " - Самое большое число\n";
                                }
                            }
                        }
                    }
                }
            }
            else if (three >= four) {
                if (three >= five) {
                    if (three >= six) {
                        if (three >= seven) {
                            cout << three << " - Самое большое число\n";
                        }
                    }
                }
            }
            else if (four >= five) {
                if (four >= six) {
                    if (four >= seven){
                        cout << four << " - Самое большое число\n";
                    }
                }
            }
            else if (five >= six) {
                if (five >= seven) {
                    cout << five << " - Самое большое число\n";
                }
            }
            else if (six >= seven) {
                cout << six << " - Самое большое число\n";
            }
            else {
                cout << seven << " - Самое большое число\n";
            }
        }*/

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

int a, b, c;
int easy;
int easy1;
int middle;
int middle1;
int high;
int high1;

while (cout << "Выберите уровень сложности от 1 до 3:\nЕсли хотите закончить введите 0\n", cin >> a) {
    if (a == 1) {

        easy = 1 + rand() % 10;
        easy1 = 1 + rand() % 10;
        while  {
            c = easy * easy1;
            cout << "Посчитайте произведение: \n" << easy << " * " << easy1 << endl;
            cin >> b;
        }
    }
}
   /* else if (a == 2) {

    }
    else if (a == 3) {

    }
    else if (a == 0) {
        cout << "Как скажете\n";
        break;
    }
}*/



#pragma endregion
return 0;
}
