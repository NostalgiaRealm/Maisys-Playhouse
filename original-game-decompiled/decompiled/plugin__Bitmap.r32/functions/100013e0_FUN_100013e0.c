
/* ==== FUN_100013e0 @ 100013e0 ==== 
 * signature: undefined4 __cdecl FUN_100013e0(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 100013e0-100014c7
 */

undefined4 __cdecl FUN_100013e0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  if ((short)param_4 < 1) {
    pcVar1 = (code *)FUN_100089c7(param_2,1,6,&param_4);
    DAT_100173bc = (*pcVar1)(param_4,param_1);
    pcVar1 = (code *)FUN_100089c7(iVar2,1,6,&param_4);
    iVar2 = param_4;
  }
  else {
    pcVar1 = (code *)FUN_100089c7(param_2,1,8,&param_2);
    DAT_100173bc = (*pcVar1)(param_2,&param_4,1);
    if ((short)param_4 != 1) {
      return 0x10000;
    }
    pcVar1 = (code *)FUN_100089c7(iVar2,1,6,&param_2);
    DAT_100173bc = (*pcVar1)(param_2,param_1);
    pcVar1 = (code *)FUN_100089c7(iVar2,1,6,&param_2);
    iVar2 = param_2;
  }
  DAT_100173bc = (*pcVar1)(iVar2,param_1 + 10);
  *(undefined2 *)(param_1 + 0x36) = 0x14;
  *(undefined2 *)(param_1 + 0x38) = 1;
  return 0;
}


