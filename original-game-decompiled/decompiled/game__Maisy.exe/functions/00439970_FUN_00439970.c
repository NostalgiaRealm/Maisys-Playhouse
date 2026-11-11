
/* ==== FUN_00439970 @ 00439970 ==== 
 * signature: undefined4 __cdecl FUN_00439970(int param_1, int param_2, short param_3, short param_4, short param_5, short param_6, int param_7, int param_8, short param_9, short param_10, short param_11, short param_12, byte * param_13)
 * body: 00439970-00439b9d
 */

undefined4 __cdecl
FUN_00439970(int param_1,int param_2,short param_3,short param_4,short param_5,short param_6,
            int param_7,int param_8,short param_9,short param_10,short param_11,short param_12,
            byte *param_13)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  int *piVar6;
  RECT local_78;
  int local_68 [4];
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined4 local_42;
  int local_3c [4];
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined2 local_1c;
  HGLOBAL local_1a;
  undefined4 local_16;
  RECT *local_10;
  short local_c;
  short sStack_a;
  short local_8;
  short sStack_6;
  
  local_10 = (RECT *)0x0;
  if (*(int *)(param_13 + 0xc) == -1) {
    return 1;
  }
  if ((((param_2 == 0) || (param_8 == 0)) || (param_1 == 0)) ||
     ((param_7 == 0 || (param_13 == (byte *)0x0)))) {
    return 0xffffffff;
  }
  GdiFlush();
  piVar6 = local_3c;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  *(undefined2 *)piVar6 = 0;
  piVar6 = local_68;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  *(undefined2 *)piVar6 = 0;
  local_3c[1] = (int)param_11;
  local_3c[2] = (int)param_12;
  local_28 = (int)param_9;
  local_24 = (int)param_10;
  local_68[1] = (int)param_5;
  local_68[2] = (int)param_6;
  local_54 = (int)param_3;
  local_50 = (int)param_4;
  local_48 = FUN_00439bb0();
  local_4c = FUN_00439ba0(param_2);
  local_1c = FUN_00439bb0();
  local_20 = FUN_00439ba0(param_8);
  local_16 = *(undefined4 *)(param_13 + 0x2c);
  local_42 = *(undefined4 *)(param_13 + 0x28);
  psVar2 = *(short **)(param_13 + 0x18);
  if (psVar2 == (short *)0x0) goto LAB_00439ad9;
  sVar1 = *psVar2;
  psVar4 = (short *)0x0;
  if (sVar1 == 1) {
LAB_00439ab1:
    psVar4 = psVar2 + 1;
  }
  else if (sVar1 == 2) {
    local_c = (short)*(undefined4 *)(psVar2 + 0x14);
    sStack_a = (short)((uint)*(undefined4 *)(psVar2 + 0x14) >> 0x10);
    local_8 = (short)*(undefined4 *)(psVar2 + 0x16);
    sStack_6 = (short)((uint)*(undefined4 *)(psVar2 + 0x16) >> 0x10);
    _local_c = CONCAT22(sStack_a + psVar2[0x13],local_c + psVar2[0x12]);
    _local_8 = CONCAT22(sStack_6 + psVar2[0x13],local_8 + psVar2[0x12]);
    psVar4 = &local_c;
  }
  else if (sVar1 == 3) goto LAB_00439ab1;
  if (psVar4 != (short *)0x0) {
    local_78.left = (LONG)*psVar4;
    local_78.right = (LONG)psVar4[2];
    local_10 = &local_78;
    local_78.bottom = (LONG)psVar4[3];
    local_78.top = (LONG)psVar4[1];
  }
LAB_00439ad9:
  iVar3 = FUN_00439bd0(local_3c,local_68,param_7,param_1,local_10);
  if (iVar3 == 0) {
    return 1;
  }
  if ((local_58 != local_2c) &&
     (iVar3 = FUN_00439f40(local_3c,(int)local_68,(int)param_13), iVar3 == -1)) {
    return 0xffffffff;
  }
  if (local_2c == 8) {
    uVar5 = FUN_00465610((int)local_3c,(int)local_68,param_13);
  }
  else if (local_2c == 0x10) {
    uVar5 = FUN_004689a0((int)local_3c,(int)local_68,(int)param_13);
  }
  else if (local_2c == 0x20) {
    uVar5 = FUN_0040e440((int)local_3c,(int)local_68,(int)param_13);
  }
  else {
    uVar5 = 0xffffffff;
  }
  if (local_1a != (HGLOBAL)0x0) {
    GlobalUnlock(local_1a);
    GlobalFree(local_1a);
  }
  return uVar5;
}


