
/* ==== FUN_11027c50 @ 11027c50 ==== 
 * signature: undefined __cdecl FUN_11027c50(undefined4 * param_1)
 * body: 11027c50-11027c85
 */

void __cdecl FUN_11027c50(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x16);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x140;
    puVar1[3] = 0x12e;
    puVar1[4] = 0;
    FUN_110062d0((ushort *)(puVar1 + 5),'\0');
  }
  return;
}


