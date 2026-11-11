
/* ==== FUN_0040afd0 @ 0040afd0 ==== 
 * signature: undefined __fastcall FUN_0040afd0(int * param_1)
 * body: 0040afd0-0040b026
 */

void __fastcall FUN_0040afd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  
  piVar1 = (int *)FUN_0040c620(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x78))(0xb,param_1,0);
  }
  if ((*(int *)((int)param_1 + 0x2a) != 0) && (param_1[1] != 0)) {
    iVar2 = FUN_00466a80(param_1[1]);
    if (iVar2 != 0) {
      piVar1 = param_1;
      this = (void *)FUN_00466a80(param_1[1]);
      FUN_004502a0(this,(int)piVar1);
    }
  }
  if (*(LPVOID *)((int)param_1 + 0x2e) != (LPVOID)0x0) {
    FUN_0043f6d0(*(LPVOID *)((int)param_1 + 0x2e));
  }
  FUN_00412db0(param_1);
  return;
}


