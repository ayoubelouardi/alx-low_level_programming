void _init()
{
    if (true)
        return;
    __gmon_start__(); /* do not return */
}

long long sub_4004a0()
{
    void* v0;  // [bp-0x8]

    v0 = 0;
}

long long _start()
{
    unsigned long v0;  // [bp+0x0], Other Possible Types: char
    char v1;  // [bp+0x8]
    unsigned long long v2;  // rsi
    unsigned long v3;  // rax

    v2 = *((long long *)&v0);
    v0 = v3;
    __libc_start_main(main, v2, &v1, __libc_csu_init, __libc_csu_fini); /* do not return */
}

// No decompilation output for function sub_400529

void deregister_tm_clones()
{
    char v0;  // [bp-0x8]
    unsigned long long v2;  // rbp

    v2 = &v0;
    if (true)
    {
        return;
    }
    else if (!(false))
    {
        return;
    }
}

long long register_tm_clones()
{
    if (true)
    {
        return 0;
    }
    else if (!(false))
    {
        return 0;
    }
}

extern char completed.7585;

long long __do_global_dtors_aux()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (!completed.7585)
    {
        *((int *)&v0) = rbp<8>;
        v2 = deregister_tm_clones();
        completed.7585 = 1;
        return v2;
    }
    return v2;
}

extern unsigned long long __JCR_END__;

long long frame_dummy()
{
    unsigned long v0;  // [bp-0x8]

    if (!__JCR_END__)
    {
        return register_tm_clones();
    }
    else if (false)
    {
        *((int *)&v0) = rbp<8>;
        0();
        return register_tm_clones();
    }
    else
    {
        return register_tm_clones();
    }
}

int check_password(char *a0)
{
    char v0;  // [bp-0xe]
    char v1;  // [bp-0xd]
    unsigned int v2;  // [bp-0xc]

    if (strlen(a0) != 4)
        return 0;
    v2 = 74215240;
    v1 = 255;
    for (v0 = 0; v0 <= 3; v0 += 1)
    {
        if (a0[v0] != (v1 & (unsigned int)(v2 >> (v0 << 3 & 31))))
            return 0;
    }
    return 1;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char *field_8;
} struct_0;

extern FILE_t *stderr;

int main(unsigned long a0, struct_0 *a1)
{
    unsigned int v0;  // [bp-0xc]

    if ((unsigned int)a0 != 2)
    {
        fprintf(stderr, "Usage: %s password\n", (unsigned int)a1->field_0);
        return 1;
    }
    v0 = check_password(a1->field_8);
    if (v0 == 1)
    {
        puts("Congratulations!");
        return 0;
    }
    puts("ko");
    return 1;
}

long long __libc_csu_init(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v1;  // rax, Other Possible Types: unsigned long long
    struct struct_0 **v2;  // rbx, Other Possible Types: unsigned long

    v1 = _init();
    if (false)
        return v1;
    v2 = 0;
    do
    {
        v1 = *((long long *)&(&__init_array_start)[8 * v2])(a0, a1, a2);
        v2 += 1;
    } while (v2 != 1);
    return v1;
}

long long __libc_csu_fini()
{
    unsigned long v1;  // rax

    return v1;
}

long long _fini()
{
    unsigned long v1;  // rax

    return v1;
}


