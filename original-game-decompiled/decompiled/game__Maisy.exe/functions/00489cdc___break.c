
/* ==== __break @ 00489cdc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489cdc-00489cdc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


