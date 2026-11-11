
/* ==== FUN_140090c0 @ 140090c0 ==== 
 * signature: undefined __cdecl FUN_140090c0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 140090c0-140091aa
 */

void __cdecl FUN_140090c0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  *param_2 = 0x65;
  if ((*(int *)(param_3 + 0xe) == 0) || (iVar3 = *(int *)(param_3 + 10), iVar3 == 0)) {
    *(undefined4 *)(param_2 + 5) = 0;
  }
  else {
    piVar1 = (int *)(param_2 + 7);
    if ((*piVar1 != 0) && (iVar4 = *(int *)(param_2 + 3), iVar4 != 0)) {
      if (iVar4 <= iVar3) {
        iVar3 = iVar4;
      }
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          iVar4 = iVar4 + 1;
          *(undefined1 *)(*piVar1 + -1 + iVar4) =
               *(undefined1 *)(*(int *)(param_3 + 0xe) + -1 + iVar4);
        } while (iVar4 < iVar3);
      }
      *(int *)(param_2 + 5) = iVar3;
      return;
    }
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,*(undefined4 *)(param_3 + 10),piVar1);
    if (*piVar1 != 0) {
      iVar4 = 0;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 10);
      iVar3 = *(int *)(param_3 + 10);
      *(int *)(param_2 + 5) = iVar3;
      if (0 < iVar3) {
        do {
          *(undefined1 *)(*piVar1 + iVar4) = *(undefined1 *)(*(int *)(param_3 + 0xe) + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_2 + 5));
        return;
      }
    }
  }
  return;
}


