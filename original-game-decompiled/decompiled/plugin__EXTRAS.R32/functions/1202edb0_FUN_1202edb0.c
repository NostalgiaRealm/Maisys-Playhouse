
/* ==== FUN_1202edb0 @ 1202edb0 ==== 
 * signature: undefined4 __cdecl FUN_1202edb0(undefined4 param_1)
 * body: 1202edb0-1202edd7
 */

undefined4 __cdecl FUN_1202edb0(undefined4 param_1)

{
  undefined4 uVar1;
  
  __lock(9);
  uVar1 = DAT_120399d0;
  DAT_120399d0 = param_1;
  FUN_1202c520(9);
  return uVar1;
}


