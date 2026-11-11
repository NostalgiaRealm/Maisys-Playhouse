
/* ==== FUN_00426840 @ 00426840 ==== 
 * signature: uint __cdecl FUN_00426840(uint param_1, int param_2)
 * body: 00426840-004268bf;004268d7-004268f6
 */

uint __cdecl FUN_00426840(uint param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004268c0;
  *unaff_FS_OFFSET = &local_10;
  piVar1 = (int *)(param_1 + 0x1e);
  if ((*piVar1 == 0) ||
     (pbVar2 = (byte *)(param_1 + 3), param_1 = CONCAT31((int3)(param_1 >> 8),1),
     (*pbVar2 & 0x80) == 0)) {
    param_1 = param_1 & 0xffffff00;
  }
  if (((char)param_1 != '\0') && (*piVar1 == 0x2e524c45)) {
    if (*(int *)(param_2 + 6) == 0) {
      iVar3 = FUN_004a5fed(0x56);
      local_8 = 0;
      param_1 = 0;
      if (iVar3 != 0) {
        param_1 = FUN_00428d40(iVar3);
      }
      *(uint *)(param_2 + 6) = param_1;
    }
    else {
      param_1 = FUN_00429390();
    }
  }
  *unaff_FS_OFFSET = local_10;
  *(undefined1 *)(param_2 + 10) = 1;
  *(undefined2 *)(param_2 + 4) = 0xffff;
  return param_1 & 0xffff0000;
}


