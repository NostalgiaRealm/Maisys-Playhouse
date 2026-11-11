
/* ==== __break @ 00486aae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486aae-00486aae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


