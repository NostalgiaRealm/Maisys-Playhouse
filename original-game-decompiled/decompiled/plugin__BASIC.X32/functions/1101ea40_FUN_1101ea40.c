
/* ==== FUN_1101ea40 @ 1101ea40 ==== 
 * signature: undefined4 __cdecl FUN_1101ea40(int param_1, int param_2, short param_3, short param_4, short param_5, short param_6, int param_7, int param_8, short param_9, short param_10, short param_11, short param_12, byte * param_13)
 * body: 1101ea40-1101ecdc
 */

undefined4 __cdecl
FUN_1101ea40(int param_1,int param_2,short param_3,short param_4,short param_5,short param_6,
            int param_7,int param_8,short param_9,short param_10,short param_11,short param_12,
            byte *param_13)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  int *piVar6;
  short local_74;
  short sStack_72;
  short local_70;
  short sStack_6e;
  RECT *local_6c;
  int local_68 [4];
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined2 local_48;
  HGLOBAL local_46;
  undefined4 local_42;
  int local_3c [4];
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 local_16;
  RECT local_10;
  
  local_6c = (RECT *)0x0;
  if (*(int *)(param_13 + 0xc) == -1) {
    return 1;
  }
  if ((((param_2 == 0) || (param_8 == 0)) || (param_1 == 0)) ||
     ((param_7 == 0 || (param_13 == (byte *)0x0)))) {
    return 0xffffffff;
  }
  GdiFlush();
  piVar6 = local_68;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  *(undefined2 *)piVar6 = 0;
  piVar6 = local_3c;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  *(undefined2 *)piVar6 = 0;
  local_68[1] = (int)param_11;
  local_68[2] = (int)param_12;
  local_54 = (int)param_9;
  local_50 = (int)param_10;
  local_3c[1] = (int)param_5;
  local_3c[2] = (int)param_6;
  local_28 = (int)param_3;
  local_24 = (int)param_4;
  local_1c = FUN_1101ecf0();
  local_20 = FUN_1101ece0(param_2);
  local_48 = FUN_1101ecf0();
  local_4c = FUN_1101ece0(param_8);
  local_42 = *(undefined4 *)(param_13 + 0x2c);
  local_16 = *(undefined4 *)(param_13 + 0x28);
  psVar2 = *(short **)(param_13 + 0x18);
  if (psVar2 == (short *)0x0) goto LAB_1101ebfc;
  sVar1 = *psVar2;
  psVar4 = (short *)0x0;
  if (sVar1 == 1) {
LAB_1101ebcb:
    psVar4 = psVar2 + 1;
  }
  else if (sVar1 == 2) {
    local_74 = (short)*(undefined4 *)(psVar2 + 0x14);
    sStack_72 = (short)((uint)*(undefined4 *)(psVar2 + 0x14) >> 0x10);
    local_70 = (short)*(undefined4 *)(psVar2 + 0x16);
    sStack_6e = (short)((uint)*(undefined4 *)(psVar2 + 0x16) >> 0x10);
    _local_74 = CONCAT22(sStack_72 + psVar2[0x13],local_74 + psVar2[0x12]);
    _local_70 = CONCAT22(sStack_6e + psVar2[0x13],local_70 + psVar2[0x12]);
    psVar4 = &local_74;
  }
  else if (sVar1 == 3) goto LAB_1101ebcb;
  if (psVar4 != (short *)0x0) {
    local_10.left = (int)*psVar4;
    local_10.right = (int)psVar4[2];
    local_10.bottom = (int)psVar4[3];
    local_6c = &local_10;
    local_10.top = (LONG)psVar4[1];
  }
LAB_1101ebfc:
  iVar3 = FUN_1101ed10(local_68,local_3c,param_7,param_1,local_6c);
  if (iVar3 == 0) {
    return 1;
  }
  if ((local_2c != local_58) &&
     (iVar3 = FUN_1101f100(local_68,(int)local_3c,(int)param_13), iVar3 == -1)) {
    return 0xffffffff;
  }
  if (local_58 == 8) {
    uVar5 = FUN_11008e70((int)local_68,(int)local_3c,param_13);
  }
  else if (local_58 == 0x10) {
    uVar5 = FUN_11025f50((int)local_68,(int)local_3c,(int)param_13);
  }
  else if (local_58 == 0x20) {
    uVar5 = FUN_1100ced0((int)local_68,(int)local_3c,(int)param_13);
  }
  else {
    uVar5 = 0xffffffff;
  }
  if (local_46 != (HGLOBAL)0x0) {
    GlobalUnlock(local_46);
    GlobalFree(local_46);
  }
  return uVar5;
}


