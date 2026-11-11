
/* ==== __break @ 0044bcad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044bcad-0044bcad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


