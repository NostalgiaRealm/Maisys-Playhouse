
/* ==== __setargv @ 1401b2f0 ==== 
 * signature: int __cdecl __setargv(void)
 * body: 1401b2f0-1401b38a
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
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_14028870,0x104);
  _DAT_1402730c = &DAT_14028870;
  pbVar2 = &DAT_14028870;
  if (*DAT_14029f88 != 0) {
    pbVar2 = DAT_14029f88;
  }
  FUN_1401b390(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_1401def0(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1401b390(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_140272f4 = puVar1;
  _DAT_140272f0 = local_8 + -1;
  return local_8 + -1;
}


