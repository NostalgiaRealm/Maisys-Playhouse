
/* ==== FUN_0040a7b0 @ 0040a7b0 ==== 
 * signature: uint __cdecl FUN_0040a7b0(LPCSTR param_1, uint param_2, uint param_3, undefined4 param_4)
 * body: 0040a7b0-0040ab1b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0040a7b0(LPCSTR param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  HANDLE hFile;
  int iVar2;
  DWORD DVar3;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  int iVar4;
  bool bVar5;
  byte local_11;
  uint local_10;
  _SECURITY_ATTRIBUTES local_c;
  
  bVar5 = (param_2 & 0x80) == 0;
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar5) {
    local_11 = 0;
  }
  else {
    local_11 = 0x10;
  }
  local_c.bInheritHandle = (BOOL)bVar5;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_004134b0 != 0x8000)))) {
    local_11 = local_11 | 0x80;
  }
  uVar1 = param_2 & 3;
  if (uVar1 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar1 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar1 != 2) {
      _DAT_00413464 = 0x16;
      DAT_00413468 = 0;
      return 0xffffffff;
    }
    local_10 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    DVar3 = 0;
    break;
  default:
    goto switchD_0040a848_caseD_11;
  case 0x20:
    DVar3 = 1;
    break;
  case 0x30:
    DVar3 = 2;
    break;
  case 0x40:
    DVar3 = 3;
  }
  uVar1 = param_2 & 0x700;
  if (uVar1 < 0x101) {
    if (uVar1 == 0x100) {
      dwCreationDisposition = 4;
      goto LAB_0040a8db;
    }
    if (uVar1 != 0) {
      _DAT_00413464 = 0x16;
      DAT_00413468 = 0;
      return 0xffffffff;
    }
LAB_0040a8b6:
    dwCreationDisposition = 3;
    goto LAB_0040a8db;
  }
  if (uVar1 < 0x301) {
    if (uVar1 == 0x300) {
      dwCreationDisposition = 2;
      goto LAB_0040a8db;
    }
    if (uVar1 != 0x200) {
      _DAT_00413464 = 0x16;
      DAT_00413468 = 0;
      return 0xffffffff;
    }
LAB_0040a8d6:
    dwCreationDisposition = 5;
  }
  else {
    if (uVar1 < 0x501) {
      if (uVar1 != 0x500) {
        if (uVar1 != 0x400) {
switchD_0040a848_caseD_11:
          DAT_00413468 = 0;
          _DAT_00413464 = 0x16;
          return 0xffffffff;
        }
        goto LAB_0040a8b6;
      }
    }
    else {
      if (uVar1 == 0x600) goto LAB_0040a8d6;
      if (uVar1 != 0x700) {
        _DAT_00413464 = 0x16;
        DAT_00413468 = 0;
        return 0xffffffff;
      }
    }
    dwCreationDisposition = 1;
  }
LAB_0040a8db:
  dwFlagsAndAttributes = 0x80;
  if (((param_2 & 0x100) != 0) && (((byte)param_4 & ~(byte)DAT_0041346c & 0x80) == 0)) {
    dwFlagsAndAttributes = 1;
  }
  if ((param_2 & 0x40) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x4000000;
    local_10 = local_10 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
    }
  }
  else {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  uVar1 = FUN_0040b670();
  if (uVar1 == 0xffffffff) {
    _DAT_00413464 = 0x18;
    DAT_00413468 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,DVar3,&local_c,dwCreationDisposition,dwFlagsAndAttributes,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar3 = GetLastError();
    FUN_0040b040(DVar3);
    return 0xffffffff;
  }
  DVar3 = GetFileType(hFile);
  if (DVar3 != 0) {
    if (DVar3 == 2) {
      local_11 = local_11 | 0x40;
    }
    else if (DVar3 == 3) {
      local_11 = local_11 | 8;
    }
    FUN_0040b730(uVar1,hFile);
    iVar4 = (uVar1 & 0x1f) * 8;
    *(byte *)(iVar4 + 4 + (&DAT_00413d00)[(int)uVar1 >> 5]) = local_11 | 1;
    if ((((local_11 & 0x48) == 0) && ((local_11 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
      DVar3 = FUN_0040bd70(uVar1,-1,2);
      if (DVar3 == 0xffffffff) {
        if (DAT_00413468 != 0x83) {
          FUN_0040a530(uVar1);
          return 0xffffffff;
        }
      }
      else {
        param_3 = param_3 & 0xffffff00;
        iVar2 = FUN_0040be30(uVar1,(char *)&param_3,1);
        if (((iVar2 == 0) && ((char)param_3 == '\x1a')) && (iVar2 = FUN_0040a610(), iVar2 == -1)) {
          FUN_0040a530(uVar1);
          return 0xffffffff;
        }
        DVar3 = FUN_0040bd70(uVar1,0,0);
        if (DVar3 == 0xffffffff) {
          FUN_0040a530(uVar1);
          return 0xffffffff;
        }
      }
    }
    if (((local_11 & 0x48) == 0) && ((param_2 & 8) != 0)) {
      *(byte *)(iVar4 + 4 + (&DAT_00413d00)[(int)uVar1 >> 5]) =
           *(byte *)(iVar4 + 4 + (&DAT_00413d00)[(int)uVar1 >> 5]) | 0x20;
    }
    return uVar1;
  }
  CloseHandle(hFile);
  DVar3 = GetLastError();
  FUN_0040b040(DVar3);
  return 0xffffffff;
}


