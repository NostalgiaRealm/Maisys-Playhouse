
/* ==== FUN_0040f070 @ 0040f070 ==== 
 * signature: undefined __stdcall FUN_0040f070(char * param_1)
 * body: 0040f070-0040f0d9
 */

void FUN_0040f070(char *param_1)

{
  int iVar1;
  byte *lpFilename;
  DWORD nSize;
  uchar local_410 [256];
  uchar local_310 [256];
  uchar local_210 [256];
  byte local_110 [264];
  uchar local_8 [4];
  
  nSize = 0x104;
  lpFilename = local_110;
  iVar1 = FUN_004bafca();
  GetModuleFileNameA(*(HMODULE *)(iVar1 + 8),(LPSTR)lpFilename,nSize);
  FUN_0048e810(local_110,local_8,local_210,local_410,local_310);
  __makepath(param_1,(char *)local_8,(char *)local_210,(char *)0x0,(char *)0x0);
  return;
}


