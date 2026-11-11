
/* ==== FUN_004550b0 @ 004550b0 ==== 
 * signature: undefined4 __cdecl FUN_004550b0(short * param_1, char * param_2, size_t param_3)
 * body: 004550b0-00455205
 */

undefined4 __cdecl FUN_004550b0(short *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  char *pcVar2;
  size_t _Count;
  
  if ((param_1 == (short *)0x0) || (param_2 == (char *)0x0)) {
    return 0x10001;
  }
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
  pcVar2 = *(char **)(param_1 + 7);
  if (*param_1 == 0x66) {
    if (*(int *)(param_1 + 3) != 0) {
      _Count = *(int *)(param_1 + 3) - 1;
      if ((int)param_3 <= (int)_Count) {
        _Count = param_3;
      }
      _strncpy(pcVar2,param_2,_Count);
      pcVar2[_Count] = '\0';
      iVar1 = FUN_0043ba40(pcVar2);
      *(int *)(param_1 + 5) = iVar1;
      return 0;
    }
    if (*(int *)(param_1 + 3) == 0) {
      *param_1 = 0x66;
      param_1[1] = -1;
      param_1[2] = -1;
      pcVar2 = (char *)FUN_0043b950(param_3 + 1);
      *(char **)(param_1 + 7) = pcVar2;
      _strncpy(pcVar2,param_2,param_3);
      pcVar2[param_3] = '\0';
      iVar1 = FUN_0043ba40(pcVar2);
      *(int *)(param_1 + 5) = iVar1;
      *(size_t *)(param_1 + 3) = param_3 + 1;
      return 0;
    }
  }
  if (*param_1 != 0x6a) {
    return 0x60002;
  }
  *param_1 = 0x66;
  param_1[1] = -1;
  param_1[2] = -1;
  pcVar2 = (char *)FUN_0043b950(param_3 + 1);
  *(char **)(param_1 + 7) = pcVar2;
  _strncpy(pcVar2,param_2,param_3);
  pcVar2[param_3] = '\0';
  iVar1 = FUN_0043ba40(pcVar2);
  *(int *)(param_1 + 5) = iVar1;
  *(size_t *)(param_1 + 3) = param_3 + 1;
  return 0;
}


