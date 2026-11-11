
/* ==== __break @ 0049ff8a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ff8a-0049ff8a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


