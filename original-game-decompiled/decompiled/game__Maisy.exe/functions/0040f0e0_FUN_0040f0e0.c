
/* ==== FUN_0040f0e0 @ 0040f0e0 ==== 
 * signature: undefined __thiscall FUN_0040f0e0(void * this, char * param_1)
 * body: 0040f0e0-0040f113
 */

void __thiscall FUN_0040f0e0(void *this,char *param_1)

{
  char *pcVar1;
  
  if (*(LPVOID *)((int)this + 0xc0) != (LPVOID)0x0) {
    FUN_0043f6d0(*(LPVOID *)((int)this + 0xc0));
  }
  if (param_1 != (char *)0x0) {
    pcVar1 = FUN_0043f650(param_1);
    *(char **)((int)this + 0xc0) = pcVar1;
  }
  return;
}


