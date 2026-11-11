
/* ==== entry @ 0040ae40 ==== 
 * signature: undefined __stdcall entry(void)
 * body: 0040ae40-0040af89;0040afc6-0040afd4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  byte bVar1;
  DWORD DVar2;
  int iVar3;
  HMODULE pHVar4;
  UINT UVar5;
  byte *pbVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  byte *pbVar7;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0040e328;
  pcStack_10 = FUN_0040d4e8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &local_14;
  DVar2 = GetVersion();
  _DAT_0041347c = DVar2 >> 8 & 0xff;
  _DAT_00413478 = DVar2 & 0xff;
  _DAT_00413474 = _DAT_00413478 * 0x100 + _DAT_0041347c;
  _DAT_00413470 = DVar2 >> 0x10;
  iVar3 = FUN_0040c0b0();
  if (iVar3 == 0) {
    FUN_0040b010(0x1c);
  }
  local_8 = 0;
  FUN_0040b8d0();
  FUN_0040d3e0();
  DAT_00413e10 = (byte *)GetCommandLineA();
  DAT_00413428 = FUN_0040cda0();
  if ((DAT_00413428 == (LPSTR)0x0) || (DAT_00413e10 == (byte *)0x0)) {
    FUN_0040b560(0xffffffff);
  }
  FUN_0040caf0();
  FUN_0040ca00();
  FUN_0040b530();
  pbVar6 = DAT_00413e10;
  if (*DAT_00413e10 == 0x22) {
    while( true ) {
      pbVar7 = pbVar6;
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar6;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar3 = FUN_0040c9a0((uint)bVar1);
      if (iVar3 != 0) {
        pbVar6 = pbVar7 + 2;
      }
    }
    if (*pbVar6 == 0x22) {
      pbVar6 = pbVar7 + 2;
    }
  }
  else {
    for (; 0x20 < *pbVar6; pbVar6 = pbVar6 + 1) {
    }
  }
  for (; (*pbVar6 != 0 && (*pbVar6 < 0x21)); pbVar6 = pbVar6 + 1) {
  }
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  iVar3 = 0;
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  UVar5 = FUN_00401000(pHVar4,iVar3,(char *)pbVar6);
  FUN_0040b560(UVar5);
  ExceptionList = local_14;
  return;
}


