
/* ==== __setargv @ 1202a730 ==== 
 * signature: int __cdecl __setargv(void)
 * body: 1202a730-1202a7ca
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
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_12039868,0x104);
  _DAT_12037ec4 = &DAT_12039868;
  pbVar2 = &DAT_12039868;
  if (*DAT_1203ac00 != 0) {
    pbVar2 = DAT_1203ac00;
  }
  FUN_1202a7d0(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_1202c7e0(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1202a7d0(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_12037eac = puVar1;
  _DAT_12037ea8 = local_8 + -1;
  return local_8 + -1;
}


