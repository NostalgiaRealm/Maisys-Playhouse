
/* ==== __break @ 004298ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004298ff-004298ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


