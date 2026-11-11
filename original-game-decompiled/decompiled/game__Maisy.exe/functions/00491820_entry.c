
/* ==== entry @ 00491820 ==== 
 * signature: undefined __stdcall entry(void)
 * body: 00491820-00491977
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  byte bVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  HMODULE pHVar5;
  UINT UVar6;
  byte *pbVar7;
  int unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  HINSTANCE__ *pHVar8;
  _STARTUPINFOA local_74;
  undefined1 *local_1c;
  undefined4 local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_004cd890;
  pcStack_10 = FUN_0049b880;
  *unaff_FS_OFFSET = &local_14;
  local_1c = &stack0xffffff80;
  DVar2 = GetVersion();
  _DAT_004de1b0 = DVar2 >> 8 & 0xff;
  DAT_004de1a4 = DVar2 >> 0x10;
  _DAT_004de1ac = DVar2 & 0xff;
  _DAT_004de1a8 = _DAT_004de1ac * 0x100 + _DAT_004de1b0;
  FUN_00494630();
  iVar3 = __mtinit();
  if (iVar3 == 0) {
    __amsg_exit(0x10);
  }
  local_8 = 0;
  FUN_0049b640();
  ___initmbctable();
  DAT_004e67a8 = (byte *)GetCommandLineA();
  DAT_004de184 = FUN_0049b4a0();
  if ((DAT_004de184 == (LPSTR)0x0) || (DAT_004e67a8 == (byte *)0x0)) {
    FUN_00491bf0(0xffffffff);
  }
  __setargv();
  FUN_0049af50();
  __cinit(unaff_EDI);
  bVar1 = *DAT_004e67a8;
  pbVar7 = DAT_004e67a8;
  if (bVar1 == 0x22) {
    pbVar7 = DAT_004e67a8 + 1;
    if (*pbVar7 != 0x22) {
      do {
        if (*pbVar7 == 0) break;
        iVar3 = __ismbblead((uint)*pbVar7);
        if (iVar3 != 0) {
          pbVar7 = pbVar7 + 1;
        }
        pbVar7 = pbVar7 + 1;
      } while (*pbVar7 != 0x22);
      if (*pbVar7 != 0x22) goto LAB_0049192a;
    }
    pbVar7 = pbVar7 + 1;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    }
  }
LAB_0049192a:
  bVar1 = *pbVar7;
  while ((bVar1 != 0 && (*pbVar7 < 0x21))) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  local_74.dwFlags = 0;
  GetStartupInfoA(&local_74);
  uVar4 = 10;
  if ((local_74.dwFlags & 1) != 0) {
    uVar4 = local_74._48_4_ & 0xffff;
  }
  pHVar8 = (HINSTANCE__ *)0x0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  UVar6 = _WinMain_16(pHVar5,pHVar8,(char *)pbVar7,uVar4);
  FUN_00491bf0(UVar6);
  *unaff_FS_OFFSET = local_14;
  return;
}


