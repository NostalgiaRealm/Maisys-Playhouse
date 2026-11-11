
/* ==== FUN_0045b5a0 @ 0045b5a0 ==== 
 * signature: undefined __fastcall FUN_0045b5a0(int param_1)
 * body: 0045b5a0-0045b5d5
 */

void __fastcall FUN_0045b5a0(int param_1)

{
  void *pvVar1;
  
  *(undefined1 *)(param_1 + 0x86) = 1;
  pvVar1 = *(void **)(param_1 + 0x82);
  if ((pvVar1 != (void *)0x0) && (*(char *)((int)pvVar1 + 0xa4) != '\0')) {
    FUN_00408270(pvVar1);
    if (*(char *)(param_1 + 0x89) != '\0') {
      *(undefined1 *)(param_1 + 0x89) = 0;
    }
  }
  return;
}


