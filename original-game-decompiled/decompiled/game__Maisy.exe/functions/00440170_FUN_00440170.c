
/* ==== FUN_00440170 @ 00440170 ==== 
 * signature: undefined __fastcall FUN_00440170(int * param_1)
 * body: 00440170-004401b3
 */

void __fastcall FUN_00440170(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0043fd60((int)param_1);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x244);
    iVar2 = (*pcVar1)();
    if ((iVar2 != 0) && (iVar2 = (*pcVar1)(), *(int *)(iVar2 + 0x156) == 0x6e705453)) {
      return;
    }
    FUN_0043fd60((int)param_1);
    FUN_0048d522();
  }
  return;
}


