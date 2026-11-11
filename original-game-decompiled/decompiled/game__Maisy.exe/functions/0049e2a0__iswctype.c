
/* ==== _iswctype @ 0049e2a0 ==== 
 * signature: int __cdecl _iswctype(wint_t _C, wctype_t _Type)
 * body: 0049e2a0-0049e312
 * note: Library Function - Single Match  _iswctype  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 1998 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  BOOL BVar1;
  undefined2 in_stack_00000006;
  ushort local_2;
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    local_2 = *(ushort *)(PTR_DAT_004de6c4 + (uint)_C * 2);
LAB_0049e2fc:
    return (uint)(local_2 & _Type);
  }
  if (DAT_004de6a0 != 0) {
    BVar1 = ___crtGetStringTypeW(1,(LPCWSTR)&_C,1,&local_2,0,0);
    if (BVar1 != 0) goto LAB_0049e2fc;
  }
  return 0;
}


