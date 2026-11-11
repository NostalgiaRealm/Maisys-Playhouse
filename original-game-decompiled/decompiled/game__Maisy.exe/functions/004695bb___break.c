
/* ==== __break @ 004695bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695bb-004695bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


