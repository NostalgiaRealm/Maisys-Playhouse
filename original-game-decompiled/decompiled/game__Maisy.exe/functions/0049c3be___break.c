
/* ==== __break @ 0049c3be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049c3be-0049c3be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


