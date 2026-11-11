
/* ==== FUN_12022690 @ 12022690 ==== 
 * signature: undefined4 __cdecl FUN_12022690(int param_1, int param_2)
 * body: 12022690-1202271d
 */

undefined4 __cdecl FUN_12022690(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  int iStack_4;
  
  iVar2 = *(int *)(param_1 + 2);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,6,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,8,param_1 + 10);
  if (*(int *)(param_1 + 2) != iVar2) {
    FUN_120232f0(param_1,*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar2 = FUN_12023050(*(int *)(param_1 + 2));
    *(short *)(param_1 + 0xe) = (short)iVar2;
  }
  return 0;
}


