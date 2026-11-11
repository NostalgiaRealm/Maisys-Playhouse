
/* ==== FUN_11005280 @ 11005280 ==== 
 * signature: undefined __cdecl FUN_11005280(undefined4 * param_1)
 * body: 11005280-110052d1
 */

void __cdecl FUN_11005280(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_11019a40(param_1,0x2e);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x1a4;
    puVar2[4] = 0x12d;
    puVar2[5] = 0;
    puVar2[6] = 1;
    puVar2[7] = 0;
    puVar2[10] = 0xffffffff;
    puVar2[3] = 0;
    bVar1 = *(byte *)(puVar2 + 0xb);
    *(byte *)(puVar2 + 0xb) = bVar1 & 0xfe;
    *(byte *)(puVar2 + 0xb) = bVar1 & 0xfc;
    puVar2[8] = 1;
    puVar2[9] = 0;
  }
  return;
}


