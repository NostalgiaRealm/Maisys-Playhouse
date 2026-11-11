
/* ==== __break @ 0049f4bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f4bb-0049f4bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


