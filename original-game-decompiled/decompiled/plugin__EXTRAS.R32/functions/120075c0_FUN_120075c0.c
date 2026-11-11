
/* ==== FUN_120075c0 @ 120075c0 ==== 
 * signature: undefined4 __cdecl FUN_120075c0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 120075c0-12007917
 */

undefined4 __cdecl FUN_120075c0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  int local_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int local_108;
  int local_104 [65];
  
  if (1 < param_4) {
    pcVar1 = (code *)FUN_12027370(param_2,1,8,local_104);
    DAT_12039a9c = (*pcVar1)(local_104[0],&local_108,1);
    if ((short)local_108 == 2) {
      pcVar1 = (code *)FUN_12027370(param_2,1,6,local_104);
      DAT_12039a9c = (*pcVar1)(local_104[0],param_1);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_11c);
      DAT_12039a9c = (*pcVar1)(local_11c,param_1 + 10);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_118);
      DAT_12039a9c = (*pcVar1)(iStack_118,param_1 + 0x10);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_114);
      DAT_12039a9c = (*pcVar1)(iStack_114,param_1 + 0x22);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_110);
      DAT_12039a9c = (*pcVar1)(iStack_110,param_1 + 0x28);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10c);
      DAT_12039a9c = (*pcVar1)(iStack_10c,param_1 + 0x2e);
      return 0;
    }
    return 0x10000;
  }
  if (param_4 == 1) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,local_104);
    DAT_12039a9c = (*pcVar1)(local_104[0],param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_11c);
    DAT_12039a9c = (*pcVar1)(local_11c,param_1 + 10);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_118);
    DAT_12039a9c = (*pcVar1)(iStack_118,param_1 + 0x10);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_114);
    DAT_12039a9c = (*pcVar1)(iStack_114,param_1 + 0x22);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_110);
    DAT_12039a9c = (*pcVar1)(iStack_110,param_1 + 0x28);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10c);
    DAT_12039a9c = (*pcVar1)(iStack_10c,param_1 + 0x2e);
    return 0;
  }
  if (param_4 == 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_11c);
    DAT_12039a9c = (*pcVar1)(local_11c,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_118);
    DAT_12039a9c = (*pcVar1)(iStack_118,param_1 + 10);
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&iStack_114);
    DAT_12039a9c = (*pcVar1)(iStack_114,local_104,0x101);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_110);
    DAT_12039a9c = (*pcVar1)(iStack_110,param_1 + 0x22);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10c);
    DAT_12039a9c = (*pcVar1)(iStack_10c,param_1 + 0x28);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_108);
    DAT_12039a9c = (*pcVar1)(local_108,param_1 + 0x2e);
    return 0;
  }
  return 0x10000;
}


