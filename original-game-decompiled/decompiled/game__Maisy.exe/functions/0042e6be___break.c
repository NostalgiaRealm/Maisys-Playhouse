
/* ==== __break @ 0042e6be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e6be-0042e6be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


