
/* ==== __break @ 004695fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695fa-004695fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


