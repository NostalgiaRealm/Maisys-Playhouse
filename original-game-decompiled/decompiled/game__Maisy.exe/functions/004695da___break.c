
/* ==== __break @ 004695da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695da-004695da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


