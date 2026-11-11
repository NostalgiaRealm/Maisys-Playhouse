
/* ==== write_char @ 00496c40 ==== 
 * signature: undefined __cdecl write_char(uint param_1, FILE * param_2, int * param_3)
 * body: 00496c40-00496c80
 * note: Library Function - Single Match  _write_char  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 1998 Release */

void __cdecl write_char(uint param_1,FILE *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2->_cnt + -1;
  param_2->_cnt = iVar1;
  if (iVar1 < 0) {
    uVar2 = FUN_00496110(param_1,param_2);
  }
  else {
    *param_2->_ptr = (char)param_1;
    uVar2 = (uint)(byte)*param_2->_ptr;
    param_2->_ptr = param_2->_ptr + 1;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}


