
/* ==== FUN_0040a610 @ 0040a610 ==== 
 * signature: int __stdcall FUN_0040a610(void)
 * body: 0040a610-0040a789
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040a610(void)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  HANDLE hFile;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint in_stack_00001008;
  int in_stack_0000100c;
  
  FUN_0040a500();
  iVar7 = 0;
  if ((in_stack_00001008 < DAT_00413e00) &&
     ((*(byte *)((&DAT_00413d00)[(int)in_stack_00001008 >> 5] + 4 + (in_stack_00001008 & 0x1f) * 8)
      & 1) != 0)) {
    DVar1 = FUN_0040bd70(in_stack_00001008,0,1);
    if ((DVar1 != 0xffffffff) && (DVar2 = FUN_0040bd70(in_stack_00001008,0,2), DVar2 != 0xffffffff))
    {
      uVar8 = in_stack_0000100c - DVar2;
      if ((int)uVar8 < 1) {
        if ((int)uVar8 < 0) {
          FUN_0040bd70(in_stack_00001008,in_stack_0000100c,0);
          hFile = (HANDLE)FUN_0040b880(in_stack_00001008);
          BVar5 = SetEndOfFile(hFile);
          iVar7 = (BVar5 != 0) - 1;
          if (iVar7 == -1) {
            _DAT_00413464 = 0xd;
            DAT_00413468 = GetLastError();
          }
        }
        FUN_0040bd70(in_stack_00001008,DVar1,0);
        return iVar7;
      }
      puVar9 = (undefined4 *)register0x00000010;
      for (iVar6 = 0x400; puVar9 = puVar9 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
      }
      iVar6 = FUN_0040bcf0(in_stack_00001008,0x8000);
      while( true ) {
        uVar3 = 0x1000;
        if ((int)uVar8 < 0x1000) {
          uVar3 = uVar8;
        }
        iVar4 = FUN_0040bad0(in_stack_00001008,&stack0x00000004,uVar3);
        if (iVar4 == -1) break;
        uVar8 = uVar8 - iVar4;
        if ((int)uVar8 < 1) {
LAB_0040a6f1:
          FUN_0040bcf0(in_stack_00001008,iVar6);
          FUN_0040bd70(in_stack_00001008,DVar1,0);
          return iVar7;
        }
      }
      if (DAT_00413468 == 5) {
        _DAT_00413464 = 0xd;
      }
      iVar7 = -1;
      goto LAB_0040a6f1;
    }
  }
  else {
    _DAT_00413464 = 9;
  }
  return -1;
}


