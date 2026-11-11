
/* ==== __findnext @ 00490490 ==== 
 * signature: undefined4 __cdecl __findnext(HANDLE param_1, DWORD * param_2)
 * body: 00490490-004905a4
 * note: Library Function - Single Match  __findnext  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __findnext
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __findnext(HANDLE param_1,DWORD *param_2)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  CHAR *pCVar7;
  CHAR *pCVar8;
  DWORD *pDVar9;
  _WIN32_FIND_DATAA local_140;
  
  BVar2 = FindNextFileA(param_1,&local_140);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    switch(DVar3) {
    case 2:
    case 3:
    case 0x12:
      piVar4 = FUN_0048f9d0();
      *piVar4 = 2;
      return 0xffffffff;
    default:
      piVar4 = FUN_0048f9d0();
      *piVar4 = 0x16;
      return 0xffffffff;
    case 8:
      piVar4 = FUN_0048f9d0();
      *piVar4 = 0xc;
      return 0xffffffff;
    }
  }
  if (local_140.dwFileAttributes == 0x80) {
    *param_2 = 0;
  }
  else {
    *param_2 = local_140.dwFileAttributes;
  }
  DVar3 = ___timet_from_ft(&local_140.ftCreationTime);
  param_2[1] = DVar3;
  DVar3 = ___timet_from_ft(&local_140.ftLastAccessTime);
  param_2[2] = DVar3;
  DVar3 = ___timet_from_ft(&local_140.ftLastWriteTime);
  uVar5 = 0xffffffff;
  param_2[3] = DVar3;
  param_2[4] = local_140.nFileSizeLow;
  pCVar7 = local_140.cFileName;
  do {
    pCVar8 = pCVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pCVar8 = pCVar7 + 1;
    cVar1 = *pCVar7;
    pCVar7 = pCVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pCVar7 = pCVar8 + -uVar5;
  pDVar9 = param_2 + 5;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pDVar9 = *(DWORD *)pCVar7;
    pCVar7 = pCVar7 + 4;
    pDVar9 = pDVar9 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(CHAR *)pDVar9 = *pCVar7;
    pCVar7 = pCVar7 + 1;
    pDVar9 = (DWORD *)((int)pDVar9 + 1);
  }
  return 0;
}


