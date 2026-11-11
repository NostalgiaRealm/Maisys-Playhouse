
/* ==== FUN_004a9389 @ 004a9389 ==== 
 * signature: undefined4 __thiscall FUN_004a9389(void * this, undefined4 param_1)
 * body: 004a9389-004a93a4
 */

undefined4 __thiscall FUN_004a9389(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bafe6();
  if (*(code **)(iVar1 + 4) != (code *)0x0) {
    (**(code **)(iVar1 + 4))(param_1,this);
  }
  return 0;
}


