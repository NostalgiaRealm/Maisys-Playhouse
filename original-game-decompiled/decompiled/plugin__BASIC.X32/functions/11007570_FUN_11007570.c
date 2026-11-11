
/* ==== FUN_11007570 @ 11007570 ==== 
 * signature: undefined __cdecl FUN_11007570(undefined4 * param_1)
 * body: 11007570-110075aa
 */

void __cdecl FUN_11007570(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x22);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x4c4;
    puVar1[7] = 0xffffffff;
    *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfe;
    puVar1[3] = 0x65;
    puVar1[4] = 0;
    puVar1[5] = 1;
    puVar1[6] = 0;
  }
  return;
}


