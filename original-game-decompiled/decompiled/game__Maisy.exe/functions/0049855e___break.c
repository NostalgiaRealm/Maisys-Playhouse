
/* ==== __break @ 0049855e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049855e-0049855e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


