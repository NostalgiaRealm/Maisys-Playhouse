
/* ==== FUN_00409965 @ 00409965 ==== 
 * signature: undefined __stdcall FUN_00409965(void)
 * body: 00409965-0040997f
 */

void FUN_00409965(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_004138d0;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0040adf0((undefined *)puVar2);
    puVar2 = puVar1;
  }
  return;
}


