
/* ==== __break @ 0043be89 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043be89-0043be89
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


