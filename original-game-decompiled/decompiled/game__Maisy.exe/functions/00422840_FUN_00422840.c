
/* ==== FUN_00422840 @ 00422840 ==== 
 * signature: int __fastcall FUN_00422840(int * param_1)
 * body: 00422840-00422894
 */

int __fastcall FUN_00422840(int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *this;
  int *piVar3;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    local_14 = 3;
    iVar2 = FUN_0046ca60((int)param_1);
    local_10 = *(undefined4 *)(iVar2 + 0xc);
    local_c = param_1[3];
    local_8 = *(undefined4 *)((int)param_1 + 0x92);
    piVar3 = &local_14;
    this = (void *)(*pcVar1)();
    iVar2 = FUN_00459fc0(this,piVar3);
    return iVar2;
  }
  return 0;
}


