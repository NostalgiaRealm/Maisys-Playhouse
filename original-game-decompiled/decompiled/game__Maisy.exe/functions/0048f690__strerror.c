
/* ==== _strerror @ 0048f690 ==== 
 * signature: char * __cdecl _strerror(char * _ErrMsg)
 * body: 0048f690-0048f6fa
 * note: Library Function - Single Match  _strerror  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strerror
   
   Library: Visual Studio 1998 Release */

char * __cdecl _strerror(char *_ErrMsg)

{
  char cVar1;
  _ptiddata p_Var2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  p_Var2 = __getptd();
  if (p_Var2->_errmsg == (char *)0x0) {
    pcVar3 = (char *)FUN_00490210(0x86);
    pcVar6 = &DAT_004e5400;
    p_Var2->_errmsg = pcVar3;
    if (pcVar3 == (char *)0x0) goto LAB_0048f6bb;
  }
  pcVar6 = p_Var2->_errmsg;
LAB_0048f6bb:
  if (((int)_ErrMsg < 0) || ((int)DAT_004de998 <= (int)_ErrMsg)) {
    _ErrMsg = DAT_004de998;
  }
  uVar4 = 0xffffffff;
  pcVar3 = (&PTR_s_No_error_004de8e8)[(int)_ErrMsg];
  do {
    pcVar7 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar7 + -uVar4;
  pcVar7 = pcVar6;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return pcVar6;
}


