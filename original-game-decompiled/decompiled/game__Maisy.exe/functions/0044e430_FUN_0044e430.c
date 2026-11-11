
/* ==== FUN_0044e430 @ 0044e430 ==== 
 * signature: int * __thiscall FUN_0044e430(void * this, int * param_1)
 * body: 0044e430-0044e486
 */

int * __thiscall FUN_0044e430(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  
  piVar3 = (int *)0x0;
  pcVar1 = *(code **)(*param_1 + 0x178);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    pvVar4 = this;
    iVar2 = (*pcVar1)();
    piVar3 = FUN_0041be50(iVar2,(int)pvVar4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x120))(param_1);
      FUN_0044e650(this,piVar3);
    }
  }
  return piVar3;
}


