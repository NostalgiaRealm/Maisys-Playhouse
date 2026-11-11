/* Ghidra 12.1.4 generated C-like pseudocode for CURSORS.C32.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== _WEP @ 15001000 ==== 
 * signature: undefined4 __stdcall _WEP(void)
 * body: 15001000-15001007
 */

undefined4 _WEP(void)

{
                    /* 0x1000  1  _WEP */
  return 1;
}



/* ==== FUN_15001010 @ 15001010 ==== 
 * signature: undefined4 __stdcall FUN_15001010(undefined4 param_1, int param_2)
 * body: 15001010-1500115c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_15001010(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == 1) {
    DAT_1500504c = GetVersion();
    if (DAT_15005044 == 0) {
      if (((char)DAT_1500504c == '\x03') && ((DAT_1500504c & 0x80000000) != 0)) {
        FUN_15002020(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          FUN_15002020(1);
        }
      }
    }
    FUN_150015a0();
    _DAT_15005058 = DAT_1500504c >> 8 & 0xff;
    _DAT_15005054 = DAT_1500504c & 0xff;
    DAT_15005030 = DAT_15005030 + 1;
    DAT_1500504c = DAT_1500504c >> 0x10;
    _DAT_15005050 = _DAT_15005054 * 0x100 + _DAT_15005058;
    iVar2 = __mtinit();
    if (iVar2 == 0) {
      FUN_150015c0();
      return 0;
    }
    DAT_15006b64 = GetCommandLineA();
    DAT_15005034 = FUN_15001e80();
    if ((DAT_15006b64 != (LPSTR)0x0) && (DAT_15005034 != (LPSTR)0x0)) {
      FUN_150015d0();
      ___initmbctable();
      __setargv();
      FUN_15001810();
      __cinit(unaff_retaddr);
      return 1;
    }
    FUN_150015c0();
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 3) {
      __freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_15005030) {
    DAT_15005030 = DAT_15005030 + -1;
    if (DAT_15005084 == 0) {
      FUN_150012c0();
    }
    __ioterm();
    __mtterm();
    FUN_150015c0();
    return 1;
  }
  return 0;
}



/* ==== entry @ 15001160 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 15001160-15001229
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 1) {
    DAT_15005030 = DAT_15005030 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_15005030 < 1) {
      return 0;
    }
    DAT_15005030 = DAT_15005030 + -1;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_15006b68 != (code *)0x0) {
      iVar2 = (*DAT_15006b68)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_15001010(param_1,param_2);
      goto LAB_150011d5;
    }
LAB_150011e3:
    if (iVar1 != 0) goto LAB_150011f6;
  }
  else {
LAB_150011d5:
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_15002030();
      goto LAB_150011e3;
    }
  }
  if (param_2 == 1) {
    __mtterm();
    FUN_150015c0();
  }
LAB_150011f6:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_15001010(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_15006b68 != (code *)0x0)) {
      iVar1 = (*DAT_15006b68)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}



/* ==== __amsg_exit @ 15001230 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 15001230-15001263
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 15001264-15001267
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_15005040 == 1) || ((DAT_15005040 == 0 && (DAT_15005044 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_15002080(param_1);
  (*(code *)PTR___exit_1500503c)(0xff);
  return;
}



/* ==== __cinit @ 15001270 ==== 
 * signature: int __cdecl __cinit(int param_1)
 * body: 15001270-1500129f
 * note: Library Function - Single Match  __cinit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 1998 Release */

int __cdecl __cinit(int param_1)

{
  int iVar1;
  
  if (DAT_15006b60 != (code *)0x0) {
    (*DAT_15006b60)();
  }
  __initterm((undefined4 *)&DAT_15005008,(undefined4 *)&DAT_15005010);
  iVar1 = __initterm((undefined4 *)&DAT_15005000,(undefined4 *)&DAT_15005004);
  return iVar1;
}



/* ==== __exit @ 150012a0 ==== 
 * signature: noreturn void __cdecl __exit(int _Code)
 * body: 150012a0-150012b1
 * note: Library Function - Single Match  __exit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __exit(int _Code)

{
  FUN_150012d0(_Code,1,0);
  return;
}



/* ==== FUN_150012c0 @ 150012c0 ==== 
 * signature: undefined __stdcall FUN_150012c0(void)
 * body: 150012c0-150012ce
 */

void FUN_150012c0(void)

{
  FUN_150012d0(0,0,1);
  return;
}



/* ==== FUN_150012d0 @ 150012d0 ==== 
 * signature: undefined __cdecl FUN_150012d0(UINT param_1, int param_2, int param_3)
 * body: 150012d0-1500137c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1500137d-15001380
 */

void __cdecl FUN_150012d0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_15001390();
  if (DAT_15005088 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_15005084 = 1;
  DAT_15005080 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_15006b5c != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_15006b58 + -4), DAT_15006b5c <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_15006b5c <= puVar1);
    }
    __initterm((undefined4 *)&DAT_15005014,(undefined4 *)&DAT_1500501c);
  }
  __initterm((undefined4 *)&DAT_15005020,(undefined4 *)&DAT_15005024);
  if (param_3 != 0) {
    FUN_150013a0();
    return;
  }
  DAT_15005088 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ==== FUN_15001390 @ 15001390 ==== 
 * signature: undefined __stdcall FUN_15001390(void)
 * body: 15001390-1500139a
 */

void FUN_15001390(void)

{
  __lock(0xd);
  return;
}



/* ==== FUN_150013a0 @ 150013a0 ==== 
 * signature: undefined __stdcall FUN_150013a0(void)
 * body: 150013a0-150013aa
 */

void FUN_150013a0(void)

{
  FUN_15002380(0xd);
  return;
}



/* ==== __initterm @ 150013b0 ==== 
 * signature: undefined __cdecl __initterm(undefined4 * param_1, undefined4 * param_2)
 * body: 150013b0-150013cf
 * note: Library Function - Single Match  __initterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ==== __mtinit @ 150013d0 ==== 
 * signature: int __cdecl __mtinit(void)
 * body: 150013d0-1500142f
 * note: Library Function - Single Match  __mtinit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinit(void)

{
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_ESI;
  
  __mtinitlocks();
  DAT_1500508c = TlsAlloc();
  if (DAT_1500508c == 0xffffffff) {
    return 0;
  }
  _Ptd = FUN_15002480(1,0x74);
  if (_Ptd != (_ptiddata)0x0) {
    BVar1 = TlsSetValue(DAT_1500508c,_Ptd);
    if (BVar1 != 0) {
      __initptd(_Ptd,unaff_ESI);
      DVar2 = GetCurrentThreadId();
      _Ptd->_tid = DVar2;
      _Ptd->_thandle = 0xffffffff;
      return 1;
    }
  }
  return 0;
}



/* ==== __mtterm @ 15001430 ==== 
 * signature: void __cdecl __mtterm(void)
 * body: 15001430-15001450
 * note: Library Function - Single Match  __mtterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtterm(void)

{
  __mtdeletelocks();
  if (DAT_1500508c != 0xffffffff) {
    TlsFree(DAT_1500508c);
    DAT_1500508c = 0xffffffff;
  }
  return;
}



/* ==== __initptd @ 15001460 ==== 
 * signature: void __cdecl __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
 * body: 15001460-15001472
 * note: Library Function - Single Match  __initptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  *(undefined **)(_Ptd->_con_ch_buf + 4) = &DAT_15005430;
  _Ptd->_holdrand = 1;
  return;
}



/* ==== __getptd @ 15001480 ==== 
 * signature: _ptiddata __cdecl __getptd(void)
 * body: 15001480-150014ee
 * note: Library Function - Single Match  __getptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 1998 Release */

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_EDI;
  
  dwErrCode = GetLastError();
  _Ptd = TlsGetValue(DAT_1500508c);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = FUN_15002480(1,0x74);
    if (_Ptd != (_ptiddata)0x0) {
      BVar1 = TlsSetValue(DAT_1500508c,_Ptd);
      if (BVar1 != 0) {
        __initptd(_Ptd,unaff_EDI);
        DVar2 = GetCurrentThreadId();
        _Ptd->_tid = DVar2;
        _Ptd->_thandle = 0xffffffff;
        goto LAB_150014e3;
      }
    }
    __amsg_exit(0x10);
  }
