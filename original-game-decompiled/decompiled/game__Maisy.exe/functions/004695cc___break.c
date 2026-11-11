
/* ==== __break @ 004695cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695cc-004695cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


