
/* ==== FUN_1100b970 @ 1100b970 ==== 
 * signature: undefined __cdecl FUN_1100b970(undefined4 param_1, undefined4 param_2, int param_3)
 * body: 1100b970-1100ba00
 */

void __cdecl FUN_1100b970(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short local_10;
  short sStack_e;
  short local_c;
  short local_8;
  short sStack_6;
  short local_4;
  short sStack_2;
  
  if ((*(int *)(param_3 + 0x2a) != 0) && (*(int *)(param_3 + 0x2e) != 0)) {
    uVar1 = **(undefined4 **)(param_3 + 0x1c);
    uVar2 = (*(undefined4 **)(param_3 + 0x1c))[1];
    uVar3 = **(undefined4 **)(param_3 + 0x14);
    uVar4 = (*(undefined4 **)(param_3 + 0x14))[1];
    sStack_e = (short)((uint)uVar3 >> 0x10);
    local_c = (short)uVar4;
    local_10 = (short)uVar3;
    sStack_6 = (short)((uint)uVar1 >> 0x10);
    sStack_2 = (short)((uint)uVar2 >> 0x10);
    local_4 = (short)uVar2;
    local_8 = (short)uVar1;
    FUN_1101ea40(*(int *)(param_3 + 0x2e),*(int *)(param_3 + 0x36),local_8,sStack_6,
                 local_4 - local_8,sStack_2 - sStack_6,*(int *)(param_3 + 0x2a),
                 *(int *)(param_3 + 0x32),local_10,sStack_e,local_c - local_10,
                 (short)((uint)uVar4 >> 0x10) - sStack_e,*(byte **)(param_3 + 0x3a));
  }
  return;
}


