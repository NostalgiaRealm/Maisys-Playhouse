
/* ==== FUN_12012ef0 @ 12012ef0 ==== 
 * signature: undefined4 __cdecl FUN_12012ef0(undefined4 param_1)
 * body: 12012ef0-12013281
 */

undefined4 __cdecl FUN_12012ef0(undefined4 param_1)

{
  code *pcVar1;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
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
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&local_44);
  DAT_12039a9c = (*pcVar1)(local_44,param_1,s_chunkdelimiters_12037844,0x66,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_40);
  DAT_12039a9c = (*pcVar1)(iStack_40,param_1,s_lastdelimiter_12037830,0x66,4);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_3c);
  DAT_12039a9c = (*pcVar1)(iStack_3c,param_1,s_maccreator_1203781c,0x66,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_38);
  DAT_12039a9c = (*pcVar1)(iStack_38,param_1,s_readchunk_12037808,0x66,4);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_34);
  DAT_12039a9c = (*pcVar1)(iStack_34,param_1,s_readtoend_120377f4,0x66,4);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_30);
  DAT_12039a9c = (*pcVar1)(iStack_30,param_1,s_mactype_120377e0,0x66,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_2c);
  DAT_12039a9c = (*pcVar1)(iStack_2c,param_1,&DAT_120377cc,0x66,0xc);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_28);
  DAT_12039a9c = (*pcVar1)(iStack_28,param_1,s_length_120377b8,0x66,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_24);
  DAT_12039a9c = (*pcVar1)(iStack_24,param_1,s_append_120377a4,0x66,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1,s_close_120372b0,0x14,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1,s_write_12037790,0x66,2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1,s_error_1203777c,1,4);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1,s_index0_12037768,1,7);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1,s_index_12037754,1,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1,s_filepath_120371c4,0x66,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1,s_openmode_12037740,0x66,6);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2c,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,s_filename_1203772c,0x66,4);
  return 0;
}


