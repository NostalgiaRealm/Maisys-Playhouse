
/* ==== FUN_0045f4c1 @ 0045f4c1 ==== 
 * signature: short __stdcall FUN_0045f4c1(void)
 * body: 0045f4c1-0045f4da
 */

short FUN_0045f4c1(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetSystemMetrics(4);
  iVar2 = GetSystemMetrics(0xf);
  return (short)iVar1 + (short)iVar2;
}


