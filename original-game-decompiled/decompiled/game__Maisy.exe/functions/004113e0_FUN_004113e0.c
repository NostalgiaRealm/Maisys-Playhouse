
/* ==== FUN_004113e0 @ 004113e0 ==== 
 * signature: undefined __thiscall FUN_004113e0(void * this, undefined2 param_1)
 * body: 004113e0-004114e0
 */

void __thiscall FUN_004113e0(void *this,undefined2 param_1)

{
  int *piVar1;
  int iVar2;
  SIZE_T SVar3;
  char cVar4;
  HGLOBAL hMem;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_28 [12];
  HPSTR local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004114ed;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffcc;
  piVar1 = (int *)((int)this + 0xb8);
  if ((*piVar1 != 0) || (*(short *)((int)this + 0xc0) < 1)) {
    iVar2 = *(int *)this;
    local_18 = this;
    (**(code **)(iVar2 + 0x114))();
    cVar4 = (**(code **)(iVar2 + 0xec))();
    if ((cVar4 != '\0') &&
       ((SVar3 = *(SIZE_T *)((int)local_18 + 0xbc), SVar3 != 0 && (*piVar1 == 0)))) {
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
      local_8 = 1;
      hMem = FUN_0043f770(SVar3);
      *piVar1 = (int)hMem;
      local_1c = GlobalLock(hMem);
      FUN_0040e0e0(local_18,*(LONG *)((int)local_18 + 0xfe));
      FUN_0040e180(local_18,local_1c,SVar3);
      GlobalUnlock((HGLOBAL)*piVar1);
      *(undefined2 *)((int)local_18 + 0x24) = param_1;
      (**(code **)(iVar2 + 0xc4))(0,param_1);
      *(undefined1 *)((int)local_18 + 0xf9) = 1;
      local_8 = 0xffffffff;
      FUN_004114f7();
      FUN_0040dfd0();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


