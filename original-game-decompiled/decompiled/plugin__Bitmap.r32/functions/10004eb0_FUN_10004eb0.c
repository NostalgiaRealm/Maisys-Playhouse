
/* ==== FUN_10004eb0 @ 10004eb0 ==== 
 * signature: undefined4 __cdecl FUN_10004eb0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 10004eb0-10004f68
 */

undefined4 __cdecl FUN_10004eb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int local_4;
  
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&local_4);
  uVar3 = param_3;
  uVar2 = param_2;
  iVar1 = param_1;
  DAT_100173bc = (*pcVar4)(local_4,param_2,param_3,param_1);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 10);
  pcVar4 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 4),1,4,&param_1);
  DAT_100173bc = (*pcVar4)(param_1,uVar2,uVar3,iVar1 + 0x3e);
  return 0;
}


