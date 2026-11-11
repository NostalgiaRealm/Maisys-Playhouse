
/* ==== __break @ 004315fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004315fb-004315fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


