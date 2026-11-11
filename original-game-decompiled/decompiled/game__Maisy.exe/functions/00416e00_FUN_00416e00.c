
/* ==== FUN_00416e00 @ 00416e00 ==== 
 * signature: undefined __stdcall FUN_00416e00(void)
 * body: 00416e00-00416efa
 */

void FUN_00416e00(void)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_40;
  char local_3c [20];
  undefined4 local_28;
  char local_24 [14];
  undefined4 *local_16;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00416efb;
  *unaff_FS_OFFSET = &local_10;
  if (DAT_004d9e84 == (int *)0x0) {
    local_16 = FUN_00412c20(0x4a);
    local_8 = 0;
    piVar1 = (int *)0x0;
    if (local_16 != (undefined4 *)0x0) {
      piVar1 = FUN_0042f970(local_16,0x16,0,'\0',0,'\0');
    }
    local_8 = 0xffffffff;
    sVar3 = 0;
    DAT_004d9e84 = piVar1;
    if (0 < DAT_004dcf28) {
      do {
        iVar2 = (int)sVar3;
        sVar3 = sVar3 + 1;
        local_28 = (&DAT_004dce80)[iVar2 * 2];
        FUN_004374f0((&PTR_s_position_004dce84)[iVar2 * 2],local_24);
        FUN_00416f20((int)local_24);
        (**(code **)(*DAT_004d9e84 + 0xe8))(&local_28);
      } while (sVar3 < DAT_004dcf28);
    }
    local_40 = 0x18;
    FUN_004374f0(s_zedordinal_004d9e90,local_3c);
    (**(code **)(*DAT_004d9e84 + 0xe8))(&local_40);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


