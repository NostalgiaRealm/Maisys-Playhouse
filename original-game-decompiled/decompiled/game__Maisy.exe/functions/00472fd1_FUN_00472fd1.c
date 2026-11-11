
/* ==== FUN_00472fd1 @ 00472fd1 ==== 
 * signature: short __stdcall FUN_00472fd1(void)
 * body: 00472fd1-00472fea
 */

short FUN_00472fd1(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetSystemMetrics(4);
  iVar2 = GetSystemMetrics(0xf);
  return (short)iVar1 + (short)iVar2;
}


