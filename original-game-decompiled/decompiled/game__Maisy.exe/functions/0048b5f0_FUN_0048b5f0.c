
/* ==== FUN_0048b5f0 @ 0048b5f0 ==== 
 * signature: undefined __cdecl FUN_0048b5f0(undefined4 param_1, undefined2 * param_2, undefined2 * param_3)
 * body: 0048b5f0-0048b6db
 */

void __cdecl FUN_0048b5f0(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  size_t sVar2;
  char *pcVar3;
  code *pcVar4;
  size_t _Count;
  int local_8;
  
  if (*(int *)(param_3 + 7) != 0) {
    if (0 < *(int *)(param_3 + 5)) {
      *param_2 = 0x66;
      sVar2 = *(size_t *)(param_3 + 5);
      if ((*(char **)(param_2 + 7) != (char *)0x0) && (*(int *)(param_2 + 3) != 0)) {
        _Count = *(int *)(param_2 + 3) - 1;
        if ((int)sVar2 <= (int)_Count) {
          _Count = sVar2;
        }
        _strncpy(*(char **)(param_2 + 7),*(char **)(param_3 + 7),_Count);
        *(size_t *)(param_2 + 5) = _Count;
        *(undefined1 *)(*(int *)(param_2 + 7) + _Count) = 0;
        return;
      }
      uVar1 = *param_3;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *param_2 = uVar1;
      pcVar3 = FUN_0043b970(*(char **)(param_3 + 7));
      *(char **)(param_2 + 7) = pcVar3;
      *(size_t *)(param_2 + 5) = sVar2;
      *(size_t *)(param_2 + 3) = sVar2 + 1;
      return;
    }
    if ((*(int *)(param_3 + 7) != 0) && (*(int *)(param_2 + 7) == 0)) {
      pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xe,&local_8);
      DAT_004e34cc = (*pcVar4)(local_8,param_2 + 7,1);
      *(undefined4 *)(param_2 + 3) = 1;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_2 + 5) = 0;
  if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
    **(undefined1 **)(param_2 + 7) = 0;
  }
  return;
}


