
/* ==== FUN_00407a20 @ 00407a20 ==== 
 * signature: undefined4 __thiscall FUN_00407a20(void * this, short param_1)
 * body: 00407a20-00407bfe;00407c2f-00407c9a
 */

uint __thiscall FUN_00407a20(void *this,short param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_34 [16];
  undefined4 local_24;
  code *local_20;
  int *local_1c;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00407c1d;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc0;
  local_1c = this;
  puVar2 = &stack0xffffffc0;
  if (DAT_004dae3c != 0) {
    FUN_00435660(DAT_004dae3c);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  local_20 = *(code **)(*local_1c + 0x10);
  iVar5 = (*local_20)();
  sVar4 = FUN_00458960(iVar5);
  uVar7 = CONCAT22(extraout_var,sVar4);
  if (sVar4 <= *(short *)((int)local_1c + 0x26)) {
    if ((char)local_1c[0x29] != '\0') {
      cVar3 = (**(code **)(**(int **)((int)local_1c + 0x2a) + 0x104))();
      if (cVar3 == '\0') {
        iVar5 = (*local_20)();
        sVar4 = FUN_00458960(iVar5);
        if (((sVar4 == 0) && (param_1 == 0)) &&
           ((local_1c[0x46] != 0 || ((local_1c[0x47] != 0 || (local_1c[0x49] != 0)))))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_34);
        local_8 = 1;
        iVar5 = (*local_20)();
        FUN_00458970(iVar5);
        FUN_004106a0(*(int *)((int)local_1c + 0x8e));
        if (((int *)local_1c[0x4d] != (int *)0x0) && (DAT_004dcf98 != '\0')) {
          (**(code **)(*(int *)local_1c[0x4d] + 0x458))();
        }
        piVar8 = (int *)((int)local_1c + 0x9e);
        if (*piVar8 != 0) {
          FUN_00405f90(local_1c);
        }
        if ((*(int *)((int)local_1c + 0x9a) != 0) && (*piVar8 != *(int *)((int)local_1c + 0x9a))) {
          FUN_00406000(local_1c);
        }
        if ((short)local_1c[0x10] == 2) {
          *(undefined4 *)((int)local_1c + 0x46) = *(undefined4 *)((int)local_1c + 0x42);
          *(undefined4 *)((int)local_1c + 0x42) = 0;
        }
        FUN_004060e0((int)local_1c);
        if (local_1c[0x4b] != 0) {
          FUN_00408460((int)local_1c);
          FUN_0043c730((short *)&local_24);
          FUN_00404120(local_1c,local_24);
        }
        FUN_004052a0((int)local_1c);
        FUN_00402030((int)local_1c);
        FUN_00404450(local_1c,param_1);
        FUN_00407970(local_1c);
        FUN_00406120((int)local_1c);
        FUN_00403640((int)local_1c);
        if (bVar1) {
          FUN_00404fd0(local_1c);
        }
        local_8 = 0xffffffff;
        FUN_00407c27();
        iVar5 = (*local_20)();
        uVar6 = FUN_00458980(iVar5);
        uVar7 = CONCAT31((int3)((uint)uVar6 >> 8),1);
        goto LAB_00407c88;
      }
    }
    FUN_004106a0(*(int *)((int)local_1c + 0x8e));
    FUN_00405f30((int)local_1c);
    FUN_004060e0((int)local_1c);
    FUN_00402030((int)local_1c);
    FUN_00404450(local_1c,param_1);
    FUN_00407970(local_1c);
    FUN_00406120((int)local_1c);
    FUN_00403640((int)local_1c);
    iVar5 = (*local_20)();
    uVar7 = FUN_00458950(iVar5);
  }
  uVar7 = uVar7 & 0xffffff00;
LAB_00407c88:
  *unaff_FS_OFFSET = local_10;
  return uVar7;
}


