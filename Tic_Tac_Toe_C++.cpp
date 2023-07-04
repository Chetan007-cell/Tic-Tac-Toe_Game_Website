#include <iostream>
#include <string.h>
using namespace std;

void check(int, int);

int x[5], y[5], m = 0, h = 0, l[5], p[5], box[9], temp = 0;

void boxx(int a, int b)
{

    if (a == 1)
    {
        box[b - a] = 1;
    }
    if (a == 3)
    {
        box[2 * a + b - 1] = 1;
    }
    if (a == 2)
    {
        box[a + b] = 1;
    }
}

int brain(int a, int b)
{

    int c = 0;

    if (box[4] == 0 && c == 0)
    {
        l[m] = 2;
        p[m] = 2;
        c++;
        box[4] = -1;
        return 0;
    }

    int count = 1;

    for (int i = 0; i < 9; i = i + 3)
    {
        if (box[i] + box[i + 1] + box[i + 2] == -2)
        {
            if (box[i] == 0)
            {
                l[m] = count;
                p[m] = 1;
                box[i] = -1;
                return 0;
            }
            if (box[i + 1] == 0)
            {
                l[m] = count;
                p[m] = 2;
                box[i + 1] = -1;
                return 0;
            }
            if (box[i + 2] == 0)
            {
                l[m] = count;
                p[m] = 3;
                box[i + 2] = -1;
                return 0;
            }
        }
        count++;
    }

    count = 1;
    for (int i = 0; i < 3; i++)
    {
        if (box[i] + box[i + 3] + box[i + 6] == -2)
        {
            if (box[i] == 0)
            {
                p[m] = count;
                l[m] = 1;
                box[i] = -1;
                return 0;
            }
            if (box[i + 3] == 0)
            {
                p[m] = count;
                l[m] = 2;
                box[i + 3] = -1;
                return 0;
            }
            if (box[i + 6] == 0)
            {
                p[m] = count;
                l[m] = 3;
                box[i + 6] = -1;
                return 0;
            }
        }
        count++;
    }

    if (box[0] + box[4] + box[8] == -2)
    {
        if (box[0] == 0)
        {
            l[m] = 1;
            p[m] = 1;
            box[2] = -1;
            return 0;
        }
        if (box[8] == 0)
        {
            l[m] = 3;
            p[m] = 3;
            box[8] = -1;
            return 0;
        }
    }

    if (box[2] + box[4] + box[6] == -2)
    {
        if (box[2] == 0)
        {
            l[m] = 1;
            p[m] = 3;
            box[2] = -1;
            return 0;
        }
        if (box[6] == 0)
        {
            l[m] = 3;
            p[m] = 1;
            box[6] = -1;
            return 0;
        }
    }
    count = 1;
    for (int i = 0; i < 9; i = i + 3)
    {

        if (box[i] + box[i + 1] + box[i + 2] == 2)
        {
            if (box[i] == 0)
            {
                l[m] = count;
                p[m] = 1;
                box[i] = -1;
                return 0;
            }
            if (box[i + 1] == 0)
            {
                l[m] = count;
                p[m] = 2;
                box[i + 1] = -1;
                return 0;
            }
            if (box[i + 2] == 0)
            {
                l[m] = count;
                p[m] = 3;
                box[i + 2] = -1;
                return 0;
            }
        }
        count++;
    }

    count = 1;
    for (int i = 0; i < 3; i++)
    {
        if (box[i] + box[i + 3] + box[i + 6] == 2)
        {
            if (box[i] == 0)
            {
                p[m] = count;
                l[m] = 1;
                box[i] = -1;
                return 0;
            }
            if (box[i + 3] == 0)
            {
                p[m] = count;
                l[m] = 2;
                box[i + 3] = -1;
                return 0;
            }
            if (box[i + 6] == 0)
            {
                p[m] = count;
                l[m] = 3;
                box[i + 6] = -1;
                return 0;
            }
        }
        count++;
    }

    if (box[0] + box[4] + box[8] == 2)
    {
        if (box[0] == 0)
        {
            l[m] = 1;
            p[m] = 1;
            box[0] = -1;
            return 0;
        }
        if (box[8] == 0)
        {
            l[m] = 3;
            p[m] = 3;
            box[8] = -1;
            return 0;
        }
    }

    if (box[2] + box[4] + box[6] == 2)
    {
        if (box[2] == 0)
        {
            l[m] = 1;
            p[m] = 3;
            box[2] = -1;
            return 0;
        }
        if (box[6] == 0)
        {
            l[m] = 3;
            p[m] = 1;
            box[6] = -1;
            return 0;
        }
    }

    count = 1;
    for (int i = 0; i < 9; i = i + 3)
    {
        if (box[i] + box[i + 1] + box[i + 2] == -1)
        {
            if (box[i] == 0)
            {
                l[m] = count;
                p[m] = 1;
                box[i] = -1;
                return 0;
            }
            if (box[i + 1] == 0)
            {
                l[m] = count;
                p[m] = 2;
                box[i + 1] = -1;
                return 0;
            }
            if (box[i + 2] == 0)
            {
                l[m] = count;
                p[m] = 3;
                box[i + 2] = -1;
                return 0;
            }
        }
        count++;
    }

    count = 1;
    for (int i = 0; i < 3; i++)
    {
        if (box[i] + box[i + 3] + box[i + 6] == -1)
        {
            if (box[i] == 0)
            {
                p[m] = count;
                l[m] = 1;
                box[i] = -1;
                return 0;
            }
            if (box[i + 3] == 0)
            {
                p[m] = count;
                l[m] = 2;
                box[i + 3] = -1;
                return 0;
            }
            if (box[i + 6] == 0)
            {
                p[m] = count;
                l[m] = 3;
                box[i + 6] = -1;
                return 0;
            }
        }
        count++;
    }

    for (int i = 0; i < 9; i++)
    {

        if (box[i] == 0)
        {

            if (i > -1 && i < 3)
            {

                l[m] = 1;
                if (i == 0)
                {
                    p[m] = 1;
                    box[0] = -1;
                    return 0;
                }
                if (i == 1)
                {
                    p[m] = 2;
                    box[1] = -1;
                    return 0;
                }
                if (i == 2)
                {
                    p[m] = 3;
                    box[2] = -1;
                    return 0;
                }
            }
            if (i > 2)
            {
                l[m] = i / 3 + 1;
                p[m] = i % 3 + 1;
                box[i] = -1;
                return 0;
            }
        }
    }

    return 0;
}

