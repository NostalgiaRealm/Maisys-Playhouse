
/* ==== FUN_12022810 @ 12022810 ==== 
 * signature: undefined4 __cdecl FUN_12022810(int param_1, int param_2, byte param_3)
 * body: 12022810-12022941
 */

undefined4 __cdecl FUN_12022810(int param_1,int param_2,byte param_3)

{
  code *pcVar1;
  undefined2 local_1a;
  int local_18;
  int local_14;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_8;
  int iStack_4;
  
  local_1a = 5;
  local_14 = 0;
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_18);
  DAT_12039a9c = (*pcVar1)(local_18,&local_1a,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 10);
  if ((*(short *)(param_1 + 0xc) != 0) || ((param_3 & 0x80) != 0)) {
    if (*(int *)(param_1 + 0x10) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,*(undefined4 *)(param_1 + 0x10),&local_14);
    }
    iStack_e = local_14;
    uStack_10 = 1;
    pcVar1 = (code *)FUN_12027370(param_2,1,5,&local_18);
    DAT_12039a9c = (*pcVar1)(local_18,&uStack_10);
    FUN_120234c0(param_2,CONCAT22((short)((uint)DAT_12039a9c >> 0x10),*(undefined2 *)(param_1 + 0xe)
                                 ),*(undefined4 *)(param_1 + 0x10),local_14);
  }
  return 0;
}


