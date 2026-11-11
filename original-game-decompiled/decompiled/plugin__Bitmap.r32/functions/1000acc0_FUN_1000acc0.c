
/* ==== FUN_1000acc0 @ 1000acc0 ==== 
 * signature: undefined __stdcall FUN_1000acc0(void)
 * body: 1000acc0-1000ad5d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000acc0(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_10017018,0x104);
  _DAT_10017000 = &DAT_10017018;
  pbVar2 = DAT_10018514;
  if (*DAT_10018514 == 0) {
    pbVar2 = &DAT_10017018;
  }
  FUN_1000ad60(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_1000c060(local_4 + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000ad60(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_10016fe8 = puVar1;
  _DAT_10016fe4 = local_8 + -1;
  return;
}


