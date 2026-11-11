
/* ==== __break @ 004695de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695de-004695de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


