
/* ==== FUN_00496110 @ 00496110 ==== 
 * signature: uint __cdecl FUN_00496110(uint param_1, FILE * param_2)
 * body: 00496110-0049625c
 */

uint __cdecl FUN_00496110(uint param_1,FILE *param_2)

{
  uint _FileHandle;
  FILE *_File;
  byte bVar1;
  undefined3 extraout_var;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  
  _File = param_2;
  _FileHandle = param_2->_file;
  uVar3 = param_2->_flag;
  if (((uVar3 & 0x82) == 0) || ((uVar3 & 0x40) != 0)) {
    param_2->_flag = uVar3 | 0x20;
    return 0xffffffff;
  }
  if ((uVar3 & 1) != 0) {
    param_2->_cnt = 0;
    if ((param_2->_flag & 0x10U) == 0) {
      param_2->_flag = param_2->_flag | 0x20;
      return 0xffffffff;
    }
    param_2->_ptr = param_2->_base;
    param_2->_flag = param_2->_flag & 0xfffffffe;
  }
  uVar3 = param_2->_flag;
  uVar4 = 0;
  param_2->_flag = uVar3 | 2;
  param_2->_flag = uVar3 & 0xffffffef | 2;
  param_2->_cnt = 0;
  if ((param_2->_flag & 0x10cU) == 0) {
    if ((param_2 == (FILE *)&DAT_004df130) || (param_2 == (FILE *)&DAT_004df150)) {
      bVar1 = FUN_0049e720(_FileHandle);
      if (CONCAT31(extraout_var,bVar1) != 0) goto LAB_00496194;
    }
    __getbuf(_File);
  }
LAB_00496194:
  if ((_File->_flag & 0x108U) == 0) {
    uVar3 = 1;
    uVar4 = __write(_FileHandle,&param_1,1);
  }
  else {
    uVar3 = (int)_File->_ptr - (int)_File->_base;
    _File->_ptr = _File->_base + 1;
    _File->_cnt = _File->_bufsiz + -1;
    if ((int)uVar3 < 1) {
      puVar2 = &DAT_004defd0;
      if (_FileHandle != 0xffffffff) {
        puVar2 = (undefined *)
                 (*(int *)((int)&DAT_004e6690 + ((int)(_FileHandle & 0xffffffe7) >> 3)) +
                 (_FileHandle & 0x1f) * 0x24);
      }
      if ((puVar2[4] & 0x20) != 0) {
        __write(_FileHandle,(void *)0x0,2);
      }
    }
    else {
      uVar4 = __write(_FileHandle,_File->_base,uVar3);
    }
    *_File->_base = (char)param_1;
  }
  if (uVar4 != uVar3) {
    _File->_flag = _File->_flag | 0x20;
    return 0xffffffff;
  }
  return param_1 & 0xff;
}


