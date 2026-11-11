
/* ==== FUN_0045d770 @ 0045d770 ==== 
 * signature: undefined4 __fastcall FUN_0045d770(int param_1)
 * body: 0045d770-0045d82f
 */

undefined4 __fastcall FUN_0045d770(int param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  short sVar5;
  char cVar6;
  char cVar7;
  undefined1 local_12c [256];
  AFX_EXCEPTION_LINK local_2c [12];
  int *local_20;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045d83c;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xfffffec8;
  piVar1 = (int *)(param_1 + 0x26);
  FUN_00458a00(*piVar1);
  FUN_0045d6a0();
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_2c);
  iVar4 = 1;
  local_8 = 1;
  iVar2 = FUN_00466a70(*piVar1);
  local_18 = FUN_0044e340(iVar2);
  if (0 < local_18) {
    do {
      cVar7 = '\x01';
      cVar6 = '\x01';
      sVar5 = 0;
      iVar2 = iVar4;
      this = (void *)FUN_00466a70(*piVar1);
      piVar3 = FUN_0044db20(this,iVar2,sVar5,cVar6,cVar7);
      local_20 = piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x70))(local_12c);
        (**(code **)(*piVar3 + 0x1c))(1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= local_18);
  }
  local_8 = 0xffffffff;
  FUN_0045d846();
  *unaff_FS_OFFSET = local_10;
  return 0;
}


