
/* ==== __break @ 0049ff8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ff8d-0049ff8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


