
/* ==== FUN_00479cb0 @ 00479cb0 ==== 
 * signature: undefined __thiscall FUN_00479cb0(void * this, void * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00479cb0-00479d82
 */

void __thiscall FUN_00479cb0(void *this,void *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined4 *unaff_EDI;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_24 [3];
  short local_16;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00479d83;
  *unaff_FS_OFFSET = &local_10;
  FUN_00486dd0(param_1,local_24,param_3,0x10);
  if (local_16 != 0) {
    piVar1 = (int *)FUN_00466a90(*(int *)((int)this + 0x26));
    iVar2 = (**(code **)(*piVar1 + 0x108))(2);
    *(int *)((int)this + 0x32) = iVar2;
    if (iVar2 == 0) {
      unaff_EDI = FUN_00412c20(0x56);
      local_8 = 0;
      puVar3 = (undefined4 *)0x0;
      local_14 = unaff_EDI;
      if (unaff_EDI != (undefined4 *)0x0) {
        puVar3 = FUN_00422bd0(unaff_EDI);
      }
      local_8 = 0xffffffff;
      *(undefined4 **)((int)this + 0x32) = puVar3;
      piVar1 = (int *)FUN_00466a90(*(int *)((int)this + 0x26));
      (**(code **)(*piVar1 + 0x100))(s_Author_Messages_004dcb20,2,*(undefined4 *)((int)this + 0x32))
      ;
    }
    uVar5 = (uint)unaff_EDI & 0xffff0000;
    if (0 < local_16) {
      do {
        FUN_00479c70(uVar5,param_1);
        sVar4 = (short)uVar5 + 1;
        uVar5 = CONCAT22((short)(uVar5 >> 0x10),sVar4);
      } while (sVar4 < local_16);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


