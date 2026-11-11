
/* ==== FUN_10001350 @ 10001350 ==== 
 * signature: undefined4 __cdecl FUN_10001350(int param_1, int param_2)
 * body: 10001350-100013d7
 */

undefined4 __cdecl FUN_10001350(int param_1,int param_2)

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
  return 0;
}


