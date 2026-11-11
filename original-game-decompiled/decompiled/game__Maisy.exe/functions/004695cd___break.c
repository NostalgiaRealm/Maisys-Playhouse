
/* ==== __break @ 004695cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695cd-004695cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


