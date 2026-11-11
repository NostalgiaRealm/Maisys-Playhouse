
/* ==== FUN_12002740 @ 12002740 ==== 
 * signature: undefined4 __cdecl FUN_12002740(int param_1, int param_2)
 * body: 12002740-1200285e
 */

undefined4 __cdecl FUN_12002740(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 uStack_20;
  uint uStack_1e;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_18);
  DAT_12039a9c = (*pcVar1)(local_18,2,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,3,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,5,param_1 + 0x1a);
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,6,param_1 + 0x54);
  uStack_20 = 1;
  uStack_1e = *(uint *)(param_1 + 0x16) & 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,0xe,&uStack_20);
  uStack_1e = (uint)(uStack_1e == 0);
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,0xf,&uStack_20);
  return 0;
}


