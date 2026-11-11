
/* ==== FUN_0045f650 @ 0045f650 ==== 
 * signature: undefined __thiscall FUN_0045f650(void * this, undefined4 param_1, short param_2, short param_3)
 * body: 0045f650-0045f700;0045f71f-0045f737
 */

void __thiscall FUN_0045f650(void *this,undefined4 param_1,short param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  short sVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_2c [8];
  undefined4 local_24;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045f70d;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc8;
  if (DAT_004dc57c == '\0') {
    iVar1 = *(int *)((int)this + 0xc4);
    iVar7 = 0;
    if (iVar1 != 0) {
      iVar7 = *(int *)(iVar1 + 0x2a);
    }
    piVar5 = (int *)0x0;
    puVar3 = &stack0xffffffc8;
    if (iVar1 != 0) {
      piVar5 = (int *)FUN_00410600(iVar1);
      puVar3 = local_14;
    }
    local_14 = puVar3;
    if ((piVar5 == (int *)0x0) || (iVar7 == 0)) {
      FUN_004a8882(this);
    }
    else {
      uVar2 = *(undefined4 *)(iVar7 + 0x44);
      local_24._0_2_ = (short)uVar2;
      sVar6 = param_2 - (short)local_24;
      local_24._2_2_ = (short)((uint)uVar2 >> 0x10);
      sVar4 = param_3 - local_24._2_2_;
      DAT_004db500 = sVar6;
      DAT_004db502 = sVar4;
      local_24 = uVar2;
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_2c);
      local_8 = 1;
      local_18 = CONCAT22(sVar4,sVar6);
      (**(code **)(*piVar5 + 0x104))(local_18,0);
      local_8 = 0xffffffff;
      FUN_0045f717();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


