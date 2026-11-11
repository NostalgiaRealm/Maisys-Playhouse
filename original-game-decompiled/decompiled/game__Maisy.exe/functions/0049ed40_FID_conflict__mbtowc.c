
/* ==== FID_conflict:_mbtowc @ 0049ed40 ==== 
 * signature: int __cdecl FID_conflict:_mbtowc(wchar_t * _DstCh, char * _SrcCh, size_t _SrcSizeInBytes)
 * body: 0049ed40-0049ed9a
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
  
  bVar2 = DAT_004e6794 == 0;
  if (bVar2) {
    DAT_004e6798 = DAT_004e6798 + 1;
  }
  else {
    __lock(0x13);
  }
  uVar1 = FUN_0049eda0((LPSTR)_DstCh,(LPCWSTR)_SrcCh,_SrcSizeInBytes);
  if (!bVar2) {
    FUN_00493e20(0x13);
    return uVar1;
  }
  DAT_004e6798 = DAT_004e6798 + -1;
  return uVar1;
}


