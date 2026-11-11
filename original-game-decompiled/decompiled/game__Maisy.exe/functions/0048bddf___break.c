
/* ==== __break @ 0048bddf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048bddf-0048bddf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


