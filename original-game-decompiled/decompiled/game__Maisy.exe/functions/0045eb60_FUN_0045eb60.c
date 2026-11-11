
/* ==== FUN_0045eb60 @ 0045eb60 ==== 
 * signature: undefined4 __stdcall FUN_0045eb60(void * param_1, int * param_2, uint * param_3, undefined4 * param_4)
 * body: 0045eb60-0045ebcc
 */

undefined4 FUN_0045eb60(void *param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  void *this;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  
  uVar3 = *(undefined4 *)((int)param_3 + 6);
  piVar2 = param_2;
  puVar4 = param_3;
  this = (void *)FUN_00466a70((int)param_1);
  piVar2 = FUN_0044ebb0(this,(int)piVar2,uVar3,(int *)puVar4);
  *param_4 = piVar2;
  if (piVar2 == (int *)0x0) {
    uVar1 = *param_3;
    if (((uVar1 < 0x65) && (uVar1 != 0xffffffff)) && (uVar1 != 0x27)) {
      uVar3 = FUN_00466aa0(param_1,param_2,*(undefined4 *)((int)param_3 + 6),(int *)param_3);
      *param_4 = uVar3;
      return 0;
    }
    piVar2 = FUN_00466ac0(param_2,*(undefined4 *)((int)param_3 + 6),(int *)param_3);
    *param_4 = piVar2;
  }
  return 0;
}


