
/* ==== FUN_004389f0 @ 004389f0 ==== 
 * signature: int * __fastcall FUN_004389f0(int * param_1)
 * body: 004389f0-00438a1f
 */

int * __fastcall FUN_004389f0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  void *this;
  int *piVar5;
  
  iVar1 = *param_1;
  pcVar2 = *(code **)(iVar1 + 0x10);
  iVar4 = (*pcVar2)();
  if (iVar4 != 0) {
    sVar3 = (**(code **)(iVar1 + 0x274))();
    sVar3 = sVar3 + 1;
    this = (void *)(*pcVar2)();
    piVar5 = FUN_0045a920(this,sVar3);
    return piVar5;
  }
  return (int *)0x0;
}


