
/* ==== ___init_ctype @ 1202fca0 ==== 
 * signature: int __cdecl ___init_ctype(threadlocinfo * _LocInfo)
 * body: 1202fca0-1202ff4b
 * note: Library Function - Single Match  ___init_ctype  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 1998 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  BOOL BVar5;
  uint uVar6;
  undefined1 *puVar7;
  LPCWSTR pWVar8;
  undefined2 *puVar9;
  BYTE *pBVar10;
  void *unaff_EBP;
  undefined1 *_DWInfoType;
  LPCWSTR local_18;
  _cpinfo local_14;
  
  _DWInfoType = (undefined1 *)0x0;
  local_18 = (LPCWSTR)0x0;
  if (DAT_12038558 == 0) {
    PTR_DAT_120381c0 = &DAT_120381ca;
    PTR_DAT_120381c4 = &DAT_120381ca;
    FUN_1202c7c0(DAT_12038b1c);
    FUN_1202c7c0(DAT_12038b20);
    DAT_12038b1c = (undefined2 *)0x0;
    DAT_12038b20 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_12038568 != 0) ||
     (iVar2 = ___getlocaleinfo((_locale_t)0x0,(uint)DAT_12038b3c,(LPCWSTR)0xb,0x12038568,unaff_EBP),
     puVar4 = (undefined2 *)local_14.MaxCharSize, puVar3 = (undefined2 *)local_14.MaxCharSize,
     iVar2 == 0)) {
    puVar3 = (undefined2 *)FUN_1202c7e0(0x202);
    puVar4 = (undefined2 *)FUN_1202c7e0(0x202);
    _DWInfoType = (undefined1 *)FUN_1202c7e0(0x101);
    local_18 = (LPCWSTR)FUN_1202c7e0(0x202);
    if ((puVar3 != (undefined2 *)0x0) &&
       (((puVar4 != (undefined2 *)0x0 && (_DWInfoType != (undefined1 *)0x0)) &&
        (local_18 != (LPCWSTR)0x0)))) {
      iVar2 = 0;
      puVar7 = _DWInfoType;
      do {
        *puVar7 = (char)iVar2;
        puVar7 = puVar7 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x100);
      BVar5 = GetCPInfo(DAT_12038568,&local_14);
      if ((BVar5 != 0) && (local_14.MaxCharSize < (undefined2 *)0x3)) {
        DAT_120381b4 = local_14.MaxCharSize & 0xffff;
        if (1 < DAT_120381b4) {
          pBVar10 = local_14.LeadByte;
          bVar1 = local_14.LeadByte[0];
          while ((bVar1 != 0 && (pBVar10[1] != 0))) {
            uVar6 = (uint)*pBVar10;
            if (uVar6 <= pBVar10[1]) {
              do {
                _DWInfoType[uVar6] = 0;
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 <= (int)(uint)pBVar10[1]);
            }
            pBVar10 = pBVar10 + 2;
            bVar1 = *pBVar10;
          }
        }
        BVar5 = ___crtGetStringTypeA
                          ((_locale_t)0x1,(DWORD)_DWInfoType,(LPCSTR)0x100,(int)(puVar3 + 1),
                           (LPWORD)0x0,0,(BOOL)unaff_EBP);
        if (BVar5 != 0) {
          *puVar3 = 0;
          iVar2 = 0;
          pWVar8 = local_18;
          do {
            *pWVar8 = (WCHAR)iVar2;
            pWVar8 = pWVar8 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x100);
          BVar5 = ___crtGetStringTypeW(1,local_18,0x100,puVar4 + 1,0,0);
          if (BVar5 != 0) {
            *puVar4 = 0;
            if (1 < (int)DAT_120381b4) {
              pBVar10 = local_14.LeadByte;
              while ((local_14.LeadByte[0] != 0 && (pBVar10[1] != 0))) {
                uVar6 = (uint)*pBVar10;
                if (uVar6 <= pBVar10[1]) {
                  puVar9 = puVar3 + uVar6 + 1;
                  do {
                    *puVar9 = 0x8000;
                    puVar9 = puVar9 + 1;
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 <= (int)(uint)pBVar10[1]);
                }
                pBVar10 = pBVar10 + 2;
                local_14.LeadByte[0] = *pBVar10;
              }
            }
            PTR_DAT_120381c0 = (undefined *)(puVar3 + 1);
            PTR_DAT_120381c4 = (undefined *)(puVar4 + 1);
            if (DAT_12038b1c != (LPVOID)0x0) {
              FUN_1202c7c0(DAT_12038b1c);
            }
            DAT_12038b1c = puVar3;
            if (DAT_12038b20 != (LPVOID)0x0) {
              FUN_1202c7c0(DAT_12038b20);
            }
            DAT_12038b20 = puVar4;
            FUN_1202c7c0(_DWInfoType);
            FUN_1202c7c0(local_18);
            return 0;
          }
        }
      }
    }
  }
  FUN_1202c7c0(puVar3);
  FUN_1202c7c0(puVar4);
  FUN_1202c7c0(_DWInfoType);
  FUN_1202c7c0(local_18);
  return 1;
}


