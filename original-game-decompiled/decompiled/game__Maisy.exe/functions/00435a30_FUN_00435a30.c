
/* ==== FUN_00435a30 @ 00435a30 ==== 
 * signature: char __thiscall FUN_00435a30(void * this, int param_1)
 * body: 00435a30-00435ace
 */

char __thiscall FUN_00435a30(void *this,int param_1)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  uint uVar3;
  char local_108 [260];
  
  *(undefined4 *)(param_1 + 0x112) = 0;
  __makepath(local_108,(char *)0x0,(char *)(param_1 + 10),*(char **)(param_1 + 6),(char *)0x0);
  pHVar1 = LoadLibraryA(local_108);
  *(HMODULE *)(param_1 + 0x10a) = pHVar1;
  if (pHVar1 != (HMODULE)0x0) {
    *(HMODULE *)(param_1 + 0x11c) = pHVar1;
    *(short *)((int)this + 0x723a) = *(short *)((int)this + 0x723a) + 1;
  }
  uVar3 = 1;
  pFVar2 = GetProcAddress(*(HMODULE *)(param_1 + 0x10a),(LPCSTR)0x1);
  while (pFVar2 != (FARPROC)0x0) {
    uVar3 = uVar3 + 1;
    *(int *)(param_1 + 0x112) = *(int *)(param_1 + 0x112) + 1;
    pFVar2 = GetProcAddress(*(HMODULE *)(param_1 + 0x10a),(LPCSTR)(uVar3 & 0xffff));
  }
  return '\x01' - (*(int *)(param_1 + 0x10a) == 0);
}


