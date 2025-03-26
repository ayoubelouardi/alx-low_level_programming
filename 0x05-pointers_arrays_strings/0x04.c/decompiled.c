#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00400420(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1,auStack_8)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x004004b5)
// WARNING: Removing unreachable block (ram,0x004004bf)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00400503)
// WARNING: Removing unreachable block (ram,0x0040050d)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7585 == '\0') {
    deregister_tm_clones();
    completed_7585 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0040055a)
// WARNING: Removing unreachable block (ram,0x00400550)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



long checksum(char *param_1)

{
  char *local_20;
  long local_10;
  
  local_10 = 0;
  for (local_20 = param_1; *local_20 != '\0'; local_20 = local_20 + 1) {
    local_10 = local_10 + *local_20;
  }
  return local_10;
}



undefined8 main(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 2) {
    lVar2 = checksum(param_2[1]);
    if (lVar2 == 0xad4) {
      puts("\a\a\aTada! Congrats");
      uVar1 = 0;
    }
    else {
      puts("Wrong password");
      uVar1 = 1;
    }
  }
  else {
    printf("Usage: %s password\n",*param_2);
    uVar1 = 1;
  }
  return uVar1;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}




