
/* ==== __break @ 004346ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004346ff-004346ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


