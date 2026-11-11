
/* ==== FUN_0040caf0 @ 0040caf0 ==== 
 * signature: undefined __stdcall FUN_0040caf0(void)
 * body: 0040caf0-0040cb8d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040caf0(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_004134c8,0x104);
  _DAT_0041349c = &DAT_004134c8;
  pbVar2 = DAT_00413e10;
  if (*DAT_00413e10 == 0) {
    pbVar2 = &DAT_004134c8;
  }
  FUN_0040cb90(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_0040ad40(local_4 + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_0040cb90(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_00413484 = puVar1;
  _DAT_00413480 = local_8 + -1;
  return;
}


