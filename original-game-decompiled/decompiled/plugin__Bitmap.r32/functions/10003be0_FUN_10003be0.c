
/* ==== FUN_10003be0 @ 10003be0 ==== 
 * signature: undefined4 __cdecl FUN_10003be0(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 10003be0-10003e8d
 */

undefined4 __cdecl FUN_10003be0(int param_1,int param_2,undefined4 param_3,int param_4)

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
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x36);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x3a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x3e);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x44);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x4a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_4);
    DAT_100173bc = (*pcVar2)(param_4,param_1 + 0x76);
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
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x36);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3e);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x44);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x4a);
    pcVar2 = (code *)FUN_100089c7(iVar1,1,6,&param_2);
    DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x76);
    return 0;
  }
  return 0x10000;
}


