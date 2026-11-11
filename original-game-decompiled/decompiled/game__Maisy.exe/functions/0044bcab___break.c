
/* ==== __break @ 0044bcab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044bcab-0044bcab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


