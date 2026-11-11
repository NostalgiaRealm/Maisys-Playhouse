
/* ==== __break @ 004695aa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695aa-004695aa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


