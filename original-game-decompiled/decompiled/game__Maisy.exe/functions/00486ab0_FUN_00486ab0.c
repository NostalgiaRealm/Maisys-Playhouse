
/* ==== FUN_00486ab0 @ 00486ab0 ==== 
 * signature: undefined __thiscall FUN_00486ab0(void * this, int param_1, char * param_2, undefined4 param_3)
 * body: 00486ab0-00486ada
 */

void __thiscall FUN_00486ab0(void *this,int param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  
  FUN_00484e50(this,param_1,param_3);
  pcVar1 = FUN_0043f650(param_2);
  *(char **)((int)this + 0x160) = pcVar1;
  return;
}


