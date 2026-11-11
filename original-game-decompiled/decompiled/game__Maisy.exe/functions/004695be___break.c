
/* ==== __break @ 004695be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695be-004695be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


