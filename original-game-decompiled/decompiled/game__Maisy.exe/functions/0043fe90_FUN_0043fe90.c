
/* ==== FUN_0043fe90 @ 0043fe90 ==== 
 * signature: undefined __fastcall FUN_0043fe90(int * param_1)
 * body: 0043fe90-0043ff09
 */

void __fastcall FUN_0043fe90(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x244);
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    iVar3 = (*pcVar1)();
    if (*(int *)(iVar3 + 0x156) == 0x6e705453) {
      return;
    }
    iVar3 = (*pcVar1)();
    if (*(int *)(iVar3 + 0x156) == 0x616e7473) {
      return;
    }
  }
  iVar3 = FUN_00441580(param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_00441580(param_1);
    param_1[0x27] = iVar3;
  }
  cVar2 = FUN_00440230(param_1,0x800);
  if (cVar2 == '\0') {
    FUN_0043fe00(param_1);
  }
  FUN_004401e0(param_1,2,'\x01');
  FUN_00440140((int)param_1);
  return;
}


