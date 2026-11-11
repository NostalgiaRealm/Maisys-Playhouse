
/* ==== FUN_12024b20 @ 12024b20 ==== 
 * signature: undefined4 __cdecl FUN_12024b20(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 12024b20-12024cde
 */

undefined4 __cdecl FUN_12024b20(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  code *pcVar2;
  int local_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar2 = (code *)FUN_12027370(param_2,1,4,&local_14);
  DAT_12039a9c = (*pcVar2)(local_14,param_1 + 0x58,&local_18);
  *param_4 = *param_4 + local_18;
  pcVar2 = (code *)FUN_12027370(param_2,1,4,&iStack_10);
  DAT_12039a9c = (*pcVar2)(iStack_10,param_1 + 0x62,&local_18);
  *param_4 = *param_4 + local_18;
  pcVar2 = (code *)FUN_12027370(param_2,1,4,&iStack_c);
  DAT_12039a9c = (*pcVar2)(iStack_c,param_1 + 0x6c,&local_18);
  *param_4 = *param_4 + local_18;
  pcVar2 = (code *)FUN_12027370(param_2,1,4,&iStack_8);
  DAT_12039a9c = (*pcVar2)(iStack_8,param_1,&local_18);
  iVar1 = *param_4;
  *param_4 = iVar1 + local_18;
  *param_4 = iVar1 + local_18 + 0xc;
  local_18 = 0xc;
  pcVar2 = (code *)FUN_12027370(param_2,1,4,&iStack_4);
  DAT_12039a9c = (*pcVar2)(iStack_4,param_1 + 0x76,&local_18);
  *param_4 = *param_4 + local_18;
  if ((*(byte *)(param_1 + 0x7b) & 0x20) != 0) {
    pcVar2 = (code *)FUN_12027370(param_2,1,4,&local_14);
    DAT_12039a9c = (*pcVar2)(local_14,param_1 + 0x22,&local_18);
    *param_4 = *param_4 + local_18;
  }
  if ((*(byte *)(param_1 + 0x7b) & 0x40) != 0) {
    pcVar2 = (code *)FUN_12027370(param_2,1,4,&local_14);
    DAT_12039a9c = (*pcVar2)(local_14,param_1 + 0x34,&local_18);
    *param_4 = *param_4 + local_18;
  }
  if ((*(byte *)(param_1 + 0x7b) & 0x80) != 0) {
    pcVar2 = (code *)FUN_12027370(param_2,1,4,&local_14);
    DAT_12039a9c = (*pcVar2)(local_14,param_1 + 0x46,&local_18);
    *param_4 = *param_4 + local_18;
  }
  return 0;
}


