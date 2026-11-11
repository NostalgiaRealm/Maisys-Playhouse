
/* ==== __break @ 0043bd3b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd3b-0043bd3b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


