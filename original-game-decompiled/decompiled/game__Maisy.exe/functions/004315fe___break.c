
/* ==== __break @ 004315fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004315fe-004315fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


