
/* ==== FUN_100164b0 @ 100164b0 ==== 
 * signature: int __stdcall FUN_100164b0(void)
 * body: 100164b0-100164f2
 */

int FUN_100164b0(void)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  uint local_104 [65];
  
  iVar3 = 0;
  DVar1 = GetCurrentDirectoryA(0x104,(LPSTR)local_104);
  if ((DVar1 != 0) && ((char)(local_104[0] >> 8) == ':')) {
    uVar2 = FUN_10015b60(local_104[0] & 0xff);
    iVar3 = uVar2 - 0x40;
  }
  return iVar3;
}


