
/* ==== FUN_004bbb86 @ 004bbb86 ==== 
 * signature: undefined __stdcall FUN_004bbb86(void)
 * body: 004bbb86-004bbc03;004bbc0c-004bbc5d;004bbc71-004bbcfe
 */

void FUN_004bbb86(void)

{
  DWORD *pDVar1;
  undefined4 *lpTlsValue;
  HLOCAL pvVar2;
  DWORD *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  if (*extraout_ECX == 0xffffffff) {
    EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 8));
    lpTlsValue = (undefined4 *)extraout_ECX[1];
  }
  else {
    lpTlsValue = TlsGetValue(*extraout_ECX);
  }
  if ((lpTlsValue == (undefined4 *)0x0) || ((int)lpTlsValue[2] <= *(int *)(unaff_EBP + 8))) {
    if (*(int *)(unaff_EBP + 0xc) == 0) goto LAB_004bbcde;
    if (lpTlsValue == (undefined4 *)0x0) {
      lpTlsValue = CNoTrackObject::operator_new(0x10);
      *(undefined4 **)(unaff_EBP + -0x10) = lpTlsValue;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (lpTlsValue == (undefined4 *)0x0) {
        lpTlsValue = (undefined4 *)0x0;
      }
      else {
        *lpTlsValue = &PTR_FUN_004caff4;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *lpTlsValue = &PTR_FUN_004cd10c;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      lpTlsValue[2] = 0;
      lpTlsValue[3] = 0;
      if (*extraout_ECX == 0xffffffff) {
        EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 8));
      }
      CSimpleList::AddHead((CSimpleList *)(extraout_ECX + 6),lpTlsValue);
      if (*extraout_ECX == 0xffffffff) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 8));
      }
    }
    pDVar1 = extraout_ECX + 4;
    if ((HLOCAL)lpTlsValue[3] == (HLOCAL)0x0) {
      pvVar2 = LocalAlloc(0,*pDVar1 << 2);
    }
    else {
      pvVar2 = LocalReAlloc((HLOCAL)lpTlsValue[3],*pDVar1 << 2,2);
    }
    lpTlsValue[3] = pvVar2;
    if (lpTlsValue[3] == 0) {
      if (*extraout_ECX == 0xffffffff) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 8));
      }
      FUN_004a3538();
    }
    _memset((void *)(lpTlsValue[2] * 4 + lpTlsValue[3]),0,(*pDVar1 - lpTlsValue[2]) * 4);
    lpTlsValue[2] = *pDVar1;
    if (*extraout_ECX == 0xffffffff) {
      extraout_ECX[1] = (DWORD)lpTlsValue;
    }
    else {
      TlsSetValue(*extraout_ECX,lpTlsValue);
    }
  }
  *(undefined4 *)(lpTlsValue[3] + *(int *)(unaff_EBP + 8) * 4) = *(undefined4 *)(unaff_EBP + 0xc);
LAB_004bbcde:
  if (*extraout_ECX == 0xffffffff) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 8));
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


