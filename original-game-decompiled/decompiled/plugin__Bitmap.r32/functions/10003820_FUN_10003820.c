
/* ==== FUN_10003820 @ 10003820 ==== 
 * signature: undefined4 __cdecl FUN_10003820(int param_1)
 * body: 10003820-100038cc
 */

undefined4 __cdecl FUN_10003820(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar2)(local_4,param_1,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,iVar1 + 0x4a);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,iVar1 + 0x76);
  return 0;
}


