
/* ==== FUN_004a1290 @ 004a1290 ==== 
 * signature: uint __cdecl FUN_004a1290(HANDLE param_1, uint param_2)
 * body: 004a1290-004a1343
 */

uint __cdecl FUN_004a1290(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint _Filehandle;
  int *piVar2;
  ulong *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((param_2 & 8) != 0) {
    bVar4 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    bVar4 = bVar4 | 0x80;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
    return 0xffffffff;
  }
  if (DVar1 == 2) {
    bVar4 = bVar4 | 0x40;
  }
  else if (DVar1 == 3) {
    bVar4 = bVar4 | 8;
  }
  _Filehandle = __alloc_osfhnd();
  if (_Filehandle == 0xffffffff) {
    piVar2 = FUN_0048f9d0();
    *piVar2 = 0x18;
    puVar3 = FUN_0048f9e0();
    *puVar3 = 0;
    return 0xffffffff;
  }
  FUN_004a10f0(_Filehandle,param_1);
  *(byte *)(*(int *)((int)&DAT_004e6690 + ((int)(_Filehandle & 0xffffffe7) >> 3)) + 4 +
           (_Filehandle & 0x1f) * 0x24) = bVar4 | 1;
  __unlock_fhandle(_Filehandle);
  return _Filehandle;
}