LAB_150014e3:
  SetLastError(dwErrCode);
  return _Ptd;
}



/* ==== __freeptd @ 150014f0 ==== 
 * signature: void __cdecl __freeptd(_ptiddata _Ptd)
 * body: 150014f0-15001590
 * note: Library Function - Single Match  __freeptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  if (DAT_1500508c != 0xffffffff) {
    if ((_Ptd != (_ptiddata)0x0) || (_Ptd = TlsGetValue(DAT_1500508c), _Ptd != (_ptiddata)0x0)) {
      if (_Ptd->_errmsg != (char *)0x0) {
        FUN_150024e0(_Ptd->_errmsg);
      }
      if (_Ptd->_werrmsg != (wchar_t *)0x0) {
        FUN_150024e0(_Ptd->_werrmsg);
      }
      if (_Ptd->_wnamebuf0 != (wchar_t *)0x0) {
        FUN_150024e0(_Ptd->_wnamebuf0);
      }
      if (_Ptd->_wnamebuf1 != (wchar_t *)0x0) {
        FUN_150024e0(_Ptd->_wnamebuf1);
      }
      if (_Ptd->_wasctimebuf != (wchar_t *)0x0) {
        FUN_150024e0(_Ptd->_wasctimebuf);
      }
      if (_Ptd->_gmtimebuf != (LPVOID)0x0) {
        FUN_150024e0(_Ptd->_gmtimebuf);
      }
      FUN_150024e0(_Ptd);
    }
    TlsSetValue(DAT_1500508c,(LPVOID)0x0);
    return;
  }
  return;
}



/* ==== FUN_150015a0 @ 150015a0 ==== 
 * signature: undefined __stdcall FUN_150015a0(void)
 * body: 150015a0-150015b4
 */

void FUN_150015a0(void)

{
  DAT_15006b54 = HeapCreate(0,0x1000,0);
  return;
}



/* ==== FUN_150015c0 @ 150015c0 ==== 
 * signature: undefined __stdcall FUN_150015c0(void)
 * body: 150015c0-150015cc
 */

void FUN_150015c0(void)

{
  HeapDestroy(DAT_15006b54);
  return;
}



/* ==== FUN_150015d0 @ 150015d0 ==== 
 * signature: undefined __stdcall FUN_150015d0(void)
 * body: 150015d0-150017a9
 */

void FUN_150015d0(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  HANDLE hFile;
  byte *pbVar3;
  UINT UVar4;
  UINT UVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  UINT *pUVar10;
  int iVar11;
  _STARTUPINFOA local_44;
  
  puVar1 = (undefined4 *)FUN_15002500(0x480);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_15006b50 = 0x20;
  DAT_15006a50 = puVar1;
  if (puVar1 < puVar1 + 0x120) {
    do {
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar6 = puVar1 + 9;
      *puVar1 = 0xffffffff;
      *(undefined1 *)((int)puVar1 + 5) = 10;
      puVar1[2] = 0;
      puVar1 = puVar6;
    } while (puVar6 < DAT_15006a50 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UVar4 = *(UINT *)local_44.lpReserved2;
    pUVar10 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar3 = (byte *)((int)pUVar10 + UVar4);
    if (0x7ff < (int)UVar4) {
      UVar4 = 0x800;
    }
    UVar5 = UVar4;
    if ((int)DAT_15006b50 < (int)UVar4) {
      piVar7 = &DAT_15006a54;
      do {
        puVar1 = (undefined4 *)FUN_15002500(0x480);
        UVar5 = DAT_15006b50;
        if (puVar1 == (undefined4 *)0x0) break;
        *piVar7 = (int)puVar1;
        DAT_15006b50 = DAT_15006b50 + 0x20;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(undefined1 *)(puVar1 + 1) = 0;
            puVar6 = puVar1 + 9;
            *puVar1 = 0xffffffff;
            *(undefined1 *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar6;
          } while (puVar6 < (undefined4 *)(*piVar7 + 0x480));
        }
        piVar7 = piVar7 + 1;
        UVar5 = UVar4;
      } while ((int)DAT_15006b50 < (int)UVar4);
    }
    uVar8 = 0;
    if (0 < (int)UVar5) {
      do {
        if (((*(HANDLE *)pbVar3 != (HANDLE)0xffffffff) && ((*pUVar10 & 1) != 0)) &&
           (DVar2 = GetFileType(*(HANDLE *)pbVar3), DVar2 != 0)) {
          puVar1 = (undefined4 *)
                   ((uVar8 & 0x1f) * 0x24 +
                   *(int *)((int)&DAT_15006a50 + ((int)(uVar8 & 0xffffffe7) >> 3)));
          *puVar1 = *(undefined4 *)pbVar3;
          *(byte *)(puVar1 + 1) = (byte)*pUVar10;
        }
        uVar8 = uVar8 + 1;
        pUVar10 = (UINT *)((int)pUVar10 + 1);
        pbVar3 = pbVar3 + 4;
      } while ((int)uVar8 < (int)UVar5);
    }
  }
  iVar9 = 0;
  iVar11 = 0;
  do {
    piVar7 = (int *)((int)DAT_15006a50 + iVar9);
    if (*piVar7 == -1) {
      DVar2 = 0xfffffff6;
      *(undefined1 *)(piVar7 + 1) = 0x81;
      if (iVar9 != 0) {
        DVar2 = (iVar11 == 1) - 0xc;
      }
      hFile = GetStdHandle(DVar2);
      if ((hFile == (HANDLE)0xffffffff) || (DVar2 = GetFileType(hFile), DVar2 == 0)) {
        *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
      }
      else {
        *piVar7 = (int)hFile;
        if ((DVar2 & 0xff) == 2) {
          *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
        }
        else if ((DVar2 & 0xff) == 3) {
          *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 8;
        }
      }
    }
    else {
      *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x80;
    }
    iVar9 = iVar9 + 0x24;
    iVar11 = iVar11 + 1;
  } while (iVar9 < 0x6c);
  SetHandleCount(DAT_15006b50);
  return;
}



