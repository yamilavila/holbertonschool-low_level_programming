Learning Objectives

-------------------
General

    What is recursion
    How to implement recursion
    In what situations you should implement recursion
    In what situations you shouldn`t implement recursion


Question #0

What does this code print?

void print(int nb)
{
    printf("%d", nb);
    nb --;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(2);
    return (0);
}

    012

    12

   * 21

    210

Question #1

What does this code print?

void print(int nb)
{
    printf("%d", nb);
    -- nb;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}

   * 4321

    43210

    321

    3210

Question #2

What does this code print?

void print(int nb)
{
    printf("%d", nb);
    nb ++;
    if (nb < 10) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}

    987654

    109876543

    345678910

   * 456789

Question #3

What does this code print?

void print(int nb)
{
    if (nb < 0) 
    {
        return;
    }
    printf("%d", nb);
    nb --;
    print(nb);
}

int main(void)
{
    print(4);
    return (0);
}

    01234

   * 43210

    1234

    4321

Question #4

What does this code print?

int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d", nb + print(nb - 1));
    nb --;
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}

    64200

   * 00246

    01234568

