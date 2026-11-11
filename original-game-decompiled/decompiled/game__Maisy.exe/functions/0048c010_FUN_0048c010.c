
/* ==== FUN_0048c010 @ 0048c010 ==== 
 * signature: undefined4 __cdecl FUN_0048c010(int param_1, undefined1 * param_2)
 * body: 0048c010-0048c042
 */

undefined4 __cdecl FUN_0048c010(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    return 0x10000;
  }
  iVar1 = FUN_0048c050(param_1);
  if (iVar1 != 0) {
    *param_2 = 1;
    return 0;
  }
  *param_2 = 0;
  return 0;
}


