
/* ==== __setargv @ 13004fd0 ==== 
 * signature: int __cdecl __setargv(void)
 * body: 13004fd0-1300506a
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
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_13008bc0,0x104);
  _DAT_1300836c = &DAT_13008bc0;
  pbVar2 = &DAT_13008bc0;
  if (*DAT_13009e64 != 0) {
    pbVar2 = DAT_13009e64;
  }
  FUN_13005070(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_13005be0(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_13005070(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_13008354 = puVar1;
  _DAT_13008350 = local_8 + -1;
  return local_8 + -1;
}


