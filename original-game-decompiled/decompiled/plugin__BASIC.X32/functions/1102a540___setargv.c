
/* ==== __setargv @ 1102a540 ==== 
 * signature: int __cdecl __setargv(void)
 * body: 1102a540-1102a5da
 * note: Library Function - Single Match  __setargv  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 1998 Release */

int __cdecl __setargv(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_110397f0,0x104);
  _DAT_110365f0 = &DAT_110397f0;
  pbVar2 = &DAT_110397f0;
  if (*DAT_1103ab40 != 0) {
    pbVar2 = DAT_1103ab40;
  }
  FUN_1102a5e0(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_11029420(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1102a5e0(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_110365d8 = puVar1;
  _DAT_110365d4 = local_8 + -1;
  return local_8 + -1;
}


