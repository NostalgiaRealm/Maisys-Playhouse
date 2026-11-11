
/* ==== FUN_0045b4d0 @ 0045b4d0 ==== 
 * signature: undefined __thiscall FUN_0045b4d0(void * this, int * param_1, undefined4 param_2)
 * body: 0045b4d0-0045b520
 */

void __thiscall FUN_0045b4d0(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  int local_14;
  byte local_e;
  
  if (DAT_004da378 != 0) {
    do {
      FUN_00486e50(param_1,&local_14);
      piVar1 = FUN_00466ac0(param_1,param_2,&local_14);
      if (piVar1 != (int *)0x0) {
        FUN_0045a810(this,piVar1);
      }
    } while ((local_e & 2) == 0);
  }
  return;
}


