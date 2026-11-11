
/* ==== __break @ 004695bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695bd-004695bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


