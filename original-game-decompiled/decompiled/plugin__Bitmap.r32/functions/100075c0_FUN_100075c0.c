
/* ==== FUN_100075c0 @ 100075c0 ==== 
 * signature: undefined4 __cdecl FUN_100075c0(int param_1)
 * body: 100075c0-100076b6
 */

undefined4 __cdecl FUN_100075c0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x2c,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar2)(local_4,param_1,s_value_1001312c,1,6);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x2c,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,s_height_10013068,1,4);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x2c,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,s_width_10013054,1,4);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x2c,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,s_disposebitmap_10013198,0x14,2);
  return 0;
}


