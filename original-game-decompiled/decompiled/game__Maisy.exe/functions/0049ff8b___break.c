
/* ==== __break @ 0049ff8b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ff8b-0049ff8b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


