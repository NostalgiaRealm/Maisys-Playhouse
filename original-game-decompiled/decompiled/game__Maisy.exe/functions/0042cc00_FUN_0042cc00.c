
/* ==== FUN_0042cc00 @ 0042cc00 ==== 
 * signature: undefined4 __thiscall FUN_0042cc00(void * this, int param_1)
 * body: 0042cc00-0042cc45
 */

undefined4 __thiscall FUN_0042cc00(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)this;
  piVar2 = (int *)(**(code **)(iVar1 + 0x16c))();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*piVar2 + 0x1c0))();
  if (iVar3 < param_1) {
    return 0x40005;
  }
  uVar4 = (**(code **)(iVar1 + 0x1a8))(param_1);
  return uVar4;
}


