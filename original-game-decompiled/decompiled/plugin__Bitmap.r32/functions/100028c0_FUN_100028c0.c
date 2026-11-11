
/* ==== FUN_100028c0 @ 100028c0 ==== 
 * signature: undefined4 __cdecl FUN_100028c0(int param_1)
 * body: 100028c0-10002936
 */

undefined4 __cdecl FUN_100028c0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar2)(local_4,param_1,param_1 + 0x12);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,iVar1 + 0x3e);
  return 0;
}


