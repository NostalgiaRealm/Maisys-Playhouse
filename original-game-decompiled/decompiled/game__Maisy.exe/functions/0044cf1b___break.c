
/* ==== __break @ 0044cf1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044cf1b-0044cf1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


