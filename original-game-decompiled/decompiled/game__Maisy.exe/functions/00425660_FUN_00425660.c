
/* ==== FUN_00425660 @ 00425660 ==== 
 * signature: int * __fastcall FUN_00425660(int * param_1)
 * body: 00425660-004256f2
 */

int * __fastcall FUN_00425660(int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  short sVar5;
  int **ppiVar6;
  int *local_14 [4];
  
  if (DAT_004da3cc == '\0') {
    if (((*(int *)((int)param_1 + 0x2a) != 0) && (param_1[1] != 0)) &&
       (iVar2 = FUN_00466a80(param_1[1]), iVar2 != 0)) {
      sVar5 = *(short *)((int)param_1 + 0x36);
      ppiVar6 = local_14;
      pvVar3 = (void *)FUN_00466a80(param_1[1]);
      FUN_004505b0(pvVar3,sVar5,ppiVar6);
      return local_14[0];
    }
    pcVar1 = *(code **)(*param_1 + 0x218);
    piVar4 = (int *)(*pcVar1)();
    if (piVar4 != (int *)0x0) {
      while (*(int *)((int)piVar4 + 0x2a) == 0) {
        piVar4 = (int *)(**(code **)(*piVar4 + 0x218))();
        if (piVar4 == (int *)0x0) {
          return param_1;
        }
      }
      piVar4 = param_1;
      pvVar3 = (void *)(*pcVar1)();
      piVar4 = FUN_004255a0(pvVar3,piVar4);
      if (piVar4 != (int *)0x0) {
        return piVar4;
      }
    }
  }
  return param_1;
}


