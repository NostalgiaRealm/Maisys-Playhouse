
/* ==== FUN_0049c380 @ 0049c380 ==== 
 * signature: uint * __stdcall FUN_0049c380(void)
 * body: 0049c380-0049c3b0
 */

uint * FUN_0049c380(void)

{
  void *pvVar1;
  void **ppvVar2;
  uint *puVar3;
  
  ppvVar2 = FUN_0049ff90();
  pvVar1 = *ppvVar2;
  puVar3 = (uint *)__setdefaultprecision();
  if ((pvVar1 != (void *)0x0) && (puVar3 = *(uint **)((int)pvVar1 + 4), (*puVar3 & 0x10008) != 0)) {
    puVar3[8] = 0;
    puVar3[9] = 0xffff;
    puVar3 = puVar3 + 7;
  }
  return puVar3;
}


