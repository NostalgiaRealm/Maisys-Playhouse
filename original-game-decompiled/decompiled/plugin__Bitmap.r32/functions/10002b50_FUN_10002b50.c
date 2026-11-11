
/* ==== FUN_10002b50 @ 10002b50 ==== 
 * signature: undefined4 __cdecl FUN_10002b50(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 10002b50-10002d1f
 */

undefined4 __cdecl FUN_10002b50(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_2;
  if ((short)param_4 < 1) {
    pcVar2 = (code *)FUN_100089c7(param_2,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0xe);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x12);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x3e);
    return 0;
  }
  pcVar2 = (code *)FUN_100089c7(param_2,1,8,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&param_4,1);
  if ((short)param_4 == 1) {
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0xe);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x12);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3e);
    return 0;
  }
  return 0x10000;
}


