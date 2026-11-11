
/* ==== FUN_0042c980 @ 0042c980 ==== 
 * signature: undefined __fastcall FUN_0042c980(int * param_1)
 * body: 0042c980-0042c9cb
 */

void __fastcall FUN_0042c980(int *param_1)

{
  int iVar1;
  void *this;
  
  if (((*(int **)((int)param_1 + 0x3a) != (int *)0x0) &&
      (iVar1 = FUN_0040c620(*(int **)((int)param_1 + 0x3a)), iVar1 != 0)) &&
     (iVar1 = FUN_0040c620(*(int **)((int)param_1 + 0x3a)), *(char *)(iVar1 + 0xa4) != '\0')) {
    return;
  }
  if (((*(int *)((int)param_1 + 0x2a) != 0) && (param_1[1] != 0)) &&
     (iVar1 = FUN_00466a80(param_1[1]), iVar1 != 0)) {
    this = (void *)FUN_00466a80(param_1[1]);
    FUN_004510f0(this,param_1);
  }
  return;
}


