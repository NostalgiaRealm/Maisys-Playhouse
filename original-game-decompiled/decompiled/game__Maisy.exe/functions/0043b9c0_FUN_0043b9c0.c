
/* ==== FUN_0043b9c0 @ 0043b9c0 ==== 
 * signature: char * __cdecl FUN_0043b9c0(char * param_1, size_t param_2)
 * body: 0043b9c0-0043ba13
 */

char * __cdecl FUN_0043b9c0(char *param_1,size_t param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _Count;
  
  _Count = 0;
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      iVar2 = _Count - param_2;
      if ((int)param_2 <= (int)_Count) goto LAB_0043b9eb;
      pcVar3 = pcVar3 + 1;
      _Count = _Count + 1;
      cVar1 = *pcVar3;
    }
  }
  iVar2 = _Count - param_2;
LAB_0043b9eb:
  if (_Count != param_2 && SBORROW4(_Count,param_2) == iVar2 < 0) {
    _Count = param_2;
  }
  pcVar3 = (char *)FUN_0043b950(_Count);
  if (param_1 != (char *)0x0) {
    _strncpy(pcVar3,param_1,_Count);
  }
  pcVar3[_Count] = '\0';
  return pcVar3;
}


