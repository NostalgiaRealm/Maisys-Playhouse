
/* ==== ___getlocaleinfo @ 14020480 ==== 
 * signature: int __cdecl ___getlocaleinfo(_locale_t _Locale, int _Lc_type, LPCWSTR _LocaleName, LCTYPE _FieldType, void * _Address)
 * body: 14020480-14020635
 * note: Library Function - Single Match  ___getlocaleinfo  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 1998 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  bool bVar1;
  SIZE_T _Count;
  DWORD DVar2;
  LPSTR _LpLCData;
  byte *pbVar3;
  char *_Dest;
  int iVar4;
  uint uVar5;
  byte local_80 [128];
  
  if (_Locale != (_locale_t)0x1) {
    if (_Locale != (_locale_t)0x0) {
      return -1;
    }
    iVar4 = ___crtGetLocaleInfoW(_Lc_type,(LCTYPE)_LocaleName,(LPWSTR)&DAT_14028978,4,0);
    if (iVar4 != 0) {
      pbVar3 = &DAT_14028978;
      *(undefined1 *)_FieldType = 0;
      while( true ) {
        local_80[0] = *pbVar3;
        if (DAT_1402707c < 2) {
          uVar5 = *(ushort *)(PTR_DAT_14026e70 + (uint)local_80[0] * 2) & 4;
        }
        else {
          uVar5 = __isctype((uint)local_80[0],4);
        }
        if (uVar5 == 0) break;
        pbVar3 = pbVar3 + 2;
        *(byte *)_FieldType = local_80[0] + *(char *)_FieldType * '\n' + -0x30;
        if (&DAT_14028980 <= pbVar3) {
          return 0;
        }
      }
      return 0;
    }
    return -1;
  }
  pbVar3 = local_80;
  bVar1 = false;
  _Count = ___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,(LCTYPE)local_80,(LPSTR)0x80,0);
  if (_Count == 0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) ||
        (_LpLCData = (LPSTR)___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,0,(LPSTR)0x0,0),
        _LpLCData == (LPSTR)0x0)) ||
       (pbVar3 = (byte *)FUN_1401def0((SIZE_T)_LpLCData), pbVar3 == (byte *)0x0)) goto LAB_14020557;
    bVar1 = true;
    _Count = ___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,(LCTYPE)pbVar3,_LpLCData,0);
    if (_Count == 0) goto LAB_14020557;
  }
  _Dest = (char *)FUN_1401def0(_Count);
  *(char **)_FieldType = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,(char *)pbVar3,_Count);
    if (bVar1) {
      FUN_1401dd10(pbVar3);
    }
    return 0;
  }
LAB_14020557:
  if (bVar1) {
    FUN_1401dd10(pbVar3);
  }
  return -1;
}


