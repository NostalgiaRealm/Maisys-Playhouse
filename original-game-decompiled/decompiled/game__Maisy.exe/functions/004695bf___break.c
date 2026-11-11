
/* ==== __break @ 004695bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695bf-004695bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


