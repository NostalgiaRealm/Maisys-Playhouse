
/* ==== FUN_0042c350 @ 0042c350 ==== 
 * signature: int * __fastcall FUN_0042c350(int * param_1)
 * body: 0042c350-0042c3a2
 */

int * __fastcall FUN_0042c350(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  short sVar4;
  
  piVar3 = (int *)0x0;
  if ((*(int *)((int)param_1 + 0x2a) != 0) && (param_1[1] != 0)) {
    iVar1 = FUN_00466a80(param_1[1]);
    if (iVar1 != 0) {
      sVar4 = *(short *)((int)param_1 + 0x36);
      pvVar2 = (void *)FUN_00466a80(param_1[1]);
      piVar3 = (int *)FUN_00450230(pvVar2,sVar4);
      return piVar3;
    }
  }
  pvVar2 = (void *)(**(code **)(*param_1 + 0x218))();
  if (pvVar2 != (void *)0x0) {
    piVar3 = FUN_004255a0(pvVar2,param_1);
  }
  return piVar3;
}


