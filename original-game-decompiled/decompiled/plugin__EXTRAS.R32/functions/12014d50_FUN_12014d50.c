
/* ==== FUN_12014d50 @ 12014d50 ==== 
 * signature: uint __cdecl FUN_12014d50(int param_1, undefined2 * param_2)
 * body: 12014d50-12014e02
 */

uint __cdecl FUN_12014d50(int param_1,undefined2 *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int local_1c;
  undefined4 local_18;
  short local_14 [3];
  undefined4 uStack_e;
  undefined4 uStack_a;
  int local_6;
  
  iVar3 = -1;
  local_18 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = 0;
  while( true ) {
    iVar3 = iVar3 + 1;
    uVar1 = FUN_12014640(param_1,local_14);
    if (uVar1 != 0) break;
    if (local_6 != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_1c);
      DAT_12039a9c = (*pcVar2)(local_1c,local_6);
      local_6 = 0;
      uStack_e = 0;
      uStack_a = 0;
    }
  }
  if (uVar1 == 0xa0006) {
    uVar1 = 0;
  }
  *param_2 = 1;
  *(int *)(param_2 + 1) = iVar3;
  if (uVar1 != 0) {
    *(undefined4 *)(param_2 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = local_18;
  return uVar1;
}


