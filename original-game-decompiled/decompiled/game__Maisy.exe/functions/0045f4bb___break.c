
/* ==== __break @ 0045f4bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f4bb-0045f4bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


