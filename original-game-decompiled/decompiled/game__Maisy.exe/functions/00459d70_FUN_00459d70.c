
/* ==== FUN_00459d70 @ 00459d70 ==== 
 * signature: undefined4 __thiscall FUN_00459d70(void * this, undefined4 param_1)
 * body: 00459d70-00459d9f
 */

undefined4 __thiscall FUN_00459d70(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00458a00((int)this);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00458a00((int)this);
    uVar3 = (**(code **)(*piVar2 + 0xac))(param_1);
    return uVar3;
  }
  return 0;
}


