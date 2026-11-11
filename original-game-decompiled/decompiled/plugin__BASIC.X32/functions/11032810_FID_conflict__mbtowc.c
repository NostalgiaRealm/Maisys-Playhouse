
/* ==== FID_conflict:_mbtowc @ 11032810 ==== 
 * signature: int __cdecl FID_conflict:_mbtowc(wchar_t * _DstCh, char * _SrcCh, size_t _SrcSizeInBytes)
 * body: 11032810-1103286a
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
  
  bVar2 = DAT_11039a14 == 0;
  if (bVar2) {
    DAT_11039a18 = DAT_11039a18 + 1;
  }
  else {
    __lock(0x13);
  }
  uVar1 = FUN_11032870((LPSTR)_DstCh,(LPCWSTR)_SrcCh,_SrcSizeInBytes);
  if (!bVar2) {
    FUN_1102b240(0x13);
    return uVar1;
  }
  DAT_11039a18 = DAT_11039a18 + -1;
  return uVar1;
}


