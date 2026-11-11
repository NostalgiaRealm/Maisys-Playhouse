
/* ==== thunk_FUN_00438a50 @ 00438a80 ==== 
 * signature: undefined4 __fastcall thunk_FUN_00438a50(int * param_1)
 * body: 00438a80-00438a84
 * thunk to: FUN_00438a50
 */

undefined4 __fastcall thunk_FUN_00438a50(int *param_1)

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


