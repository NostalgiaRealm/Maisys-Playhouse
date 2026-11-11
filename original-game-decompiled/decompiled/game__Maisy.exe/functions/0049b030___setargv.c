
/* ==== __setargv @ 0049b030 ==== 
 * signature: int __cdecl __setargv(void)
 * body: 0049b030-0049b0ca
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
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_004e5560,0x104);
  _DAT_004de1d0 = &DAT_004e5560;
  pbVar2 = &DAT_004e5560;
  if (*DAT_004e67a8 != 0) {
    pbVar2 = DAT_004e67a8;
  }
  FUN_0049b0d0(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_00490210(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_0049b0d0(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  DAT_004de1b8 = puVar1;
  DAT_004de1b4 = local_8 + -1;
  return local_8 + -1;
}


