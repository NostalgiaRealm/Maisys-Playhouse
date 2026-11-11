
/* ==== FUN_0040f6f0 @ 0040f6f0 ==== 
 * signature: short __stdcall FUN_0040f6f0(void)
 * body: 0040f6f0-0040f70a
 */

short FUN_0040f6f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetSystemMetrics(4);
  iVar2 = GetSystemMetrics(0xf);
  return (short)iVar1 + (short)iVar2;
}


