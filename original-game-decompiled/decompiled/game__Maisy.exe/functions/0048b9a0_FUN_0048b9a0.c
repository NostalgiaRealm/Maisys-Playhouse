
/* ==== FUN_0048b9a0 @ 0048b9a0 ==== 
 * signature: undefined __cdecl FUN_0048b9a0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 0048b9a0-0048ba82
 */

void __cdecl FUN_0048b9a0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  *param_2 = 0x65;
  if ((*(int *)(param_3 + 0xe) == 0) || (iVar2 = *(int *)(param_3 + 10), iVar2 == 0)) {
    *(undefined4 *)(param_2 + 5) = 0;
  }
  else {
    if ((*(int *)(param_2 + 7) != 0) && (iVar3 = *(int *)(param_2 + 3), iVar3 != 0)) {
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined1 *)(*(int *)(param_2 + 7) + -1 + iVar3) =
               *(undefined1 *)(*(int *)(param_3 + 0xe) + -1 + iVar3);
        } while (iVar3 < iVar2);
      }
      *(int *)(param_2 + 5) = iVar2;
      return;
    }
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,0,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8,*(undefined4 *)(param_3 + 10),param_2 + 7);
    if (*(int *)(param_2 + 7) != 0) {
      iVar3 = 0;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 10);
      iVar2 = *(int *)(param_3 + 10);
      *(int *)(param_2 + 5) = iVar2;
      if (0 < iVar2) {
        do {
          *(undefined1 *)(*(int *)(param_2 + 7) + iVar3) =
               *(undefined1 *)(*(int *)(param_3 + 0xe) + iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_2 + 5));
        return;
      }
    }
  }
  return;
}


