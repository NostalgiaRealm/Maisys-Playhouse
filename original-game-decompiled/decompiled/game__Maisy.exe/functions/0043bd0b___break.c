
/* ==== __break @ 0043bd0b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd0b-0043bd0b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


