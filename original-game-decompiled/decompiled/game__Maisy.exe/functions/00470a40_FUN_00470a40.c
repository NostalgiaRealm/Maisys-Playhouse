
/* ==== FUN_00470a40 @ 00470a40 ==== 
 * signature: undefined __thiscall FUN_00470a40(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00470a40-00470a92
 */

void __thiscall FUN_00470a40(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  if ((*(char **)(param_1 + 6) != (char *)0x0) && (**(char **)(param_1 + 6) != '\0')) {
    if (*(LPVOID *)((int)this + 0x9a) != (LPVOID)0x0) {
      FUN_0043ba20(*(LPVOID *)((int)this + 0x9a));
    }
    pcVar1 = FUN_0043b970(*(char **)(param_1 + 6));
    *(char **)((int)this + 0x9a) = pcVar1;
    *(undefined4 *)((int)this + 0xa2) = param_3;
    *(undefined4 *)((int)this + 0x9e) = param_2;
  }
  return;
}