void win()
{
    for (int i = 0; i < 9; i = i + 3)
    {
        if (box[i] == 1 && box[i + 1] == 1 && box[i + 2] == 1)
            temp++;
        if (box[i] == -1 && box[i + 1] == -1 && box[i + 2] == -1)
            temp--;
    }
    for (int i = 0; i < 3; i++)
    {
        if (box[i] == 1 && box[i + 3] == 1 && box[i + 6] == 1)
            temp++;
        if (box[i] == -1 && box[i + 3] == -1 && box[i + 6] == -1)
            temp--;
    }
    for (int i = 0; i < 3; i = i + 2)
    {
        if (i == 0)
        {
            if (box[i] == 1 && box[i + 4] == 1 && box[i + 8] == 1)
                temp++;
            if (box[i] == -1 && box[i + 4] == -1 && box[i + 8] == -1)
                temp--;
        }
        else
        {
            if (box[i] == 1 && box[i + 2] == 1 && box[i + 4] == 1)
                temp++;
            if (box[i] == -1 && box[i + 2] == -1 && box[i + 4] == -1)
                temp--;
        }
    }
}

void print(int a, int b, int m)
{

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {

            if (i % 2 != 0)
            {

                if (j % 2 != 0)
                {

                    if (1)
                    {
                        h = 0;
                        for (int n = 0; n < m; n++)
                        {
                            if (i == 2 * l[n] - 1 && j == 2 * p[n] - 1)
                            {
                                cout << "0";
                                h++;
                            }
                            if (i == 2 * x[n] - 1 && j == 2 * y[n] - 1)
                            {
                                cout << "x";
                                h++;
                            }
                        }

                        if (h == 0)
                            cout << " ";
                    }
                }
                else
                    cout << "|";
            }

            else
            {
                if (j % 2 != 0)
                    cout << "-";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int a, b, s = 0, t = 0;

    int xi=1;

    print(a,b,0);

    if(xi==1){
    while (1)
    {
        cout << "Enter co-ordinates : ";
        cin >> a >> b;

        check(a, b);

        x[m] = a;
        y[m] = b;

        boxx(a, b);

        win();
        if (temp == 1)
        {
            print(a, b, m + 1);
            cout << "You Win!!\n";
            t++;
            break;
        }

        brain(a, b);

        cout << "Computer choosed :" << l[m] << " " << p[m] << endl;
        m++;

        print(a, b, m);

        win();

        if (temp == -1)
        {
            cout << "Computer win\n";
            t++;
            break;
        }
        if (t == 0)
        {
            for (int i = 0; i < 9; i++)
            {
                if (box[i] != 0)
                    s++;
            }
        }
        if (s == 9)
        {
            cout << "No one wins\n";
            return 0;
        }
        s = 0;
    }
    cout << endl;
    return 0;
}

if(xi==2){
    cout<<"hi";
    return 0;
}

else{
    cout<<"Choose a valid option.";
}

}


void check(int a, int b)
{

    if ((a < 1 || a > 3) || (b < 1 || b > 3))
    {
        cout << "Invalid Input\n";
        main();
    }

    for (int i = 0; i < m; i++)
    {
        if (x[i] == a)
        {
            if (y[i] == b)
            {
                cout << "Position occupied by you\n";
                main();
            }
        }
        if (l[i] == a)
        {
            if (p[i] == b)
            {
                cout << "Position occupied by computer\n";
                main();
            }
        }
    }
}
