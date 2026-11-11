
/* ==== FUN_0045b490 @ 0045b490 ==== 
 * signature: undefined __thiscall FUN_0045b490(void * this, undefined4 param_1, undefined4 param_2)
 * body: 0045b490-0045b4c0
 */

void __thiscall FUN_0045b490(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = (int *)FUN_0045a800((int)this); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x3e)) {
    (**(code **)(*piVar1 + 0xb8))(param_1,param_2);
  }
  return;
}


