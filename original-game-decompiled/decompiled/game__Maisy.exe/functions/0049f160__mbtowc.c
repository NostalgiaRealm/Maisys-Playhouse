
/* ==== _mbtowc @ 0049f160 ==== 
 * signature: int __cdecl _mbtowc(wchar_t * _DstCh, char * _SrcCh, size_t _SrcSizeInBytes)
 * body: 0049f160-0049f1ba
 * note: Library Function - Single Match  _mbtowc  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 1998 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

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
  uVar1 = __mbtowc_lk(_DstCh,(byte *)_SrcCh,_SrcSizeInBytes);
  if (!bVar2) {
    FUN_00493e20(0x13);
    return uVar1;
  }
  DAT_004e6798 = DAT_004e6798 + -1;
  return uVar1;
}


