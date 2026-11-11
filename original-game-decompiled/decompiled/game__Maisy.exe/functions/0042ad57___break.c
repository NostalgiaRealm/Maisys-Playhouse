
/* ==== __break @ 0042ad57 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042ad57-0042ad57
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


