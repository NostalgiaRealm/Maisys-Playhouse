
/* ==== FUN_00438a50 @ 00438a50 ==== 
 * signature: undefined4 __fastcall FUN_00438a50(int * param_1)
 * body: 00438a50-00438a71
 */

undefined4 __fastcall FUN_00438a50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    iVar2 = (*pcVar1)();
    uVar3 = FUN_00458a00(iVar2);
    return uVar3;
  }
  return 0;
}


