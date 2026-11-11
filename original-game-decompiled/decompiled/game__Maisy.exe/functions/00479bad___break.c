
/* ==== __break @ 00479bad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bad-00479bad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


