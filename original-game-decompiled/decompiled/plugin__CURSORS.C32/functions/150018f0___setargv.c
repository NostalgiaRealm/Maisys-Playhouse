
/* ==== __setargv @ 150018f0 ==== 
 * signature: int __cdecl __setargv(void)
 * body: 150018f0-1500198a
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
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_150058d0,0x104);
  _DAT_15005078 = &DAT_150058d0;
  pbVar2 = &DAT_150058d0;
  if (*DAT_15006b64 != 0) {
    pbVar2 = DAT_15006b64;
  }
  FUN_15001990(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_15002500(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_15001990(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_15005060 = puVar1;
  _DAT_1500505c = local_8 + -1;
  return local_8 + -1;
}


