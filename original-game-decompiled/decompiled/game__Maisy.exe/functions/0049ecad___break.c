
/* ==== __break @ 0049ecad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ecad-0049ecad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


