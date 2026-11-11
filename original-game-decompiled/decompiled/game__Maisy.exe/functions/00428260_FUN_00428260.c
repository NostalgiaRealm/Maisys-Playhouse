
/* ==== FUN_00428260 @ 00428260 ==== 
 * signature: undefined4 __fastcall FUN_00428260(int * param_1)
 * body: 00428260-00428341;00428364-00428378
 */

int __fastcall FUN_00428260(int *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_34 [20];
  int local_20;
  int *local_1c;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00428352;
  *unaff_FS_OFFSET = &local_10;
  local_15 = '\0';
  local_14 = &stack0xffffffc0;
  local_20 = *param_1;
  local_1c = param_1;
  iVar1 = (**(code **)(local_20 + 0xec))();
  if ((char)iVar1 != '\0') {
    iVar1 = local_1c[0x2f];
    piVar4 = local_1c + 0x2f;
    if (((iVar1 != 0) && (piVar6 = (int *)((int)local_1c + 0xee), *piVar6 != 0)) &&
       (piVar5 = (int *)((int)local_1c + 0xf2), *piVar5 < iVar1)) {
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_34);
      local_8 = 1;
      iVar1 = *piVar4 - *piVar5;
      if (DAT_004d9b68 <= *piVar4 - *piVar5) {
        iVar1 = DAT_004d9b68;
      }
      iVar2 = (**(code **)(local_20 + 0x21c))();
      FUN_0040e0e0(local_1c,*piVar5 + iVar2);
      iVar1 = FUN_0040e180(local_1c,(HPSTR)(*piVar5 + *piVar6),iVar1);
      *piVar5 = *piVar5 + iVar1;
      local_15 = '\x01';
      local_8 = 0xffffffff;
      iVar1 = FUN_0042835c();
    }
  }
  if (local_15 == '\0') {
    iVar1 = CONCAT22((short)((uint)iVar1 >> 0x10),2);
  }
  else {
    uVar3 = (ushort)((uint)local_1c >> 0x10);
    iVar1 = CONCAT22(uVar3,1);
    if (*(int *)((int)local_1c + 0xf2) < local_1c[0x2f]) {
      iVar1 = (uint)uVar3 << 0x10;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}


