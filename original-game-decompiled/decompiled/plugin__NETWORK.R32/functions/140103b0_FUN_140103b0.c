
/* ==== FUN_140103b0 @ 140103b0 ==== 
 * signature: undefined4 __cdecl FUN_140103b0(undefined4 param_1, int param_2, int * param_3, short * param_4)
 * body: 140103b0-14010489
 */

undefined4 __cdecl FUN_140103b0(undefined4 param_1,int param_2,int *param_3,short *param_4)

{
  undefined1 *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short local_6;
  
  iVar4 = 0;
  if (param_3 != (int *)0x0) {
    iVar4 = *param_3;
  }
  if (iVar4 <= *(int *)(param_2 + 0x4c) + -2) {
    puVar1 = (undefined1 *)(*(int *)(param_2 + 0x50) + iVar4);
    sVar2 = CONCAT11(*puVar1,*(undefined1 *)(*(int *)(param_2 + 0x50) + 1 + iVar4));
    *param_4 = sVar2;
    uVar3 = ((uint)(byte)puVar1[2] << 0x10 | (uint)(byte)puVar1[4]) << 8 |
            (uint)(byte)puVar1[3] << 0x10 | (uint)(byte)puVar1[5];
    *(uint *)(param_4 + 1) = uVar3;
    *(undefined1 **)(param_4 + 3) = puVar1 + 6;
    if ((sVar2 < 0x32) || (0x3e < sVar2)) {
      sVar2 = 0;
      local_6 = 0;
    }
    else {
      local_6 = 2;
      sVar2 = CONCAT11(puVar1[uVar3 + 6],puVar1[uVar3 + 7]);
      param_4[5] = sVar2;
      *(undefined1 **)(param_4 + 6) = puVar1 + uVar3 + 8;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = (int)sVar2 + (int)local_6 + iVar4 + uVar3 + 6;
    }
    return 0;
  }
  return 0x10000;
}


