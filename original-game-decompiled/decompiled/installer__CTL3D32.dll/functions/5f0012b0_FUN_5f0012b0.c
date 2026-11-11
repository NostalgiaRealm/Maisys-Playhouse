
/* ==== FUN_5f0012b0 @ 5f0012b0 ==== 
 * signature: undefined __cdecl FUN_5f0012b0(undefined4 * param_1)
 * body: 5f0012b0-5f0012c9
 */

void __cdecl FUN_5f0012b0(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}


