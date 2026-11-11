
/* ==== FUN_10018640 @ 10018640 ==== 
 * signature: undefined __stdcall FUN_10018640(void)
 * body: 10018640-100186dd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018640(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_10023420,0x104);
  _DAT_100233c0 = &DAT_10023420;
  pbVar2 = DAT_1002533c;
  if (*DAT_1002533c == 0) {
    pbVar2 = &DAT_10023420;
  }
  FUN_100186e0(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_10015d50(local_4 + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100186e0(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_100233a8 = puVar1;
  _DAT_100233a4 = local_8 + -1;
  return;
}


