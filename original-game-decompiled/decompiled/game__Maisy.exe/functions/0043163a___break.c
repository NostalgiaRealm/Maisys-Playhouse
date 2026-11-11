
/* ==== __break @ 0043163a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043163a-0043163a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