/* ==== __ioterm @ 150017b0 ==== 
 * signature: void __cdecl __ioterm(void)
 * body: 150017b0-15001804
 * note: Library Function - Single Match  __ioterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = &DAT_15006a50;
  do {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if (uVar1 < uVar1 + 0x480) {
        do {
          if (*(int *)(uVar1 + 8) != 0) {
            DeleteCriticalSection((LPCRITICAL_SECTION)(uVar1 + 0xc));
          }
          uVar1 = uVar1 + 0x24;
        } while (uVar1 < *puVar2 + 0x480);
      }
      FUN_150024e0((LPVOID)*puVar2);
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_15006b50);
  return;
}



/* ==== FUN_15001810 @ 15001810 ==== 
 * signature: undefined __stdcall FUN_15001810(void)
 * body: 15001810-150018eb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_15001810(void)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar6 = 0;
  cVar1 = *DAT_15005034;
  pcVar7 = DAT_15005034;
  while (cVar1 != '\0') {
    if (*pcVar7 != '=') {
      iVar6 = iVar6 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + ~uVar3;
    cVar1 = *pcVar7;
  }
  piVar2 = (int *)FUN_15002500(iVar6 * 4 + 4);
  _DAT_15005068 = piVar2;
  if (piVar2 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_15005034;
  pcVar7 = DAT_15005034;
  do {
    if (cVar1 == '\0') {
      FUN_150024e0(DAT_15005034);
      *piVar2 = 0;
      return;
    }
    uVar3 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (*pcVar7 != '=') {
      iVar6 = FUN_15002500(~uVar3);
      *piVar2 = iVar6;
      if (iVar6 == 0) {
        __amsg_exit(9);
      }
      uVar4 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar8 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = (char *)*piVar2;
      piVar2 = piVar2 + 1;
      pcVar8 = pcVar8 + -uVar4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    pcVar7 = pcVar7 + ~uVar3;
    cVar1 = *pcVar7;
  } while( true );
}



/* ==== __setargv @ 150018f0 ==== 
 * signature: int __cdecl __setargv(void)
 * body: 150018f0-1500198a
 * note: Library Function - Single Match  __setargv  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 1998 Release */

