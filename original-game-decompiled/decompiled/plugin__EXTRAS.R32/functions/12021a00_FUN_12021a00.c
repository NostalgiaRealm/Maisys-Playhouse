
/* ==== FUN_12021a00 @ 12021a00 ==== 
 * signature: undefined4 __cdecl FUN_12021a00(int param_1, int param_2)
 * body: 12021a00-12021a8a
 */

undefined4 __cdecl FUN_12021a00(int param_1,int param_2)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,7,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,8,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,0xb,param_1 + 0x14);
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
  return 0;
}


