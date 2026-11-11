
/* ==== FUN_100057e0 @ 100057e0 ==== 
 * signature: undefined4 __cdecl FUN_100057e0(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 100057e0-100058b6
 */

undefined4 __cdecl FUN_100057e0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_4;
  
  iVar2 = param_2;
  pcVar3 = (code *)FUN_100089c7(param_2,1,4,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar3)(local_4,param_1,&param_2);
  iVar4 = param_2 + 2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 10,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x36,&param_2);
  iVar4 = iVar4 + param_2;
  pcVar3 = (code *)FUN_100089c7(iVar2,1,4,&param_1);
  DAT_100173bc = (*pcVar3)(param_1,iVar1 + 0x62,&param_2);
  *param_4 = iVar4 + param_2;
  return 0;
}