int __cdecl __setargv(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_150058d0,0x104);
  _DAT_15005078 = &DAT_150058d0;
  pbVar2 = &DAT_150058d0;
  if (*DAT_15006b64 != 0) {
    pbVar2 = DAT_15006b64;
  }
  FUN_15001990(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_15002500(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_15001990(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_15005060 = puVar1;
  _DAT_1500505c = local_8 + -1;
  return local_8 + -1;
}



/* ==== FUN_15001990 @ 15001990 ==== 
 * signature: undefined __cdecl FUN_15001990(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * body: 15001990-15001b5f
 */

void __cdecl FUN_15001990(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    pbVar4 = param_1 + 1;
    bVar1 = *pbVar4;
    while ((bVar1 != 0x22 && (*pbVar4 != 0))) {
      if (((*(byte *)((int)&DAT_150050c0 + *pbVar4 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        *param_3 = bVar1;
        param_3 = param_3 + 1;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = pbVar4 + 1;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_150050c0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_15001a00;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_15001a00:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar3 = false;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar5 = 0;
      bVar1 = *pbVar4;
      while (bVar1 == 0x5c) {
        pbVar4 = pbVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar1 = *pbVar4;
      }
      if (*pbVar4 == 0x22) {
        pbVar6 = pbVar4;
        if ((uVar5 & 1) == 0) {
          if ((!bVar3) || (pbVar6 = pbVar4 + 1, *pbVar6 != 0x22)) {
            bVar2 = false;
            pbVar6 = pbVar4;
          }
          bVar3 = !bVar3;
        }
        uVar5 = uVar5 >> 1;
        pbVar4 = pbVar6;
      }
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar3 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar2) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_150050c0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_5 = *param_5 + 1;
          goto LAB_15001b2f;
        }
        pbVar6 = param_3;
        if ((*(byte *)((int)&DAT_150050c0 + bVar1 + 1) & 4) != 0) {
          *param_3 = bVar1;
          pbVar4 = pbVar4 + 1;
          pbVar6 = param_3 + 1;
          *param_5 = *param_5 + 1;
        }
        bVar1 = *pbVar4;
        param_3 = pbVar6 + 1;
        pbVar4 = pbVar4 + 1;
        *pbVar6 = bVar1;
        *param_5 = *param_5 + 1;
      }
      else {
LAB_15001b2f:
        pbVar4 = pbVar4 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ==== __setmbcp @ 15001b60 ==== 
 * signature: int __cdecl __setmbcp(int _CodePage)
 * body: 15001b60-15001d82
 * note: Library Function - Single Match  __setmbcp  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 1998 Release */

int __cdecl __setmbcp(int _CodePage)

{
  byte *pbVar1;
  byte bVar2;
  UINT CodePage;
  UINT *pUVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  BYTE *pBVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int local_18;
  _cpinfo local_14;
  
  __lock(0x19);
  CodePage = getSystemCP(_CodePage);
  if (DAT_150051c4 == CodePage) {
    FUN_15002380(0x19);
    return 0;
  }
  if (CodePage == 0) {
    setSBCS();
    FUN_15002380(0x19);
    return 0;
  }
  local_18 = 0;
  pUVar3 = &DAT_150051e8;
  do {
    if (*pUVar3 == CodePage) {
      uVar5 = 0;
      puVar10 = &DAT_150050c0;
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)puVar10 = 0;
      do {
        pbVar9 = &DAT_150051f8 + (local_18 * 6 + uVar5) * 8;
        bVar2 = *pbVar9;
        while ((bVar2 != 0 && (pbVar9[1] != 0))) {
          uVar7 = (uint)*pbVar9;
          if (uVar7 <= pbVar9[1]) {
            bVar2 = (&DAT_150051e0)[uVar5];
            do {
              pbVar1 = (byte *)((int)&DAT_150050c0 + uVar7 + 1);
              *pbVar1 = *pbVar1 | bVar2;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= pbVar9[1]);
          }
          pbVar9 = pbVar9 + 2;
          bVar2 = *pbVar9;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      DAT_150051c4 = CodePage;
      _DAT_150051c8 = _CPtoLCID(CodePage);
      DAT_150051d4 = *(undefined4 *)(&DAT_150051f0 + local_18 * 0x30);
      DAT_150051d0 = *(undefined4 *)(&DAT_150051ec + local_18 * 0x30);
      DAT_150051d8 = *(undefined4 *)(local_18 * 0x30 + 0x150051f4);
      FUN_15002380(0x19);
      return 0;
    }
    pUVar3 = pUVar3 + 0xc;
    local_18 = local_18 + 1;
  } while (pUVar3 < &DAT_150052d8);
  BVar4 = GetCPInfo(CodePage,&local_14);
  if (BVar4 == 1) {
    puVar10 = &DAT_150050c0;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)puVar10 = 0;
    if (local_14.MaxCharSize < 2) {
      _DAT_150051c8 = 0;
      DAT_150051c4 = 0;
    }
    else {
      pBVar8 = local_14.LeadByte;
      while ((local_14.LeadByte[0] != 0 && (pBVar8[1] != 0))) {
        uVar5 = (uint)*pBVar8;
        if (uVar5 <= pBVar8[1]) {
          do {
            pbVar9 = (byte *)((int)&DAT_150050c0 + uVar5 + 1);
            *pbVar9 = *pbVar9 | 4;
            uVar5 = uVar5 + 1;
          } while (uVar5 <= pBVar8[1]);
        }
        pBVar8 = pBVar8 + 2;
        local_14.LeadByte[0] = *pBVar8;
      }
      uVar5 = 1;
      do {
        pbVar9 = (byte *)((int)&DAT_150050c0 + uVar5 + 1);
        *pbVar9 = *pbVar9 | 8;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xff);
      DAT_150051c4 = CodePage;
      _DAT_150051c8 = _CPtoLCID(CodePage);
    }
    DAT_150051d0 = 0;
    DAT_150051d4 = 0;
    DAT_150051d8 = 0;
    FUN_15002380(0x19);
    return 0;
  }
  if (DAT_150051dc == 0) {
    FUN_15002380(0x19);
    return -1;
  }
  setSBCS();
  FUN_15002380(0x19);
  return 0;
}



/* ==== getSystemCP @ 15001d90 ==== 
 * signature: int __cdecl getSystemCP(int param_1)
 * body: 15001d90-15001ddc
 * note: Library Function - Single Match  _getSystemCP  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 1998 Release */

int __cdecl getSystemCP(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_150051dc = 1;
                    /* WARNING: Could not recover jumptable at 0x15001dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_150051dc = 1;
                    /* WARNING: Could not recover jumptable at 0x15001dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_150054d0;
  }
  DAT_150051dc = (uint)bVar2;
  return param_1;
}



/* ==== _CPtoLCID @ 15001de0 ==== 
 * signature: undefined4 __cdecl _CPtoLCID(undefined4 param_1)
 * body: 15001de0-15001e17
 * note: Library Function - Single Match  _CPtoLCID  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _CPtoLCID
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl _CPtoLCID(undefined4 param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



/* ==== setSBCS @ 15001e40 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 15001e40-15001e6b
 * note: Library Function - Single Match  _setSBCS  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 1998 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_150050c0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_150051d0 = 0;
  DAT_150051c4 = 0;
  _DAT_150051c8 = 0;
  DAT_150051d4 = 0;
  DAT_150051d8 = 0;
  return;
}



/* ==== ___initmbctable @ 15001e70 ==== 
 * signature: undefined __stdcall ___initmbctable(void)
 * body: 15001e70-15001e7a
 * note: Library Function - Single Match  ___initmbctable  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 1998 Release */

void ___initmbctable(void)

{
  __setmbcp(-3);
  return;
}



/* ==== FUN_15001e80 @ 15001e80 ==== 
 * signature: LPSTR __stdcall FUN_15001e80(void)
 * body: 15001e80-15002014
 */

LPSTR FUN_15001e80(void)

{
  char cVar1;
  WCHAR WVar2;
  LPWCH pWVar3;
  SIZE_T cbMultiByte;
  LPSTR pCVar4;
  uint uVar5;
  LPWCH pWVar6;
  char *pcVar7;
  WCHAR *pWVar8;
  int iVar10;
  LPSTR pCVar11;
  LPWCH local_4;
  WCHAR *pWVar9;
  
  pWVar3 = local_4;
  if (DAT_150052dc == 0) {
    pWVar3 = GetEnvironmentStringsW();
    if (pWVar3 == (LPWCH)0x0) {
      local_4 = (LPWCH)GetEnvironmentStrings();
      if (local_4 == (LPWCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_150052dc = 2;
    }
    else {
      DAT_150052dc = 1;
    }
  }
  if (DAT_150052dc != 1) {
    if (DAT_150052dc != 2) {
      return (LPSTR)0x0;
    }
    if ((local_4 == (LPWCH)0x0) && (local_4 = (LPWCH)GetEnvironmentStrings(), local_4 == (LPWCH)0x0)
       ) {
      return (LPSTR)0x0;
    }
    cVar1 = (char)*local_4;
    pWVar3 = local_4;
    while (cVar1 != '\0') {
      do {
        pWVar6 = pWVar3;
        pWVar3 = (LPWCH)((int)pWVar6 + 1);
      } while (*(char *)pWVar3 != '\0');
      pWVar3 = pWVar6 + 1;
      cVar1 = (char)*pWVar3;
    }
    pcVar7 = (char *)((int)pWVar3 + (1 - (int)local_4));
    pCVar4 = (LPSTR)FUN_15002500((SIZE_T)pcVar7);
    if (pCVar4 == (LPSTR)0x0) {
      FreeEnvironmentStringsA((LPCH)local_4);
      return (LPSTR)0x0;
    }
    pWVar3 = local_4;
    pCVar11 = pCVar4;
    for (uVar5 = (uint)pcVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pCVar11 = *(undefined4 *)pWVar3;
      pWVar3 = pWVar3 + 2;
      pCVar11 = pCVar11 + 4;
    }
    for (uVar5 = (uint)pcVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pCVar11 = (CHAR)*pWVar3;
      pWVar3 = (LPWCH)((int)pWVar3 + 1);
      pCVar11 = pCVar11 + 1;
    }
    FreeEnvironmentStringsA((LPCH)local_4);
    return pCVar4;
  }
  if ((pWVar3 == (LPWCH)0x0) && (pWVar3 = GetEnvironmentStringsW(), pWVar3 == (LPWCH)0x0)) {
    return (LPSTR)0x0;
  }
  WVar2 = *pWVar3;
  pWVar8 = pWVar3;
  while (WVar2 != L'\0') {
    do {
      pWVar9 = pWVar8;
      pWVar8 = pWVar9 + 1;
    } while (*pWVar8 != L'\0');
    pWVar8 = pWVar9 + 2;
    WVar2 = *pWVar8;
  }
  iVar10 = ((int)pWVar8 - (int)pWVar3 >> 1) + 1;
  cbMultiByte = WideCharToMultiByte(0,0,pWVar3,iVar10,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((cbMultiByte != 0) && (pCVar4 = (LPSTR)FUN_15002500(cbMultiByte), pCVar4 != (LPSTR)0x0)) {
    iVar10 = WideCharToMultiByte(0,0,pWVar3,iVar10,pCVar4,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar10 == 0) {
      FUN_150024e0(pCVar4);
      pCVar4 = (LPSTR)0x0;
    }
    FreeEnvironmentStringsW(pWVar3);
    return pCVar4;
  }
  FreeEnvironmentStringsW(pWVar3);
  return (LPSTR)0x0;
}



/* ==== FUN_15002020 @ 15002020 ==== 
 * signature: undefined __cdecl FUN_15002020(undefined4 param_1)
 * body: 15002020-15002029
 */

void __cdecl FUN_15002020(undefined4 param_1)

{
  DAT_15005044 = param_1;
  return;
}



/* ==== FUN_15002030 @ 15002030 ==== 
 * signature: undefined4 __stdcall FUN_15002030(void)
 * body: 15002030-15002037
 */

undefined4 FUN_15002030(void)

{
  return 1;
}



/* ==== __FF_MSGBANNER @ 15002040 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 15002040-1500207c
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 1998 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_15005040 == 1) || ((DAT_15005040 == 0 && (DAT_15005044 == 1)))) {
    FUN_15002080(0xfc);
    if (DAT_15005368 != (code *)0x0) {
      (*DAT_15005368)();
    }
    FUN_15002080(0xff);
  }
  return;
}



/* ==== FUN_15002080 @ 15002080 ==== 
 * signature: undefined __cdecl FUN_15002080(int param_1)
 * body: 15002080-1500226c
 */

void __cdecl FUN_15002080(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  DWORD local_1a8;
  char local_1a4 [100];
  char acStack_140 [60];
  CHAR local_104 [260];
  
  iVar4 = 0;
  piVar2 = &DAT_150052e0;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
    iVar4 = iVar4 + 1;
  } while (piVar2 < &DAT_15005368);
  if ((&DAT_150052e0)[iVar4 * 2] == param_1) {
    if ((DAT_15005040 == 1) || ((DAT_15005040 == 0 && (DAT_15005044 == 1)))) {
      hFile = *(HANDLE *)(DAT_15006a50 + 0x48);
      if (hFile == (HANDLE)0xffffffff) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar8 = *(char **)(iVar4 * 8 + 0x150052e4);
      uVar6 = 0xffffffff;
      pcVar9 = pcVar8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar8,~uVar6 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar8 = "<program name unknown>";
        pCVar10 = local_104;
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pCVar10 = pCVar10 + 4;
        }
        *(undefined2 *)pCVar10 = *(undefined2 *)pcVar8;
        pCVar10[2] = pcVar8[2];
      }
      pcVar8 = local_104;
      uVar6 = 0xffffffff;
      pcVar9 = local_104;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar6) {
        uVar6 = 0xffffffff;
        pcVar8 = local_104;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar8 = acStack_140 + ~uVar6;
        _strncpy(pcVar8,"...",3);
      }
      pcVar9 = "Runtime Error!\n\nProgram: ";
      pcVar11 = local_1a4;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
      uVar6 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar8 = "\n\n";
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar8 = *(char **)(iVar4 * 8 + 0x150052e4);
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      ___crtMessageBoxA(local_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



/* ==== __mtinitlocks @ 15002270 ==== 
 * signature: int __cdecl __mtinitlocks(void)
 * body: 15002270-15002299
 * note: Library Function - Single Match  __mtinitlocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_150053b4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_150053a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_15005394);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_15005374);
  return extraout_EAX;
}



/* ==== __mtdeletelocks @ 150022a0 ==== 
 * signature: void __cdecl __mtdeletelocks(void)
 * body: 150022a0-15002303
 * note: Library Function - Single Match  __mtdeletelocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_15005370)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_150024e0((LPVOID)(&DAT_15005370)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_15005394);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_150053a4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_150053b4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_15005374);
  return;
}



/* ==== __lock @ 15002310 ==== 
 * signature: void __cdecl __lock(int _File)
 * body: 15002310-15002377
 * note: Library Function - Single Match  __lock  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 1998 Release */

void __cdecl __lock(int _File)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_15005370 + _File;
  if (*piVar1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_15002500(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    __lock(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_150024e0(lpCriticalSection);
    }
    FUN_15002380(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ==== FUN_15002380 @ 15002380 ==== 
 * signature: undefined __cdecl FUN_15002380(int param_1)
 * body: 15002380-15002396
 */

void __cdecl FUN_15002380(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_15005370)[param_1]);
  return;
}



/* ==== FID_conflict:__lock_file @ 150023a0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 150023a0-150023d5
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)((int)&DAT_150054dc + 3U) < _File) && (_File < (FILE *)0x15005741)) {
    __lock(((int)(_File + -0xa802a7) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* ==== FID_conflict:__lock_file2 @ 150023e0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
 * body: 150023e0-15002407
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file2  __unlock_file2  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file2
    __unlock_file2
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ==== FID_conflict:__lock_file @ 15002410 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 15002410-15002445
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)((int)&DAT_150054dc + 3U) < _File) && (_File < (FILE *)0x15005741)) {
    FUN_15002380(((int)(_File + -0xa802a7) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* ==== FID_conflict:__lock_file2 @ 15002450 ==== 
 * signature: void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
 * body: 15002450-15002477
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file2  __unlock_file2  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file2
    __unlock_file2
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_15002380(_Index + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ==== FUN_15002480 @ 15002480 ==== 
 * signature: LPVOID __cdecl FUN_15002480(int param_1, int param_2)
 * body: 15002480-150024d1
 */

LPVOID __cdecl FUN_15002480(int param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  uint dwBytes;
  
  dwBytes = param_2 * param_1;
  if (dwBytes == 0) {
    dwBytes = 1;
  }
  do {
    if (dwBytes < 0xffffffe1) {
      pvVar1 = HeapAlloc(DAT_15006b54,8,dwBytes);
    }
    else {
      pvVar1 = (LPVOID)0x0;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_15005764 == 0) {
      return (LPVOID)0x0;
    }
    iVar2 = __callnewh(dwBytes);
  } while (iVar2 != 0);
  return (LPVOID)0x0;
}



/* ==== FUN_150024e0 @ 150024e0 ==== 
 * signature: undefined __cdecl FUN_150024e0(LPVOID param_1)
 * body: 150024e0-150024f7
 */

void __cdecl FUN_150024e0(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(DAT_15006b54,0,param_1);
  }
  return;
}



/* ==== FUN_15002500 @ 15002500 ==== 
 * signature: undefined __cdecl FUN_15002500(SIZE_T param_1)
 * body: 15002500-15002513
 */

void __cdecl FUN_15002500(SIZE_T param_1)

{
  FUN_15002520(param_1,DAT_15005764);
  return;
}



/* ==== FUN_15002520 @ 15002520 ==== 
 * signature: int __cdecl FUN_15002520(SIZE_T param_1, int param_2)
 * body: 15002520-1500255f
 */

int __cdecl FUN_15002520(SIZE_T param_1,int param_2)

{
  int iVar1;
  
  if (0xffffffe0 < param_1) {
    return 0;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = FUN_15002560(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2 == 0) break;
    iVar1 = __callnewh(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* ==== FUN_15002560 @ 15002560 ==== 
 * signature: undefined __cdecl FUN_15002560(SIZE_T param_1)
 * body: 15002560-15002574
 */

void __cdecl FUN_15002560(SIZE_T param_1)

{
  HeapAlloc(DAT_15006b54,0,param_1);
  return;
}



/* ==== ___crtMessageBoxA @ 15002580 ==== 
 * signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
 * body: 15002580-15002611
 * note: Library Function - Single Match  ___crtMessageBoxA  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 1998 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_150054d4 != (FARPROC)0x0) {
LAB_150025cf:
    if (DAT_150054d8 != (FARPROC)0x0) {
      iVar1 = (*DAT_150054d8)();
    }
    if ((iVar1 != 0) && (DAT_150054dc != (FARPROC)0x0)) {
      iVar1 = (*DAT_150054dc)(iVar1);
    }
    iVar1 = (*DAT_150054d4)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_150054d4 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_150054d4 != (FARPROC)0x0) {
      DAT_150054d8 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_150054dc = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_150025cf;
    }
  }
  return 0;
}



/* ==== _strncpy @ 15002620 ==== 
 * signature: char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * body: 15002620-1500271d
 * note: Library Function - Single Match  _strncpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1500265e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1500269b;
        goto LAB_15002709;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x15002705:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_15002709:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1500269b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x15002705;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x15002705;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x15002705;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1500265e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1500269b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ==== FUN_15002720 @ 15002720 ==== 
 * signature: undefined __stdcall FUN_15002720(void)
 * body: 15002720-150027e6
 */

void FUN_15002720(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_15006a40 == 0) {
    DAT_15006a40 = 0x200;
  }
  else if (DAT_15006a40 < 0x14) {
    DAT_15006a40 = 0x14;
  }
  DAT_15005a3c = FUN_15002480(DAT_15006a40,4);
  if (DAT_15005a3c == (LPVOID)0x0) {
    DAT_15006a40 = 0x14;
    DAT_15005a3c = FUN_15002480(0x14,4);
    if (DAT_15005a3c == (LPVOID)0x0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_150054e0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined ***)((int)DAT_15005a3c + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_150054f0;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_15006a50 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_15005550);
  return;
}



/* ==== FUN_150027e7 @ 150027e7 ==== 
 * signature: undefined FUN_150027e7(void)
 * body: 150027e7-150027e7
 */

void FUN_150027e7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150027e8 @ 150027e8 ==== 
 * signature: undefined FUN_150027e8(void)
 * body: 150027e8-150027e8
 */

void FUN_150027e8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150027e9 @ 150027e9 ==== 
 * signature: undefined FUN_150027e9(void)
 * body: 150027e9-150027e9
 */

void FUN_150027e9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150027ea @ 150027ea ==== 
 * signature: undefined FUN_150027ea(void)
 * body: 150027ea-150027ea
 */

void FUN_150027ea(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150027eb @ 150027eb ==== 
 * signature: undefined FUN_150027eb(void)
 * body: 150027eb-150027eb
 */

void FUN_150027eb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150027ec @ 150027ec ==== 
 * signature: undefined FUN_150027ec(void)
 * body: 150027ec-150027ec
 */

void FUN_150027ec(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150027ed @ 150027ed ==== 
 * signature: undefined FUN_150027ed(void)
 * body: 150027ed-150027ed
 */

void FUN_150027ed(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150027ee @ 150027ee ==== 
 * signature: undefined FUN_150027ee(void)
 * body: 150027ee-150027ee
 */

void FUN_150027ee(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150027ef @ 150027ef ==== 
 * signature: undefined FUN_150027ef(void)
 * body: 150027ef-150027ef
 */

void FUN_150027ef(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150027f0 @ 150027f0 ==== 
 * signature: undefined FUN_150027f0(void)
 * body: 150027f0-15002803
 */

void FUN_150027f0(void)

{
  FUN_150029a0();
  if (DAT_15005080 != '\0') {
    FUN_15002850();
    return;
  }
  return;
}



/* ==== FUN_15002804 @ 15002804 ==== 
 * signature: undefined FUN_15002804(void)
 * body: 15002804-15002804
 */

void FUN_15002804(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_15002805 @ 15002805 ==== 
 * signature: undefined FUN_15002805(void)
 * body: 15002805-15002805
 */

void FUN_15002805(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_15002806 @ 15002806 ==== 
 * signature: undefined FUN_15002806(void)
 * body: 15002806-15002806
 */

void FUN_15002806(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_15002807 @ 15002807 ==== 
 * signature: undefined FUN_15002807(void)
 * body: 15002807-15002807
 */

void FUN_15002807(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_15002808 @ 15002808 ==== 
 * signature: undefined FUN_15002808(void)
 * body: 15002808-15002808
 */

void FUN_15002808(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_15002809 @ 15002809 ==== 
 * signature: undefined FUN_15002809(void)
 * body: 15002809-15002809
 */

void FUN_15002809(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1500280a @ 1500280a ==== 
 * signature: undefined FUN_1500280a(void)
 * body: 1500280a-1500280a
 */

void FUN_1500280a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1500280b @ 1500280b ==== 
 * signature: undefined FUN_1500280b(void)
 * body: 1500280b-1500280b
 */

void FUN_1500280b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1500280c @ 1500280c ==== 
 * signature: undefined FUN_1500280c(void)
 * body: 1500280c-1500280c
 */

void FUN_1500280c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1500280d @ 1500280d ==== 
 * signature: undefined FUN_1500280d(void)
 * body: 1500280d-1500280d
 */

void FUN_1500280d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1500280e @ 1500280e ==== 
 * signature: undefined FUN_1500280e(void)
 * body: 1500280e-1500280e
 */

void FUN_1500280e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1500280f @ 1500280f ==== 
 * signature: undefined FUN_1500280f(void)
 * body: 1500280f-1500280f
 */

void FUN_1500280f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __callnewh @ 15002810 ==== 
 * signature: int __cdecl __callnewh(size_t _Size)
 * body: 15002810-1500284d
 * note: Library Function - Single Match  __callnewh  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 1998 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_15005a38 != (code *)0x0) {
    iVar1 = (*DAT_15005a38)(_Size);
    if (iVar1 != 0) {
      FUN_15002380(9);
      return 1;
    }
  }
  FUN_15002380(9);
  return 0;
}



/* ==== FUN_15002850 @ 15002850 ==== 
 * signature: int __stdcall FUN_15002850(void)
 * body: 15002850-150028e7
 */

int FUN_15002850(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 3;
  __lock(2);
  if (3 < DAT_15006a40) {
    iVar4 = 0xc;
    do {
      _File = *(FILE **)(DAT_15005a3c + iVar4);
      if (_File != (FILE *)0x0) {
        if ((_File->_flag & 0x83) != 0) {
          iVar1 = _fclose(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        if (0x4f < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_15005a3c + iVar4) + 0x20));
          FUN_150024e0(*(LPVOID *)(DAT_15005a3c + iVar4));
          *(undefined4 *)(DAT_15005a3c + iVar4) = 0;
        }
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_15006a40);
  }
  FUN_15002380(2);
  return iVar2;
}



/* ==== __fflush_lk @ 150028f0 ==== 
 * signature: int __cdecl __fflush_lk(FILE * param_1)
 * body: 150028f0-1500292b
 * note: Library Function - Single Match  __fflush_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __fflush_lk
   
   Library: Visual Studio 1998 Release */

int __cdecl __fflush_lk(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) != 0) {
    iVar1 = __commit(param_1->_file);
    return (iVar1 == 0) - 1;
  }
  return 0;
}



/* ==== __flush @ 15002930 ==== 
 * signature: int __cdecl __flush(FILE * _File)
 * body: 15002930-15002993
 * note: Library Function - Single Match  __flush  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 1998 Release */

int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  uint _MaxCharCount;
  int iVar2;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _MaxCharCount = (int)_File->_ptr - (int)_File->_base;
    if (0 < (int)_MaxCharCount) {
      uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
      if (uVar1 == _MaxCharCount) {
        if ((_File->_flag & 0x80U) != 0) {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return iVar2;
}



/* ==== FUN_150029a0 @ 150029a0 ==== 
 * signature: undefined __stdcall FUN_150029a0(void)
 * body: 150029a0-150029a0
 */

void FUN_150029a0(void)

{
  flsall(1);
  return;
}



/* ==== FUN_150029a2 @ 150029a2 ==== 
 * signature: undefined FUN_150029a2(void)
 * body: 150029a2-150029aa
 */

void FUN_150029a2(void)

{
  int unaff_retaddr;
  
  flsall(unaff_retaddr);
  return;
}



/* ==== FUN_150029ab @ 150029ab ==== 
 * signature: undefined FUN_150029ab(void)
 * body: 150029ab-150029ab
 */

void FUN_150029ab(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150029ac @ 150029ac ==== 
 * signature: undefined FUN_150029ac(void)
 * body: 150029ac-150029ac
 */

void FUN_150029ac(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150029ad @ 150029ad ==== 
 * signature: undefined FUN_150029ad(void)
 * body: 150029ad-150029ad
 */

void FUN_150029ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150029ae @ 150029ae ==== 
 * signature: undefined FUN_150029ae(void)
 * body: 150029ae-150029ae
 */

void FUN_150029ae(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_150029af @ 150029af ==== 
 * signature: undefined FUN_150029af(void)
 * body: 150029af-150029af
 */

void FUN_150029af(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== flsall @ 150029b0 ==== 
 * signature: int __cdecl flsall(int param_1)
 * body: 150029b0-15002a7a
 * note: Library Function - Single Match  _flsall  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 1998 Release */

int __cdecl flsall(int param_1)

{
  void *_File;
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int _Index;
  int local_4;
  
  iVar3 = 0;
  _Index = 0;
  local_4 = 0;
  __lock(2);
  if (0 < DAT_15006a40) {
    iVar4 = 0;
    do {
      _File = *(void **)(DAT_15005a3c + iVar4);
      if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
        FID_conflict___lock_file2(_Index,_File);
        pFVar1 = *(FILE **)(DAT_15005a3c + iVar4);
        if ((pFVar1->_flag & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = __fflush_lk(pFVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if (((param_1 == 0) && ((pFVar1->_flag & 2U) != 0)) &&
                  (iVar2 = __fflush_lk(pFVar1), iVar2 == -1)) {
            local_4 = -1;
          }
        }
        FID_conflict___lock_file2(_Index,*(void **)(DAT_15005a3c + iVar4));
      }
      iVar4 = iVar4 + 4;
      _Index = _Index + 1;
    } while (_Index < DAT_15006a40);
  }
  FUN_15002380(2);
  if (param_1 != 1) {
    iVar3 = local_4;
  }
  return iVar3;
}



/* ==== _fclose @ 15002a80 ==== 
 * signature: int __cdecl _fclose(FILE * _File)
 * body: 15002a80-15002abe
 * note: Library Function - Single Match  _fclose  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 1998 Release */

int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  
  if ((_File->_flag & 0x40) != 0) {
    _File->_flag = 0;
    return -1;
  }
  FID_conflict___lock_file(_File);
  iVar1 = __fclose_lk(_File);
  FID_conflict___lock_file(_File);
  return iVar1;
}



/* ==== __fclose_lk @ 15002ac0 ==== 
 * signature: int __cdecl __fclose_lk(FILE * param_1)
 * body: 15002ac0-15002b1e
 * note: Library Function - Single Match  __fclose_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 1998 Release */

int __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1->_flag & 0x83) != 0) {
    iVar2 = __flush(param_1);
    __freebuf(param_1);
    iVar1 = __close(param_1->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_150024e0(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return iVar2;
}



/* ==== __commit @ 15002b20 ==== 
 * signature: int __cdecl __commit(int _FileHandle)
 * body: 15002b20-15002bc1
 * note: Library Function - Single Match  __commit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 1998 Release */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_15006b50 <= (uint)_FileHandle) {
LAB_15002bae:
    piVar3 = FUN_15003010();
    *piVar3 = 9;
    return -1;
  }
  piVar3 = (int *)((int)&DAT_15006a50 + ((int)(_FileHandle & 0xffffffe7U) >> 3));
  iVar5 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) == 0) goto LAB_15002bae;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) != 0) {
    DVar4 = 0;
    hFile = (HANDLE)FUN_150030d0(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar4 = GetLastError();
    }
    iVar5 = 0;
    if (DVar4 == 0) goto LAB_15002b9f;
    puVar2 = FUN_15003020();
    *puVar2 = DVar4;
  }
  iVar5 = -1;
  piVar3 = FUN_15003010();
  *piVar3 = 9;
LAB_15002b9f:
  __unlock_fhandle(_FileHandle);
  return iVar5;
}



/* ==== __write @ 15002bd0 ==== 
 * signature: int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
 * body: 15002bd0-15002c47
 * note: Library Function - Single Match  __write  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __write
   
   Library: Visual Studio 1998 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_15006b50) &&
     ((*(byte *)(*(int *)((int)&DAT_15006a50 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = FUN_15002c50(_FileHandle,_Buf,_MaxCharCount);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_15003010();
  *piVar2 = 9;
  puVar3 = FUN_15003020();
  *puVar3 = 0;
  return -1;
}



/* ==== FUN_15002c50 @ 15002c50 ==== 
 * signature: int __cdecl FUN_15002c50(uint param_1, char * param_2, uint param_3)
 * body: 15002c50-15002e4a
 */

int __cdecl FUN_15002c50(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  int *piVar3;
  ulong *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  ulong local_418;
  DWORD local_414;
  int *local_410;
  int local_40c;
  DWORD local_408;
  char local_404 [1028];
  
  iVar5 = 0;
  local_408 = 0;
  if (param_3 == 0) {
    return 0;
  }
  local_410 = (int *)((int)&DAT_15006a50 + ((int)(param_1 & 0xffffffe7) >> 3));
  local_40c = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*local_410 + 4 + local_40c) & 0x20) != 0) {
    __lseek_lk(param_1,0,2);
  }
  if ((*(byte *)((undefined4 *)(local_40c + *local_410) + 1) & 0x80) == 0) {
    BVar2 = WriteFile(*(HANDLE *)(local_40c + *local_410),param_2,param_3,&local_414,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
LAB_15002d84:
      local_418 = GetLastError();
    }
    else {
      local_418 = 0;
      local_408 = local_414;
    }
  }
  else {
    local_418 = 0;
    pcVar7 = param_2;
    do {
      if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
      pcVar6 = local_404;
      do {
        if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        if (cVar1 == '\n') {
          *pcVar6 = '\r';
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while ((int)pcVar6 - (int)local_404 < 0x400);
      BVar2 = WriteFile(*(HANDLE *)(*local_410 + local_40c),local_404,(int)pcVar6 - (int)local_404,
                        &local_414,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) goto LAB_15002d84;
      local_408 = local_408 + local_414;
    } while ((int)pcVar6 - (int)local_404 <= (int)local_414);
  }
  if (local_408 != 0) {
    return local_408 - iVar5;
  }
  if (local_418 == 0) {
    if (((*(byte *)(*local_410 + 4 + local_40c) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    piVar3 = FUN_15003010();
    *piVar3 = 0x1c;
    puVar4 = FUN_15003020();
    *puVar4 = 0;
    return -1;
  }
  if (local_418 != 5) {
    __dosmaperr(local_418);
    return -1;
  }
  piVar3 = FUN_15003010();
  *piVar3 = 9;
  puVar4 = FUN_15003020();
  *puVar4 = 5;
  return -1;
}



/* ==== __close @ 15002e50 ==== 
 * signature: int __cdecl __close(int _FileHandle)
 * body: 15002e50-15002ebd
 * note: Library Function - Single Match  __close  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __close
   
   Library: Visual Studio 1998 Release */

int __cdecl __close(int _FileHandle)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_15006b50) &&
     ((*(byte *)(*(int *)((int)&DAT_15006a50 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = __close_lk(_FileHandle);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_15003010();
  *piVar2 = 9;
  puVar3 = FUN_15003020();
  *puVar3 = 0;
  return -1;
}



/* ==== __close_lk @ 15002ec0 ==== 
 * signature: undefined4 __cdecl __close_lk(uint param_1)
 * body: 15002ec0-15002f48
 * note: Library Function - Single Match  __close_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  if ((param_1 == 1) || (param_1 == 2)) {
    iVar1 = FUN_150030d0(2);
    iVar2 = FUN_150030d0(1);
    if (iVar1 != iVar2) goto LAB_15002eea;
  }
  else {
LAB_15002eea:
    hObject = (HANDLE)FUN_150030d0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_15002f0a;
    }
  }
  DVar4 = 0;
LAB_15002f0a:
  FUN_15003030(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(undefined1 *)
   (*(int *)((int)&DAT_15006a50 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}



/* ==== __freebuf @ 15002f50 ==== 
 * signature: void __cdecl __freebuf(FILE * _File)
 * body: 15002f50-15002f88
 * note: Library Function - Single Match  __freebuf  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 1998 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_150024e0(_File->_base);
    _File->_ptr = (char *)0x0;
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* ==== __dosmaperr @ 15002f90 ==== 
 * signature: void __cdecl __dosmaperr(ulong param_1)
 * body: 15002f90-15003002
 * note: Library Function - Single Match  __dosmaperr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 1998 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = FUN_15003020();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_15005768;
  do {
    if (*puVar1 == param_1) {
      piVar2 = FUN_15003010();
      *piVar2 = *(int *)(iVar3 * 8 + 0x1500576c);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_150058d0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    piVar2 = FUN_15003010();
    *piVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    piVar2 = FUN_15003010();
    *piVar2 = 8;
    return;
  }
  piVar2 = FUN_15003010();
  *piVar2 = 0x16;
  return;
}



/* ==== FUN_15003010 @ 15003010 ==== 
 * signature: int * __stdcall FUN_15003010(void)
 * body: 15003010-15003018
 */

int * FUN_15003010(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}



/* ==== FUN_15003020 @ 15003020 ==== 
 * signature: ulong * __stdcall FUN_15003020(void)
 * body: 15003020-15003028
 */

ulong * FUN_15003020(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}



/* ==== FUN_15003030 @ 15003030 ==== 
 * signature: undefined4 __cdecl FUN_15003030(uint param_1)
 * body: 15003030-150030c0
 */

undefined4 __cdecl FUN_15003030(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong *puVar4;
  DWORD nStdHandle;
  
  if (param_1 < DAT_15006b50) {
    piVar3 = (int *)((int)&DAT_15006a50 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar1 = (param_1 & 0x1f) * 0x24;
    piVar2 = (int *)(*piVar3 + iVar1);
    if (((*(byte *)(piVar2 + 1) & 1) != 0) && (*piVar2 != -1)) {
      if (DAT_15005044 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_15003095;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_15003095:
      *(undefined4 *)(*piVar3 + iVar1) = 0xffffffff;
      return 0;
    }
  }
  piVar3 = FUN_15003010();
  *piVar3 = 9;
  puVar4 = FUN_15003020();
  *puVar4 = 0;
  return 0xffffffff;
}



/* ==== FUN_150030d0 @ 150030d0 ==== 
 * signature: undefined4 __cdecl FUN_150030d0(uint param_1)
 * body: 150030d0-15003119
 */

undefined4 __cdecl FUN_150030d0(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_15006b50) &&
     (puVar1 = (undefined4 *)
               (*(int *)((int)&DAT_15006a50 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  piVar2 = FUN_15003010();
  *piVar2 = 9;
  puVar3 = FUN_15003020();
  *puVar3 = 0;
  return 0xffffffff;
}



/* ==== __lock_fhandle @ 15003120 ==== 
 * signature: int __cdecl __lock_fhandle(int _Filehandle)
 * body: 15003120-15003180
 * note: Library Function - Single Match  __lock_fhandle  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lock_fhandle
   
   Library: Visual Studio 1998 Release */

int __cdecl __lock_fhandle(int _Filehandle)

{
  int *piVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  
  piVar1 = (int *)((int)&DAT_15006a50 + ((int)(_Filehandle & 0xffffffe7U) >> 3));
  iVar2 = (_Filehandle & 0x1fU) * 0x24;
  iVar3 = *piVar1 + iVar2;
  if (*(int *)(iVar3 + 8) == 0) {
    __lock(0x11);
    if (*(int *)(iVar3 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xc));
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    FUN_15002380(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*piVar1 + iVar2 + 0xc));
  return extraout_EAX;
}



/* ==== __unlock_fhandle @ 15003190 ==== 
 * signature: void __cdecl __unlock_fhandle(int _Filehandle)
 * body: 15003190-150031b7
 * note: Library Function - Single Match  __unlock_fhandle  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 1998 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             (*(int *)((int)&DAT_15006a50 + ((int)(_Filehandle & 0xffffffe7U) >> 3)) +
              (_Filehandle & 0x1fU) * 0x24 + 0xc));
  return;
}



/* ==== __lseek_lk @ 150031c0 ==== 
 * signature: DWORD __cdecl __lseek_lk(uint param_1, LONG param_2, DWORD param_3)
 * body: 150031c0-15003241
 * note: Library Function - Single Match  __lseek_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lseek_lk
   
   Library: Visual Studio 1998 Release */

DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)FUN_150030d0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_15003010();
    *piVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  uVar4 = 0;
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  if (uVar4 != 0) {
    __dosmaperr(uVar4);
    return 0xffffffff;
  }
  pbVar1 = (byte *)(*(int *)((int)&DAT_15006a50 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                   (param_1 & 0x1f) * 0x24);
  *pbVar1 = *pbVar1 & 0xfd;
  return DVar3;
}


