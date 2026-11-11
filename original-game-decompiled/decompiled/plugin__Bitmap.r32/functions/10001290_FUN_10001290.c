
/* ==== FUN_10001290 @ 10001290 ==== 
 * signature: undefined4 __cdecl FUN_10001290(int param_1)
 * body: 10001290-100012ce
 */

undefined4 __cdecl FUN_10001290(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,param_1 + 10);
  return 0;
}


