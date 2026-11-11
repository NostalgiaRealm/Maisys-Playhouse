
/* ==== __break @ 0049855d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049855d-0049855d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


