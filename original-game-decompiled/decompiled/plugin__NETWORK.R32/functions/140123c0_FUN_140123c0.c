
/* ==== FUN_140123c0 @ 140123c0 ==== 
 * signature: undefined4 __cdecl FUN_140123c0(int param_1, undefined4 param_2, int param_3)
 * body: 140123c0-1401242c
 */

uint __cdecl FUN_140123c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint in_EAX;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 4);
  iVar1 = *piVar3;
  while( true ) {
    if (iVar1 == 0) {
      return in_EAX & 0xffffff00;
    }
    if (*piVar3 == param_3) break;
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 + 1;
    iVar1 = *piVar3;
    in_EAX = param_3;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_4);
  DAT_14028e48 = (*pcVar2)(local_4,param_2,*(undefined4 *)(param_1 + iVar4 * 8));
  return CONCAT31((int3)((uint)DAT_14028e48 >> 8),1);
}


