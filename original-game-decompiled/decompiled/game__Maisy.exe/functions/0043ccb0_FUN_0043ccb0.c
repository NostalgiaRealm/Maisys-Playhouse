
/* ==== FUN_0043ccb0 @ 0043ccb0 ==== 
 * signature: short __cdecl FUN_0043ccb0(int * param_1)
 * body: 0043ccb0-0043ce1e
 */

short __cdecl FUN_0043ccb0(int *param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *unaff_FS_OFFSET;
  int local_1c;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043ce1f;
  *unaff_FS_OFFSET = &local_10;
  local_14 = (undefined4 *)FUN_004a5fed(0xe);
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    *local_14 = &PTR_FUN_004be070;
  }
  local_8 = 0xffffffff;
  FUN_00430500(local_14,0);
  iVar8 = 1;
  FUN_0043ca10(param_1,local_14);
  sVar1 = *(short *)(local_14 + 3);
  iVar7 = (int)sVar1;
  if (0 < iVar7) {
    do {
      iVar4 = FUN_004308b0(local_14,(short)iVar8);
      if ((*(uint *)(iVar4 + 0x26) & 0x10000000) != 0) break;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar7);
  }
  iVar4 = iVar7;
  if (iVar8 <= iVar7) {
    do {
      iVar5 = FUN_004308b0(local_14,(short)iVar4);
      if ((*(uint *)(iVar5 + 0x26) & 0x10000000) != 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar8 <= iVar4);
    if (iVar8 < iVar4) {
      iVar5 = 0;
      piVar6 = (int *)FUN_004308b0(local_14,(short)iVar8);
      sVar3 = (**(code **)(*piVar6 + 0x27c))();
      local_1c = (int)sVar3;
      while (iVar8 = iVar8 + 1, iVar8 <= iVar4) {
        local_1c = local_1c + 1;
        piVar6 = (int *)FUN_004308b0(local_14,(short)iVar8);
        iVar2 = *piVar6;
        sVar3 = (**(code **)(iVar2 + 0x27c))();
        iVar5 = sVar3 - local_1c;
        if (iVar5 != 0) {
          (**(code **)(iVar2 + 0x278))(local_1c);
        }
      }
      if (iVar5 != 0) {
        while (iVar4 = iVar4 + 1, iVar4 <= iVar7) {
          piVar6 = (int *)FUN_004308b0(local_14,(short)iVar4);
          sVar3 = (**(code **)(*piVar6 + 0x27c))();
          (**(code **)(*piVar6 + 0x278))(sVar3 - (short)iVar5);
        }
      }
    }
  }
  FUN_00430540(local_14);
  *unaff_FS_OFFSET = local_10;
  return sVar1;
}


