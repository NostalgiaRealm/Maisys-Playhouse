
/* ==== FUN_004bc928 @ 004bc928 ==== 
 * signature: undefined4 __stdcall FUN_004bc928(void)
 * body: 004bc928-004bca3a
 */

undefined4 FUN_004bc928(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_004e51f8 != 0) {
    return 1;
  }
  iVar3 = FUN_004bbf67();
  if (*(int *)(iVar3 + 4) != 0) goto LAB_004bca21;
  puVar1 = (undefined4 *)(iVar3 + 8);
  hModule = LoadLibraryA("CTL3D32.DLL");
  *puVar1 = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar4 = GetProcAddress(hModule,&DAT_0000000c);
    *(FARPROC *)(iVar3 + 0xc) = pFVar4;
    pFVar4 = GetProcAddress((HMODULE)*puVar1,&DAT_0000000d);
    *(FARPROC *)(iVar3 + 0x10) = pFVar4;
    pFVar4 = GetProcAddress((HMODULE)*puVar1,&DAT_00000010);
    *(FARPROC *)(iVar3 + 0x14) = pFVar4;
    pFVar4 = GetProcAddress((HMODULE)*puVar1,&DAT_00000018);
    *(FARPROC *)(iVar3 + 0x18) = pFVar4;
    pFVar4 = GetProcAddress((HMODULE)*puVar1,&DAT_00000006);
    *(FARPROC *)(iVar3 + 0x1c) = pFVar4;
    pFVar4 = GetProcAddress((HMODULE)*puVar1,&DAT_00000015);
    *(FARPROC *)(iVar3 + 0x20) = pFVar4;
    pFVar4 = GetProcAddress((HMODULE)*puVar1,&DAT_00000016);
    *(FARPROC *)(iVar3 + 0x24) = pFVar4;
    pFVar4 = GetProcAddress((HMODULE)*puVar1,(LPCSTR)0x3);
    *(FARPROC *)(iVar3 + 0x28) = pFVar4;
    pFVar4 = GetProcAddress((HMODULE)*puVar1,&DAT_00000019);
    *(FARPROC *)(iVar3 + 0x2c) = pFVar4;
  }
  pcVar2 = *(code **)(iVar3 + 0xc);
  if ((((pcVar2 == (code *)0x0) || (*(int *)(iVar3 + 0x14) == 0)) || (*(int *)(iVar3 + 0x1c) == 0))
     || ((*(int *)(iVar3 + 0x20) == 0 || (*(int *)(iVar3 + 0x10) == 0)))) {
LAB_004bc9ee:
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    if ((HMODULE)*puVar1 != (HMODULE)0x0) {
      FreeLibrary((HMODULE)*puVar1);
      *puVar1 = 0;
    }
  }
  else {
    iVar5 = FUN_004bafca();
    iVar5 = (*pcVar2)(*(undefined4 *)(iVar5 + 8));
    if (iVar5 == 0) goto LAB_004bc9ee;
  }
  *(undefined4 *)(iVar3 + 4) = 1;
LAB_004bca21:
  uVar6 = 0;
  if (*(int *)(iVar3 + 8) != 0) {
    iVar5 = FUN_004bafca();
    uVar6 = (**(code **)(iVar3 + 0x14))(*(undefined4 *)(iVar5 + 8));
  }
  return uVar6;
}


