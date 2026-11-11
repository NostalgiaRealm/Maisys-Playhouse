
/* ==== FUN_00436d50 @ 00436d50 ==== 
 * signature: undefined __thiscall FUN_00436d50(void * this, ushort param_1, uint param_2, char param_3)
 * body: 00436d50-00436dcb
 */

void __thiscall FUN_00436d50(void *this,ushort param_1,uint param_2,char param_3)

{
  uint *puVar1;
  
  if (param_3 != '\0') {
    puVar1 = (uint *)(*(int *)((int)this + (short)(param_1 >> 8 & 0x8f) * 0x124 + 0x13c) + 0x74 +
                     (param_1 & 0xff) * 0x80);
    *puVar1 = *puVar1 | param_2;
    return;
  }
  puVar1 = (uint *)(*(int *)((int)this + (short)(param_1 >> 8 & 0x8f) * 0x124 + 0x13c) + 0x74 +
                   (param_1 & 0xff) * 0x80);
  *puVar1 = *puVar1 & ~param_2;
  return;
}


