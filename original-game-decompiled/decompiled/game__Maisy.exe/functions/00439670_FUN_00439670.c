
/* ==== FUN_00439670 @ 00439670 ==== 
 * signature: undefined4 __thiscall FUN_00439670(void * this, int param_1, int * param_2)
 * body: 00439670-0043969f
 */

undefined4 __thiscall FUN_00439670(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = FUN_004396f0(this,param_1);
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1 + 3;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *piVar3;
      piVar3 = piVar3 + 1;
      param_2 = param_2 + 1;
    }
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  return 0;
}


