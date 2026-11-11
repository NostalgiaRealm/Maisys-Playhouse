
/* ==== FUN_110152c0 @ 110152c0 ==== 
 * signature: undefined __cdecl FUN_110152c0(undefined4 * param_1)
 * body: 110152c0-11015309
 */

void __cdecl FUN_110152c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x136;
    puVar1[6] = 0xfffffffe;
    puVar1[7] = 0xfffffffe;
    puVar1[8] = 0xfffffffe;
    puVar1[3] = 0x12e;
    puVar1[4] = 0;
    puVar1[5] = 0;
    FUN_11006270(puVar1 + 5,'\0');
  }
  return;
}


