
/* ==== FUN_1000_075f @ 1000:075f ==== 
 * signature: undefined __cdecl16near FUN_1000_075f(void)
 * body: 1000:075f-1000:077e
 */

void __cdecl16near FUN_1000_075f(void)

{
  int in_BX;
  uint *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (uint *)*(undefined2 *)(in_BX + 8);
  if (puVar1 == (uint *)*(undefined2 *)(in_BX + 10)) {
    puVar1 = (uint *)*(undefined2 *)(in_BX + 6);
  }
  while( true ) {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 2);
  }
  return;
}


