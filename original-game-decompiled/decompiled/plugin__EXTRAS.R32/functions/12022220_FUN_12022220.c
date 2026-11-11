
/* ==== FUN_12022220 @ 12022220 ==== 
 * signature: undefined4 __cdecl FUN_12022220(undefined4 param_1)
 * body: 12022220-120224ad
 */

undefined4 __cdecl FUN_12022220(undefined4 param_1)

{
  code *pcVar1;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&local_30);
  DAT_12039a9c = (*pcVar1)(local_30,param_1,s_value_120370b8,0,0xe);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_2c);
  DAT_12039a9c = (*pcVar1)(iStack_2c,param_1,s_listtype_12037044,1,7);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_28);
  DAT_12039a9c = (*pcVar1)(iStack_28,param_1,s_count_120370a4,1,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_24);
  DAT_12039a9c = (*pcVar1)(iStack_24,param_1,s_insert_12037090,0,10);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1,s_delete_1203797c,0,10);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1,s_sortascend_1203707c,1,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1,s_sortdescend_12037068,1,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1,s_shuffle_12037054,1,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1,s_random_12037968,0,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1,s_randomdelete_12037954,0,7);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1,s_listerror_12037940,1,5);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,s_foralldo_12037030,0x69,2);
  return 0;
}


