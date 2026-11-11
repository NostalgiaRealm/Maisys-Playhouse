
/* ==== __break @ 00479a1a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a1a-00479a1a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


