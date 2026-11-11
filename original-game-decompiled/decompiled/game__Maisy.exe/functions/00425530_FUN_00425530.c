
/* ==== FUN_00425530 @ 00425530 ==== 
 * signature: undefined __fastcall FUN_00425530(int * param_1)
 * body: 00425530-00425578
 */

void __fastcall FUN_00425530(int *param_1)

{
  char cVar1;
  int iVar2;
  void *this;
  int *piVar3;
  
  if ((*(int *)((int)param_1 + 0x2a) != 0) && (param_1[1] != 0)) {
    iVar2 = FUN_00466a80(param_1[1]);
    if (iVar2 != 0) {
      piVar3 = param_1;
      this = (void *)FUN_00466a80(param_1[1]);
      FUN_004510f0(this,piVar3);
    }
  }
  if (*(int **)((int)param_1 + 0x42) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)((int)param_1 + 0x42) + 0x160))();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)((int)param_1 + 0x42) + 0x2ac))();
    }
  }
  return;
}


