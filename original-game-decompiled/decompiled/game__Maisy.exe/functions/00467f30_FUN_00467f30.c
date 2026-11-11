
/* ==== FUN_00467f30 @ 00467f30 ==== 
 * signature: uint __cdecl FUN_00467f30(undefined4 param_1, HGLOBAL param_2, undefined4 * param_3)
 * body: 00467f30-00467f59
 */

uint __cdecl FUN_00467f30(undefined4 param_1,HGLOBAL param_2,undefined4 *param_3)

{
  LPVOID pvVar1;
  
  if (param_2 == (HGLOBAL)0x0) {
    return 0x20002;
  }
  pvVar1 = GlobalLock(param_2);
  *param_3 = pvVar1;
  return -(uint)(pvVar1 == (LPVOID)0x0) & 0x20002;
}


