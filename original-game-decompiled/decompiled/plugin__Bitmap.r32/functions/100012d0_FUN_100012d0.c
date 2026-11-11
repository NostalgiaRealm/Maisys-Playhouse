
/* ==== FUN_100012d0 @ 100012d0 ==== 
 * signature: undefined4 __cdecl FUN_100012d0(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 100012d0-10001346
 */

undefined4 __cdecl FUN_100012d0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int local_4;
  
  iVar3 = param_2;
  pcVar4 = (code *)FUN_100089c7(param_2,1,4,&local_4);
  iVar2 = param_1;
  DAT_100173bc = (*pcVar4)(local_4,param_1,&param_2);
  iVar1 = param_2 + 2;
  pcVar4 = (code *)FUN_100089c7(iVar3,1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,iVar2 + 10,&param_2);
  *param_4 = iVar1 + param_2;
  return 0;
}


