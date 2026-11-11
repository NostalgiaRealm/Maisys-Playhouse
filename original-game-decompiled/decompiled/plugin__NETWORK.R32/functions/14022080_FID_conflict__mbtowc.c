
/* ==== FID_conflict:_mbtowc @ 14022080 ==== 
 * signature: int __cdecl FID_conflict:_mbtowc(wchar_t * _DstCh, char * _SrcCh, size_t _SrcSizeInBytes)
 * body: 14022080-140220da
 * note: Library Function - Multiple Matches With Different Base Names  _mbstowcs  _mbtowc  _wcstombs  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    _mbstowcs
    _mbtowc
    _wcstombs
   
   Library: Visual Studio 1998 Release */

int __cdecl FID_conflict__mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = DAT_14029f80 == 0;
  if (bVar2) {
    DAT_14029f84 = DAT_14029f84 + 1;
  }
  else {
    __lock(0x13);
  }
  uVar1 = FUN_140220e0((LPSTR)_DstCh,(LPCWSTR)_SrcCh,_SrcSizeInBytes);
  if (!bVar2) {
    FUN_1401a650(0x13);
    return uVar1;
  }
  DAT_14029f84 = DAT_14029f84 + -1;
  return uVar1;
}


