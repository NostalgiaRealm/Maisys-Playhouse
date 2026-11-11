
/* ==== FUN_10001cf0 @ 10001cf0 ==== 
 * signature: undefined4 __cdecl FUN_10001cf0(int param_1)
 * body: 10001cf0-10001d2e
 */

undefined4 __cdecl FUN_10001cf0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,param_1 + 0x14);
  return 0;
}


