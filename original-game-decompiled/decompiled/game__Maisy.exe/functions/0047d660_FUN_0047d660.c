
/* ==== FUN_0047d660 @ 0047d660 ==== 
 * signature: LPVOID __fastcall FUN_0047d660(int * param_1)
 * body: 0047d660-0047d762;0047d7aa-0047d7bc
 */

LPVOID __fastcall FUN_0047d660(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  SIZE_T SVar4;
  HLOCAL pvVar5;
  HPSTR pcVar6;
  LPVOID pvVar7;
  int *piVar8;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_30 [20];
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0047d798;
  *unaff_FS_OFFSET = &local_10;
  local_1c = param_1 + 0x2e;
  local_14 = &stack0xffffffc4;
  local_18 = param_1;
  puVar2 = &stack0xffffffc4;
  if (*local_1c == 0) {
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
    local_8 = 1;
    iVar1 = *local_18;
    cVar3 = (**(code **)(iVar1 + 0xec))();
    if (((cVar3 != '\0') && ((*(byte *)((int)local_18 + 0x6a) & 0x20) == 0)) &&
       ((*(byte *)((int)local_18 + 0x6b) & 2) == 0)) {
      SVar4 = (**(code **)(iVar1 + 0x1b4))();
      pvVar5 = FUN_0043f6f0(SVar4);
      *local_1c = (int)pvVar5;
      if (*local_1c == 0) {
        FUN_004a3538();
      }
      piVar8 = local_18 + 0x1d;
      FUN_0040e0e0(local_18,*piVar8);
      pcVar6 = LocalLock((HLOCAL)*local_1c);
      FUN_0040e0e0(local_18,*piVar8);
      FUN_0040e180(local_18,pcVar6,SVar4);
      LocalUnlock((HLOCAL)*local_1c);
      local_18[0x2f] = SVar4;
    }
    local_8 = 0xffffffff;
    FUN_0047d7a2();
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if ((HLOCAL)*local_1c == (HLOCAL)0x0) {
    pvVar7 = (LPVOID)0x0;
  }
  else {
    pvVar7 = LocalLock((HLOCAL)*local_1c);
    (**(code **)(*local_18 + 0x160))(5,1);
  }
  *unaff_FS_OFFSET = local_10;
  return pvVar7;
}


