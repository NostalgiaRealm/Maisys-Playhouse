
/* ==== FUN_10005760 @ 10005760 ==== 
 * signature: undefined4 __cdecl FUN_10005760(int param_1)
 * body: 10005760-100057d6
 */

undefined4 __cdecl FUN_10005760(int param_1)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  iVar1 = param_1;
  DAT_100173bc = (*pcVar2)(local_4,param_1,param_1 + 10);
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,iVar1,iVar1 + 0x36);
  return 0;
}


