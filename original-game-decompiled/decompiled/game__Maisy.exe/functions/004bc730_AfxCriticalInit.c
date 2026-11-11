
/* ==== AfxCriticalInit @ 004bc730 ==== 
 * signature: int __stdcall AfxCriticalInit(void)
 * body: 004bc730-004bc770
 * note: Library Function - Single Match  int __stdcall AfxCriticalInit(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxCriticalInit(void)
   
   Library: Visual Studio 1998 Release */

int AfxCriticalInit(void)

{
  DWORD DVar1;
  
  if (DAT_004e5210 == 0) {
    DAT_004e5210 = 1;
    DVar1 = GetVersion();
    if ((3 < (byte)DVar1) || (DAT_004e5368 = 1, (DVar1 & 0x80000000) == 0)) {
      DAT_004e5368 = 0;
    }
    if (DAT_004e5368 == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004e5370);
    }
  }
  return DAT_004e5210;
}


