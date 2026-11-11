
/* ==== FUN_0042de70 @ 0042de70 ==== 
 * signature: int * __fastcall FUN_0042de70(int * param_1)
 * body: 0042de70-0042de93
 */

int * __fastcall FUN_0042de70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *this;
  int *piVar3;
  short sVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    sVar4 = 0;
    this = (void *)(*pcVar1)();
    piVar3 = FUN_0045a920(this,sVar4);
    return piVar3;
  }
  return (int *)0x0;
}


