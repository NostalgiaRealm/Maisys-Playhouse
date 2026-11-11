
/* ==== FUN_0049e720 @ 0049e720 ==== 
 * signature: byte __cdecl FUN_0049e720(uint param_1)
 * body: 0049e720-0049e74f
 */

byte __cdecl FUN_0049e720(uint param_1)

{
  if (DAT_004e6790 <= param_1) {
    return 0;
  }
  return *(byte *)(*(int *)((int)&DAT_004e6690 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                  (param_1 & 0x1f) * 0x24) & 0x40;
}


