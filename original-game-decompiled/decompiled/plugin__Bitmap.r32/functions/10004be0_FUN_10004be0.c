
/* ==== FUN_10004be0 @ 10004be0 ==== 
 * signature: undefined4 __cdecl FUN_10004be0(int param_1, int param_2)
 * body: 10004be0-10004cd6
 */

undefined4 __cdecl FUN_10004be0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 1;
  pcVar2 = (code *)FUN_100089c7(param_2,1,7,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,&local_4,1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x36);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3a);
  pcVar2 = (code *)FUN_100089c7(iVar1,1,5,&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1 + 0x3e);
  return 0;
}


