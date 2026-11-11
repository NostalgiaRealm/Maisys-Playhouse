
/* ==== FUN_0046e330 @ 0046e330 ==== 
 * signature: undefined4 __thiscall FUN_0046e330(void * this, undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0046e330-0046e3c6
 */

undefined4 __thiscall
FUN_0046e330(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 local_108 [64];
  int local_8;
  
  FUN_00437520(local_108,param_1);
  iVar2 = (**(code **)(*(int *)this + 0x108))(local_108);
  if (iVar2 != 0) {
    iVar3 = FUN_00430190((int)this);
    piVar1 = (int *)(iVar3 + -4 + iVar2 * 8);
    if (*piVar1 != 0) {
      pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x3c),1,0,&local_8);
      DAT_004e34cc = (*pcVar4)(local_8,0,*piVar1,param_3);
      return 0;
    }
    FUN_004301f0((int)this);
  }
  return 0x10000;
}


