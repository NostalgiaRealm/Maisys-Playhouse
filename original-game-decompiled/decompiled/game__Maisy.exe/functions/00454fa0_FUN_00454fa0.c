
/* ==== FUN_00454fa0 @ 00454fa0 ==== 
 * signature: undefined4 __cdecl FUN_00454fa0(short * param_1, char * param_2)
 * body: 00454fa0-004550a0
 */

undefined4 __cdecl FUN_00454fa0(short *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  size_t _Count;
  
  if ((param_1 == (short *)0x0) || (param_2 == (char *)0x0)) {
    return 0x10001;
  }
  sVar1 = FUN_0043ba40(param_2);
  if (*param_1 == 0) {
    param_1[1] = -1;
    param_1[2] = -1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *param_1 = 0x66;
  }
  if (*param_1 == 0x66) {
    if (*(int *)(param_1 + 3) != 0) {
      _Count = *(int *)(param_1 + 3) - 1;
      if ((int)sVar1 <= (int)_Count) {
        _Count = sVar1;
      }
      _strncpy(*(char **)(param_1 + 7),param_2,_Count);
      *(size_t *)(param_1 + 5) = _Count;
      *(undefined1 *)(*(int *)(param_1 + 7) + _Count) = 0;
      return 0;
    }
    if (*(int *)(param_1 + 3) == 0) {
      *param_1 = 0x66;
      param_1[1] = -1;
      param_1[2] = -1;
      pcVar2 = FUN_0043b970(param_2);
      *(char **)(param_1 + 7) = pcVar2;
      *(size_t *)(param_1 + 5) = sVar1;
      *(size_t *)(param_1 + 3) = sVar1 + 1;
      return 0;
    }
  }
  if (*param_1 != 0x6a) {
    return 0x60002;
  }
  *param_1 = 0x66;
  param_1[1] = -1;
  param_1[2] = -1;
  pcVar2 = FUN_0043b970(param_2);
  *(char **)(param_1 + 7) = pcVar2;
  *(size_t *)(param_1 + 5) = sVar1;
  *(size_t *)(param_1 + 3) = sVar1 + 1;
  return 0;
}


